#include "DialogoPrestamo.h"
#include <wx/msgdlg.h>
#include <wx/variant.h>
#include <wx/datectrl.h>
#include <wx/colour.h> // Para pintar las celdas de la grilla

DialogoPrestamo::DialogoPrestamo(wxWindow *parent, Alumno alumnoSeleccionado)
	: MyDialogPrestamo(parent), alumnoSeleccionado(alumnoSeleccionado) 
{
	// 1. Mostrar datos del alumno
	m_staticPrestar_NombreAlumno_Valor->SetLabel(wxString(this->alumnoSeleccionado.VerNombre()));
	m_staticPrestar_DniAlumno_Valor->SetLabel(wxString::Format("%d", (int)this->alumnoSeleccionado.VerDNI()));
	
	// 2. Configurar Grilla (m_gridHistorial)
	if(m_gridHistorial->GetNumberCols() == 0) {
		m_gridHistorial->AppendCols(5);
		m_gridHistorial->SetColLabelValue(0, "ID");
		m_gridHistorial->SetColLabelValue(1, "Nombre Libro");
		m_gridHistorial->SetColLabelValue(2, "Fecha Préstamo");
		m_gridHistorial->SetColLabelValue(3, "Fecha Devolución");
		m_gridHistorial->SetColLabelValue(4, "Estado");
		
		m_gridHistorial->SetColSize(1, 200);
		m_gridHistorial->SetColSize(2, 120);
		m_gridHistorial->SetColSize(3, 120);
		m_gridHistorial->SetColSize(4, 150);
	}
	
	// 3. Configurar Lista de Resultados
	if (m_listaResultadosLibros->GetColumnCount() == 0) {
		m_listaResultadosLibros->AppendTextColumn("ID", wxDATAVIEW_CELL_INERT, 50);
		m_listaResultadosLibros->AppendTextColumn("Título", wxDATAVIEW_CELL_INERT, 250);
		m_listaResultadosLibros->AppendTextColumn("Disponible", wxDATAVIEW_CELL_INERT, 80);
	}
	
	// 4. ESTADO INICIAL
	m_btnConfirmar->Enable(false);
	m_libroEsSeleccionado = false;
	
	// 5. VINCULACIÓN DE EVENTOS
	m_txtBuscarLibro->Bind(wxEVT_TEXT, &DialogoPrestamo::OnBuscarLibro, this);
	m_btnConfirmar->Bind(wxEVT_BUTTON, &DialogoPrestamo::OnConfirmarPrestamoClick, this);
	m_listaResultadosLibros->Bind(wxEVT_DATAVIEW_SELECTION_CHANGED, &DialogoPrestamo::OnListaLibrosSelectionChanged, this);
	
	if (m_datePickerDevolucion) {
		m_datePickerDevolucion->Bind(wxEVT_DATE_CHANGED, &DialogoPrestamo::OnFechaDevolucionChanged, this);
	}
	
	// 6. Cargar datos del alumno en la grilla
	CargarHistorialEnGrilla();
}

DialogoPrestamo::~DialogoPrestamo() {}

void DialogoPrestamo::CargarHistorialEnGrilla() {
	if (m_gridHistorial->GetNumberRows() > 0) {
		m_gridHistorial->DeleteRows(0, m_gridHistorial->GetNumberRows());
	}
	
	System sistema;
	Historial historial;
	int filaActual = 0;
	std::vector<size_t> librosActivosIDs; // Para evitar duplicados en la visualización
	
	// ---------------------------------------------------------
	// FASE 1: CARGAR PRÉSTAMOS ACTIVOS (Aún no devueltos)
	// ---------------------------------------------------------
	try {
		std::vector<Libros_en_Prestamo> activos = sistema.VerContenido<Libros_en_Prestamo>("Recursos/Binarios/LibrosPrestamosActivos.bin", true);
		std::vector<Libro> todosLosLibros = sistema.VerContenido<Libro>(sistema.libros(), true);
		
		for (const auto& prestamo : activos) {
			if (prestamo.id_Alumno == alumnoSeleccionado.VerID()) {
				m_gridHistorial->AppendRows(1);
				librosActivosIDs.push_back(prestamo.id_Libro); // Lo guardamos para FASE 2
				
				// Buscar nombre del libro
				wxString nombreLibro = "Desconocido";
				for (const auto& l : todosLosLibros) {
					if (l.VerID() == prestamo.id_Libro) {
						nombreLibro = wxString(l.VerNombre());
						break;
					}
				}
				
				wxString fechaDev = wxString::Format("%02d/%02d/%04d", (int)prestamo.dia_Devolucion, (int)prestamo.mes_Devolucion, (int)prestamo.anio_Devolucion);
				
				// NUEVO: Formateamos la fecha de inicio
				wxString fechaInicio = wxString::Format("%02d/%02d/%04d", (int)prestamo.dia_Prestamo, (int)prestamo.mes_Prestamo, (int)prestamo.anio_Prestamo);
				
				m_gridHistorial->SetCellValue(filaActual, 0, wxString::Format("%d", (int)prestamo.id_Libro));
				m_gridHistorial->SetCellValue(filaActual, 1, nombreLibro);
				
				// REEMPLAZA EL "-" POR fechaInicio:
				m_gridHistorial->SetCellValue(filaActual, 2, fechaInicio); 
				
				m_gridHistorial->SetCellValue(filaActual, 3, fechaDev);
				m_gridHistorial->SetCellValue(filaActual, 4, "EN PRÉSTAMO");
				
				// Pintar la fila de amarillo claro para resaltar que está activo
				for (int c = 0; c < 5; c++) {
					m_gridHistorial->SetCellBackgroundColour(filaActual, c, wxColour(255, 255, 200)); 
				}
				
				filaActual++;
			}
		}
	} catch (...) {
		// El archivo puede no existir la primera vez, se ignora el error
	}
	
	// ---------------------------------------------------------
	// FASE 2: CARGAR HISTORIAL (Antiguos / Ya devueltos)
	// ---------------------------------------------------------
	try {
		std::vector<Registro> registros = historial.Mostrar_Historial(alumnoSeleccionado.VerID());
		
		for (const auto& reg : registros) {
			// Verificamos si este registro ya se mostró como activo para no duplicarlo
			bool esActivo = false;
			for (size_t idActivo : librosActivosIDs) {
				if (reg.id_libro == idActivo) {
					esActivo = true;
					break;
				}
			}
			if (esActivo) continue; // Si está activo, saltamos al siguiente
			
			// Si no está activo, lo agregamos como historial pasado
			m_gridHistorial->AppendRows(1);
			wxString fechaDev = wxString::Format("%02d/%02d/%04d", (int)reg.dia, (int)reg.mes, (int)reg.anio);
			
			// NUEVO: Calculamos la fecha en la que se prestó
			wxString fechaInicio = wxString::Format("%02d/%02d/%04d", (int)reg.dia_prestamo, (int)reg.mes_prestamo, (int)reg.anio_prestamo);
			
			m_gridHistorial->SetCellValue(filaActual, 0, wxString::Format("%d", (int)reg.id_libro));
			m_gridHistorial->SetCellValue(filaActual, 1, wxString(reg.nombre_libro));
			
			// ACÁ REEMPLAZAMOS EL "-"
			m_gridHistorial->SetCellValue(filaActual, 2, fechaInicio); 
			
			m_gridHistorial->SetCellValue(filaActual, 3, fechaDev);
			m_gridHistorial->SetCellValue(filaActual, 4, "Devuelto/Historial");
			
			filaActual++;
		}
	} catch (...) {
		// El archivo de historial puede no existir, se ignora
	}
}

void DialogoPrestamo::OnBuscarLibro(wxCommandEvent& event) {
	wxString textoBusqueda = m_txtBuscarLibro->GetValue().Lower();
	
	m_listaResultadosLibros->DeleteAllItems(); 
	m_librosEncontrados.clear();
	
	m_libroEsSeleccionado = false;
	ValidarPrestamo();
	
	if (textoBusqueda.IsEmpty()) return;
	
	System sistema;
	std::vector<Libro> todosLosLibros;
	
	try {
		todosLosLibros = sistema.VerContenido<Libro>(sistema.libros(), true);
	} catch (...) {}
	
	for (Libro& libro : todosLosLibros) {
		wxString titulo = wxString(libro.VerNombre()).Lower();
		
		if (titulo.Contains(textoBusqueda)) {
			// Opcional: Si quieres que no aparezcan los eliminados
			if (!libro.Existencia()) continue; 
			
			m_librosEncontrados.push_back(libro);
			
			wxVector<wxVariant> fila;
			// AGREGA ESTA LÍNEA:
			fila.push_back(wxVariant(wxString::Format("%d", (int)libro.VerID())));
			fila.push_back(wxVariant(wxString(libro.VerNombre())));
			fila.push_back(wxVariant(libro.EstadoDisponibilidad() ? "Sí" : "No"));
			
			m_listaResultadosLibros->AppendItem(fila);
		}
	}
}

void DialogoPrestamo::OnListaLibrosSelectionChanged(wxDataViewEvent& event) {
	if (m_listaResultadosLibros->GetSelectedRow() != wxNOT_FOUND) {
		m_libroEsSeleccionado = true;
	} else {
		m_libroEsSeleccionado = false;
	}
	ValidarPrestamo();
}

void DialogoPrestamo::OnFechaDevolucionChanged(wxDateEvent& event) {
	ValidarPrestamo();
	event.Skip();
}

void DialogoPrestamo::ValidarPrestamo() {
	bool fechaValida = false;
	if (m_datePickerDevolucion) {
		fechaValida = m_datePickerDevolucion->GetValue().IsValid();
	}
	
	if (m_libroEsSeleccionado && fechaValida) {
		m_btnConfirmar->Enable(true);
	} else {
		m_btnConfirmar->Enable(false);
	}
}

void DialogoPrestamo::OnConfirmarPrestamoClick(wxCommandEvent& event) {
	int seleccionIndex = m_listaResultadosLibros->GetSelectedRow();
//	
	if (seleccionIndex == wxNOT_FOUND) {
		wxMessageBox("Selecciona un libro.", "Error");
		return;
	}
//	
	wxDateTime fechaDev = m_datePickerDevolucion->GetValue();
	int dia = fechaDev.GetDay();
	int mes = fechaDev.GetMonth() + 1; // wxDateTime va de 0 a 11
	int anio = fechaDev.GetYear();
	cout<<"llegamos hasta aca"<<endl;
	Libro libroAPrestar = m_librosEncontrados[0];
//	
	if (!libroAPrestar.EstadoDisponibilidad()) {
		wxMessageBox("El libro ya está prestado o no disponible.", "Error", wxICON_ERROR);
		return;
	}
//	
//	 SOLUCIÓN 1: Quitamos el "wxString()" de adentro para que el %s no rompa el programa
	
	
	
		
		 
		
			System sistema;
			
			 
	// Calculamos la fecha actual (hoy) si no la habías calculado antes en la función
	wxDateTime fechaHoy = wxDateTime::Today();
	
	Historial historial;
	historial.Cargar_Historial(
							   libroAPrestar.VerID(), 
							   alumnoSeleccionado.VerID(),
							   alumnoSeleccionado.VerNombre(), 
							   libroAPrestar.VerNombre(),
							   dia, mes, anio, // Fechas de Devolución
							   fechaHoy.GetDay(), fechaHoy.GetMonth() + 1, fechaHoy.GetYear() // Fechas de Inicio
							   );
			
			
			
			
			Libros_en_Prestamo nuevoPrestamo;
			nuevoPrestamo.id_Libro = libroAPrestar.VerID();
			nuevoPrestamo.id_Alumno = alumnoSeleccionado.VerID();
			nuevoPrestamo.dia_Devolucion = dia;
			nuevoPrestamo.mes_Devolucion = mes;
			nuevoPrestamo.anio_Devolucion = anio;
			
			// NUEVO: Guardamos la fecha de inicio del préstamo
			nuevoPrestamo.dia_Prestamo = fechaHoy.GetDay();
			nuevoPrestamo.mes_Prestamo = fechaHoy.GetMonth() + 1; // Meses de 0 a 11
			nuevoPrestamo.anio_Prestamo = fechaHoy.GetYear();
			
			std::vector<Libros_en_Prestamo> activosPrevios;
			 
			activosPrevios = sistema.VerContenido<Libros_en_Prestamo>("Recursos/Binarios/LibrosPrestamosActivos.bin", true); // Ignoramos si el archivo aún no existe
			
			nuevoPrestamo.id_Prestamo = activosPrevios.size() + 1;
			sistema.AlUltimo("Recursos/Binarios/LibrosPrestamosActivos.bin", nuevoPrestamo);
			
			 
			std::vector<Libro> todos = sistema.VerContenido<Libro>(sistema.libros(), true);
			for (auto &l : todos) {
				if (l.VerID() == libroAPrestar.VerID()) {
					l.SetDisponible(false); // Lo marcamos como no disponible
					break;
				}
			}
			sistema.Guardar(sistema.libros(), todos, true); // Sobreescribimos con el nuevo estado
			
			wxMessageBox("Préstamo registrado exitosamente.");
			EndModal(wxID_OK); 
			

	
}
