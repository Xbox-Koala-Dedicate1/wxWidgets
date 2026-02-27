#ifndef DIALOGOPRESTAMO_H
#define DIALOGOPRESTAMO_H

#include "ProyBasePrestamo.h"
#include "Funcionalidades/alumno/alumno.h"
#include "Funcionalidades/libro/libro.h"
#include "Funcionalidades/system/system.h"      
#include "Funcionalidades/Historial/Historial.h" 
#include <vector>
#include <wx/dataview.h>
#include <wx/dateevt.h>

class DialogoPrestamo : public MyDialogPrestamo { 
protected:
	Alumno alumnoSeleccionado;
	std::vector<Libro> m_librosEncontrados;
	
	// Control de estado
	bool m_libroEsSeleccionado = false;
	
	// Eventos
	void OnBuscarLibro(wxCommandEvent& event);
	void OnConfirmarPrestamoClick(wxCommandEvent& event);
	void OnFechaDevolucionChanged(wxDateEvent& event);
	void OnListaLibrosSelectionChanged(wxDataViewEvent& event);
	
	// Validador
	void ValidarPrestamo();
	
public:
	DialogoPrestamo(wxWindow *parent, Alumno alumnoSeleccionado);
	~DialogoPrestamo();
	
	void CargarHistorialEnGrilla();
};

#endif
