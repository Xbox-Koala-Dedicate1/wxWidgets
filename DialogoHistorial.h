#ifndef DIALOGOHISTORIAL_H
#define DIALOGOHISTORIAL_H
#include "ProyBaseHistorial.h"
#include "Funcionalidades/alumno/alumno.h"

class DialogoHistorial : public MyDialogHistorial {
	
private:
	
protected:
	Alumno alumnoSeleccionado;
public:
	DialogoHistorial(wxWindow *parent, Alumno alumnoSeleccionado);
	void CargarLista(wxListCtrl* lista);
	~DialogoHistorial();
};

#endif

