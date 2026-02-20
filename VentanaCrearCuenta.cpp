#include "VentanaCrearCuenta.h"
#include <wx/msgdlg.h>
#include "VentanaLogin.h"
#include "VentanaParaAlumno.h"

VentanaCrearCuenta::VentanaCrearCuenta(wxWindow *parent) : MyFrameCrearCuenta(parent) {
	
}

VentanaCrearCuenta::~VentanaCrearCuenta() {
	
}

void VentanaCrearCuenta::OnButtonClickCerrar( wxCommandEvent& event )  {
	VentanaLogin * ventanaLo = new VentanaLogin;
	ventanaLo->Show();
	this->Close();
}

void VentanaCrearCuenta::OnclikBienvenido_Iniciar( wxCommandEvent& event )  {
	long dni; 

	if(m_text_CrearCuenta_campo1->GetValue() == ""){
		wxMessageBox("Eso no es un nombre","Error",wxOK|wxICON_ERROR);
		return;
	}
	if(!m_text_CrearCuenta_campo2->GetValue().ToLong(&dni)){
		wxMessageBox("Eso no es un dni","Error",wxOK|wxICON_ERROR);
		return;
	}
	///Construir el alumno

	
	VentanaParaAlumno *ventanaAlum = new VentanaParaAlumno(NULL);
	ventanaAlum->Show();
	this->Close();
}
