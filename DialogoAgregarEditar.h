#ifndef DIALOGOAGREGAREDITAR_H
#define DIALOGOAGREGAREDITAR_H
#include "ProyBaseAgregarEditarLibro.h"
#include "Funcionalidades/libro/libro.h"

class DialogoAgregarEditar : public MyDialogAgregarEditarLibro {
	
private:
	Libro actual;
protected:
	void OnclikButtonClickEdicion( wxCommandEvent& event )  override;
	
public:
	void OnTagClick(wxCommandEvent& event);	
	DialogoAgregarEditar(wxWindow *parent);
	DialogoAgregarEditar(wxWindow *parent,Libro& actual);
	~DialogoAgregarEditar();
};

#endif

