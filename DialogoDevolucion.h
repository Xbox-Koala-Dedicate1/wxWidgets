#ifndef DIALOGODEVOLUCION_H
#define DIALOGODEVOLUCION_H

#include "ProyBaseDevolucion.h" 
#include "Funcionalidades/alumno/alumno.h"
#include "Funcionalidades/libro/libro.h"
#include "Funcionalidades/system/system.h"
#include "Funcionalidades/Historial/Historial.h" // NUEVO: Para poder guardar el historial
#include <vector>
#include <wx/grid.h> 

class DialogoDevolucion : public MyDialogDevolucion {
private:
	Alumno alumnoSeleccionado;
	
	void CargarLibrosPrestados();
	void OnSeleccionarLibro(wxGridEvent& event);
	
	// NUEVO: El evento del botón
	void OnConfirmarDevolucion(wxCommandEvent& event);
	
protected:
	void OnConfirmarDevolucion(wxCommandEvent& event);

public:
	DialogoDevolucion(wxWindow *parent, Alumno alumnoSeleccionado);
	~DialogoDevolucion();
};

#endif
