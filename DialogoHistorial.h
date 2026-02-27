#ifndef DIALOGOHISTORIAL_H
#define DIALOGOHISTORIAL_H
#include "ProyBaseHistorial.h"
#include "Funcionalidades/alumno/alumno.h"
#include "Funcionalidades/Historial/Historial.h"


class DialogoHistorial : public MyDialogHistorial {
	
private:
	Alumno alumnoSeleccionado; 
	Libro libroSeleccionado; 
protected:
	
	void CargarListaUsuario(wxListCtrl* lista);
	void CargarListaLibro(wxListCtrl* lista);
public:
	DialogoHistorial(wxWindow *parent, Alumno& alumnoSeleccionado);
	DialogoHistorial(wxWindow *parent, Libro& libroSeleccionado);
	~DialogoHistorial();
};

#endif

