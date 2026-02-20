#include "DialogoAgregar.h"

DialogoAgregar::DialogoAgregar(wxWindow *parent, System* sistema,string path) : MyDialogAgregar(parent) {
	this->path = path;
	this->sistema = sistema;
}

void DialogoAgregar::onTextEnter_Bienvenido_Confirmar( wxCommandEvent& event )  {
	
	
}

void DialogoAgregar::OnButtonClickCerrar( wxCommandEvent& event )  {
	this->Close();
}

void DialogoAgregar::OnclikNuevoElemento( wxCommandEvent& event )  {
	Tags auxTags;
	Bloques allTags;
	vector<Tags> tagsActuales;
	
	string nombre = m_text_NuevoTag_Valor->GetValue().ToStdString();
	auxTags = allTags.AgregarNuevoTag(nombre);
	
	tagsActuales.push_back(auxTags);
	
	///Guardar tags
	sistema->Guardar<Tags>(path,tagsActuales);
	EndModal(wxID_OK);
}

DialogoAgregar::~DialogoAgregar() {
	
}

