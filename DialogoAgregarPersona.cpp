#include "DialogoAgregarPersona.h"
#include "Funcionalidades/system/system.h"
#include "Funcionalidades/bibliotecario/bibliotecario.h"
#include <wx/msgdlg.h>

DialogoAgregarPersona::DialogoAgregarPersona(wxWindow *parent, System* sistema, Bibliotecario* admin,int tipo,string path) : MyDialogAgregarPersona(parent) {
	this->path = path;
	this->sistema = sistema;
	this->tipo = tipo;
}

void DialogoAgregarPersona::onTextEnter_Bienvenido_Confirmar( wxCommandEvent& event )  {
	///Alumno -> 0
	/// Bibliotecario -> 1
	long dni;
	if(!m_text_Dni_Valor->GetValue().ToLong(&dni)){
		wxMessageBox("Eso no es un dni","Error",wxOK|wxICON_ERROR);
		return;
	}
	if(m_text_Apellido_Valor->GetValue() == ""){
		wxMessageBox("Eso no es un Apellido","Error",wxOK|wxICON_ERROR);
		return;
	}
	if(m_text_Nombre_Valor->GetValue() == ""){
		wxMessageBox("Eso no es un Nombre","Error",wxOK|wxICON_ERROR);
		return;
	}
	
	string nombreCompleto = m_text_Apellido_Valor->GetValue().ToStdString() +" " +  m_text_Nombre_Valor->GetValue().ToStdString(); ///Unir nombre y apellido, separado por espacio
	int EnteroDni = static_cast<int>(dni);
	if(tipo==0){
		Alumno aux(sistema->VerUltimo<Alumno>(path)+1,nombreCompleto.c_str(),dni);
		sistema->AlUltimo<Alumno>(sistema->alumnos(),aux);
	}
	if(tipo==1){
		Bibliotecario aux(sistema->VerUltimo<Bibliotecario>(path)+1,nombreCompleto.c_str(),dni);
		sistema->AlUltimo<Bibliotecario>(sistema->bibliotecarios(),aux);
	}
	
	EndModal(wxID_OK);
}

void DialogoAgregarPersona::OnButtonClickCerrar( wxCommandEvent& event )  {
	this->Close();
}

void DialogoAgregarPersona::OnclikNuevoElemento( wxCommandEvent& event )  {
	event.Skip();
}

DialogoAgregarPersona::~DialogoAgregarPersona() {
	
}

