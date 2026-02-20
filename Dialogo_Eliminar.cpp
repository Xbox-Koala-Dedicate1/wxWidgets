#include "Dialogo_Eliminar.h"
#include <wx/msgdlg.h>
#include "Funcionalidades/alumno/alumno.h"
#include <vector>
#include "Funcionalidades/Bloques/Bloques.h"
using namespace std;

Dialogo_Eliminar::Dialogo_Eliminar(wxWindow *parent,size_t id,string path,size_t tipo,string nombre) : MyDialog_Eliminar(parent) {
	this->id=id;
	this->path=path;
	this->tipo=tipo;
	m_staticEliminar->SetLabel(nombre);
}



Dialogo_Eliminar::~Dialogo_Eliminar() {
	
}

void Dialogo_Eliminar::OnButtonClick_Cancela_Eliminar( wxCommandEvent& event )  {
	this->Close();
}

void Dialogo_Eliminar::OnclikContinuar_Eliminar( wxCommandEvent& event) {	
	///0 -> Libro
	///1 -> etiquetas
	///2-> Alumno
	///3-> Bibliotecario
	if(tipo==1){
		vector<Tags> VTags=sistema.VerContenido<Tags>(path,true);
		sistema.Eliminar<Tags>(id, VTags);
		sistema.Guardar<Tags>(path,VTags,true);
	}
	if(tipo==2){
	vector<Alumno> Valumnos=sistema.VerContenido<Alumno>(path,true);
	sistema.Eliminar<Alumno>(id, Valumnos);
	sistema.Guardar<Alumno>(path,Valumnos);
	}
	
	EndModal(wxID_OK);
	
}

