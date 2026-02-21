#include "DialogoAgregar.h"
#include "Funcionalidades/system/system.h"
#include "Funcionalidades/bibliotecario/bibliotecario.h"

DialogoAgregar::DialogoAgregar(wxWindow *parent, System* sistema, Bibliotecario* admin,int tipo,string path) : MyDialogAgregar(parent) {
	this->path = path;
	this->sistema = sistema;
	this->tipo = tipo;
}

void DialogoAgregar::onTextEnter_Bienvenido_Confirmar( wxCommandEvent& event )  {
	
	
}

void DialogoAgregar::OnButtonClickCerrar( wxCommandEvent& event )  {
	this->Close();
}

void DialogoAgregar::OnclikNuevoElemento( wxCommandEvent& event )  {
	
	string nombre = m_text_NuevoTag_Valor->GetValue().ToStdString();
	///0 -> Libro
	///1 -> etiquetas
	if(tipo==0){
	
		Libro aux(sistema->VerUltimo<Libro>(path)+1,nombre.c_str());
		sistema->AlUltimo<Libro>(sistema->libros(),aux);
		
	}
	if(tipo==1){
		Tags aux;
		strncpy(aux.NombreTag,nombre.c_str(),49);
		aux.NombreTag[50]='\0';
		aux.Existe();
		aux.IdTag=sistema->VerUltimo<Tags>(path)+1;
		sistema->AlUltimo<Tags>(sistema->etiquetas(),aux);
		
	}
	EndModal(wxID_OK);
}

DialogoAgregar::~DialogoAgregar() {
	
}

