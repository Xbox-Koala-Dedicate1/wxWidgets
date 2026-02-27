#ifndef DIALOGOVERLIBRO_H
#define DIALOGOVERLIBRO_H
#include "ProyBaseVerLibro.h"
#include "Funcionalidades/libro/libro.h"

class DialogoVerLibro : public MyDialogVerLibro {
	
private:
	Libro actual;
protected:
	void OnButtonClickReservar( wxCommandEvent& event )  override;
	void OnclikButtonClickEdicion( wxCommandEvent& event )  override;
	
public:
	void OnTagClick(wxCommandEvent& event);	
	DialogoVerLibro(wxWindow *parent,Libro& actual);
	~DialogoVerLibro();
};

#endif

