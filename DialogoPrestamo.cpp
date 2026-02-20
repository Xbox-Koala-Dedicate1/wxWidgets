#include "DialogoPrestamo.h"
#include "Funcionalidades/persistencia/Persistencia.h"
#include <wx/msgdlg.h>
#include <ctime> // Para generar la fecha actual

DialogoPrestamo::DialogoPrestamo(wxWindow* parent, const Alumno& alumno)
	: DialogoPrestamoBase(parent), alumnoActual(alumno) 
{
	// 1. Mostrar los datos del alumno en la interfaz
	// Asegúrate de usar los nombres exactos que le diste a los elementos en wxFormBuilder
	txtNombreAlumno->SetLabel(wxString::FromUTF8(alumnoActual.getNombre().c_str()));
	txtDniAlumno->SetLabel(wxString::FromUTF8(alumnoActual.getDNI().c_str()));
	
	// 2. Cargar los libros inicialmente (sin filtro)
	RefrescarListaLibros();
}

void DialogoPrestamo::RefrescarListaLibros(const wxString& filtroTexto) {
	// Limpiamos la lista visual y nuestro vector interno
	listBoxLibros->Clear(); 
	librosDisponibles.clear();
	
	// Traemos todos los libros (asumiendo que tienes un método así en Persistencia)
	std::vector<Libro> todosLosLibros = Persistencia::ObtenerTodosLosLibros();
	std::string filtro = std::string(filtroTexto.mb_str());
	
	for (const auto& libro : todosLosLibros) {
		// Solo nos interesan los libros que ESTÁN DISPONIBLES
		if (libro.estaDisponible()) {
			
			// Si el buscador está vacío o el título del libro coincide con la búsqueda
			bool coincideBusqueda = filtro.empty() || 
				(libro.getTitulo().find(filtro) != std::string::npos); // Podrías convertir todo a minúsculas para mejorar la búsqueda
			
			if (coincideBusqueda) {
				librosDisponibles.push_back(libro);
				
				// Agregamos el libro a la lista visual (ej: "1984 - George Orwell")
				wxString itemLabel = wxString::FromUTF8(libro.getTitulo().c_str()) + " - " + 
					wxString::FromUTF8(libro.getAutor().c_str());
				listBoxLibros->Append(itemLabel);
			}
		}
	}
}

// Evento que se dispara cada vez que el usuario escribe en la barra de búsqueda
void DialogoPrestamo::OnBuscarLibroTextoCambia(wxCommandEvent& event) {
	wxString textoBusqueda = txtBuscadorLibros->GetValue();
	RefrescarListaLibros(textoBusqueda);
}

// Evento del botón de confirmar
void DialogoPrestamo::OnConfirmarPrestamoClick(wxCommandEvent& event) {
	int seleccionIndex = listBoxLibros->GetSelection();
	
	if (seleccionIndex == wxNOT_FOUND) {
		wxMessageBox("Por favor, selecciona un libro de la lista.", "Advertencia", wxICON_WARNING);
		return;
	}
	
	libroSeleccionado = librosDisponibles[seleccionIndex];
	System sys;
	
	// 1. Actualizar el libro a "No Disponible" en libros.bin
	bool actualizado = sys.actualizar_disponibilidad(sys.pathLibros(), libroSeleccionado.VerID());
	
	if (!actualizado) {
		wxMessageBox("Error al actualizar la base de datos de libros.", "Error", wxICON_ERROR);
		return;
	}
	
	// 2. Crear el registro del préstamo
	RegistroPrestamo nuevoPrestamo;
	nuevoPrestamo.dniAlumno = alumnoActual.ObtenerDni(); 
	nuevoPrestamo.idLibro = libroSeleccionado.VerID();
	nuevoPrestamo.devuelto = false; // Por defecto, apenas se presta, NO está devuelto
	
	// 1. Obtener los días desde la interfaz (si está vacío, damos 7 días por defecto)
	long diasPrestamo = 7; 
	wxString inputDias = txtDiasRestantes->GetValue();
	if (!inputDias.IsEmpty()) {
		inputDias.ToLong(&diasPrestamo);
	}
	
	// 2. Calcular la fecha actual y la fecha de devolución
	time_t tiempoActual = time(0);
	tm* tmActual = localtime(&tiempoActual);
	strftime(nuevoPrestamo.fechaPrestamo, sizeof(nuevoPrestamo.fechaPrestamo), "%d/%m/%Y", tmActual);
	
	// Sumamos los días al tiempo actual para calcular el vencimiento
	time_t tiempoDevolucion = tiempoActual + (diasPrestamo * 24 * 60 * 60); 
	tm* tmDevolucion = localtime(&tiempoDevolucion);
	strftime(nuevoPrestamo.fechaDevolucion, sizeof(nuevoPrestamo.fechaDevolucion), "%d/%m/%Y", tmDevolucion);
	
	// 3. Guardar usando System
	System sys;
	sys.actualizar_disponibilidad(sys.pathLibros(), libroSeleccionado.VerID());
	
	vector<RegistroPrestamo> vectorRegistro = {nuevoPrestamo};
	sys.Guardar("Recursos/Binarios/prestados.bin", vectorRegistro, false); // false = agregar al final
	
	wxMessageBox("Préstamo registrado. Vence el: " + wxString(nuevoPrestamo.fechaDevolucion), "Éxito");
	EndModal(wxID_OK); 
}
}

