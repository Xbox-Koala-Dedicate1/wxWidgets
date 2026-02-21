#ifndef DIALOGOPRESTAMO_H
#define DIALOGOPRESTAMO_H
#include "wx_prestamo.h"
#include "Funcionalidades/alumno/alumno.h"
#include <wx/listctrl.h>


class DialogoPrestamo : public MyDialogPrestamo {
	
private:
	
protected:
	Alumno alumnoSeleccionado;
public:
	
	DialogoPrestamo(wxWindow *parent, Alumno alumnoSeleccionado);
	~DialogoPrestamo();
	void CargarLista(wxListCtrl* lista);
};

#endif

