#include "DialogoDevolucion.h"
#include <wx/msgdlg.h>
#include <wx/datetime.h> 

DialogoDevolucion::DialogoDevolucion(wxWindow *parent, Alumno alumnoSeleccionado)
	: MyDialogDevolucion(parent), alumnoSeleccionado(alumnoSeleccionado) 
{
	if(m_gridDevoluciones->GetNumberCols() == 0) {
		m_gridDevoluciones->AppendCols(4);
		m_gridDevoluciones->SetColLabelValue(0, "ID Libro");
		m_gridDevoluciones->SetColLabelValue(1, "Fecha Préstamo");
		m_gridDevoluciones->SetColLabelValue(2, "Fecha Devolución");
		m_gridDevoluciones->SetColLabelValue(3, "Fecha Devuelto Alumno");
		
		m_gridDevoluciones->SetColSize(0, 80);
		m_gridDevoluciones->SetColSize(1, 130);
		m_gridDevoluciones->SetColSize(2, 130);
		m_gridDevoluciones->SetColSize(3, 170);
		
		m_gridDevoluciones->SetSelectionMode(wxGrid::wxGridSelectRows);
	}
	
	m_btnConfirmarDevolucion->Disable();
	
	m_gridDevoluciones->Bind(wxEVT_GRID_SELECT_CELL, &DialogoDevolucion::OnSeleccionarLibro, this);
	
	// NUEVO: Conectamos el botón a nuestra función
	m_btnConfirmarDevolucion->Bind(wxEVT_BUTTON, &DialogoDevolucion::OnConfirmarDevolucion, this);
	
	CargarLibrosPrestados();
}

DialogoDevolucion::~DialogoDevolucion() {
}

void DialogoDevolucion::CargarLibrosPrestados() {
	if (m_gridDevoluciones->GetNumberRows() > 0) {
		m_gridDevoluciones->DeleteRows(0, m_gridDevoluciones->GetNumberRows());
	}
	
	System sistema;
	int filaActual = 0;
	
	wxDateTime fechaHoy = wxDateTime::Today();
	wxString stringFechaHoy = fechaHoy.Format("%02d/%02d/%04d");
	
	try {
		std::vector<Libros_en_Prestamo> activos = sistema.VerContenido<Libros_en_Prestamo>("Recursos/Binarios/LibrosPrestamosActivos.bin", true);
		
		for (const auto& prestamo : activos) {
			if (prestamo.id_Alumno == alumnoSeleccionado.VerID()) {
				m_gridDevoluciones->AppendRows(1);
				
				wxString fechaDev = wxString::Format("%02d/%02d/%04d", 
													 (int)prestamo.dia_Devolucion, (int)prestamo.mes_Devolucion, (int)prestamo.anio_Devolucion);
				
				wxString fechaInicio = wxString::Format("%02d/%02d/%04d", 
														(int)prestamo.dia_Prestamo, (int)prestamo.mes_Prestamo, (int)prestamo.anio_Prestamo);
				
				m_gridDevoluciones->SetCellValue(filaActual, 0, wxString::Format("%d", (int)prestamo.id_Libro));
				m_gridDevoluciones->SetCellValue(filaActual, 1, fechaInicio); 
				m_gridDevoluciones->SetCellValue(filaActual, 2, fechaDev);
				m_gridDevoluciones->SetCellValue(filaActual, 3, stringFechaHoy); 
				
				for (int c = 0; c < 4; c++) {
					m_gridDevoluciones->SetReadOnly(filaActual, c, true);
				}
				
				filaActual++;
			}
		}
	} catch (...) {}
}

void DialogoDevolucion::OnSeleccionarLibro(wxGridEvent& event) {
	if (event.GetRow() >= 0) {
		m_btnConfirmarDevolucion->Enable(true); 
	}
	event.Skip(); 
}

// =========================================================================
// NUEVO: LA LÓGICA DE DEVOLUCIÓN
// =========================================================================
void DialogoDevolucion::OnConfirmarDevolucion(wxCommandEvent& event) {
	// 1. Obtener la fila seleccionada
	wxArrayInt filasSeleccionadas = m_gridDevoluciones->GetSelectedRows();
	if (filasSeleccionadas.IsEmpty()) {
		wxMessageBox("Por favor, selecciona un libro haciendo clic en la fila.", "Aviso", wxICON_WARNING);
		return;
	}
	
	int fila = filasSeleccionadas[0];
	
	// Extraer el ID del libro (está en la columna 0)
	wxString strIdLibro = m_gridDevoluciones->GetCellValue(fila, 0);
	long idLibroSeleccionado;
	strIdLibro.ToLong(&idLibroSeleccionado);
	
	System sistema;
	
	// 2. Liberar el libro (Poner EstadoDisponibilidad a true)
	std::vector<Libro> todosLosLibros = sistema.VerContenido<Libro>(sistema.libros(), true);
	wxString nombreLibro = "Desconocido";
	
	for (auto& libro : todosLosLibros) {
		if (libro.VerID() == (size_t)idLibroSeleccionado) {
			libro.SetDisponible(true); // ¡Vuelve a la biblioteca!
			nombreLibro = wxString(libro.VerNombre());
			break;
		}
	}
	// Guardamos el nuevo estado de los libros (sobreescribiendo)
	sistema.Guardar(sistema.libros(), todosLosLibros, true);
	
	// 3. Eliminarlo de "Préstamos Activos"
	std::vector<Libros_en_Prestamo> activos = sistema.VerContenido<Libros_en_Prestamo>("Recursos/Binarios/LibrosPrestamosActivos.bin", true);
	std::vector<Libros_en_Prestamo> activosActualizados;
	
	Libros_en_Prestamo prestamoQueSeDevuelve;
	bool encontrado = false;
	
	for (const auto& prestamo : activos) {
		// Si es el préstamo que buscamos, NO lo agregamos a la nueva lista (lo borramos)
		if (!encontrado && prestamo.id_Libro == (size_t)idLibroSeleccionado && prestamo.id_Alumno == alumnoSeleccionado.VerID()) {
			prestamoQueSeDevuelve = prestamo; // Lo guardamos para pasarlo al historial
			encontrado = true;
		} else {
			activosActualizados.push_back(prestamo); // Mantenemos los que no se devolvieron
		}
	}
	// Sobreescribimos el archivo de activos con la lista limpia
	sistema.Guardar("Recursos/Binarios/LibrosPrestamosActivos.bin", activosActualizados, true);
	
	// 4. Guardar en el Historial definitivo
	if (encontrado) {
		Historial historial;
		wxDateTime fechaHoy = wxDateTime::Today(); // Fecha en que realmente devolvió el libro
		
		historial.Cargar_Historial(
								   prestamoQueSeDevuelve.id_Libro,
								   alumnoSeleccionado.VerID(),
								   alumnoSeleccionado.VerNombre(),
								   nombreLibro.ToStdString(),
								   fechaHoy.GetDay(), fechaHoy.GetMonth() + 1, fechaHoy.GetYear(), // Día de devolución (HOY)
								   prestamoQueSeDevuelve.dia_Prestamo, prestamoQueSeDevuelve.mes_Prestamo, prestamoQueSeDevuelve.anio_Prestamo // Día de inicio
								   );
	}
	
	wxMessageBox("¡El libro ha sido devuelto exitosamente!\nYa se encuentra disponible en la biblioteca.", "Devolución Exitosa", wxICON_INFORMATION);
	
	// 5. Cerramos la ventana
	EndModal(wxID_OK);
}

void DialogoDevolucion::m_btnConfirmarDevolucion( wxCommandEvent& event )  {
	event.Skip();
}

