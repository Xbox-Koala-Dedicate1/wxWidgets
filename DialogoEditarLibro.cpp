#include "DialogoEditarLibro.h"

DialogoEditarLibro::DialogoEditarLibro(wxWindow *parent) : MyDialogEditarLibro(parent) {
	
}

void DialogoEditarLibro::m_button_NuevoElemento_cancelar( wxCommandEvent& event )  {
	event.Skip();
}

void DialogoEditarLibro::OnButtonClickCerrar( wxCommandEvent& event )  {
	event.Skip();
}

DialogoEditarLibro::~DialogoEditarLibro() {
	
}

