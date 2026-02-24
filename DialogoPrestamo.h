#ifndef DIALOGOPRESTAMO_H
#define DIALOGOPRESTAMO_H

#include "ProyBasePrestamo.h"
#include "Funcionalidades/alumno/alumno.h"
#include "Funcionalidades/libro/libro.h"
#include <vector>
#include <wx/dataview.h>

class DialogoPrestamo : public MyDialogPrestamo { 
protected:
	Alumno alumnoSeleccionado;
	std::vector<Libro> m_librosEncontrados;
	
	// Eventos (sin la palabra override para evitar errores)
	void OnBuscarLibro(wxCommandEvent& event);
	void OnConfirmarPrestamoClick(wxCommandEvent& event);
	
public:
	DialogoPrestamo(wxWindow *parent, Alumno alumnoSeleccionado);
	~DialogoPrestamo();
	
	void CargarHistorialEnGrilla();
};

#endif
