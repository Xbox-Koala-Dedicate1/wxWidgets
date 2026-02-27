#ifndef DIALOGOEDITARLIBRO_H
#define DIALOGOEDITARLIBRO_H
#include "ProyBaseEditarLibro.h"

class DialogoEditarLibro : public MyDialogEditarLibro {
	
private:
	
protected:
	void m_button_NuevoElemento_cancelar( wxCommandEvent& event )  override;
	void OnButtonClickCerrar( wxCommandEvent& event )  override;
	
public:
	DialogoEditarLibro(wxWindow *parent=NULL);
	~DialogoEditarLibro();
};

#endif

