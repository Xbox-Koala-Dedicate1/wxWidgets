#include "Dialogo_Eliminar.h"
#include <wx/msgdlg.h>
#include "Funcionalidades/alumno/alumno.h"
#include <vector>
#include "Funcionalidades/Bloques/Bloques.h"
#include "Funcionalidades/system/system.h"
#include "Reservar.h"
using namespace std;

Dialogo_Eliminar::Dialogo_Eliminar(wxWindow *parent,size_t id,System * sistema,string path,size_t tipo,string nombre) : MyDialog_Eliminar(parent) {
	this->id=id;
	this->path=path;
	this->tipo=tipo;
	m_staticEliminar->SetLabel(nombre);
	this->sistema = sistema;
	this->Layout(); // Obliga a los sizers a recalcular los espacios
	this->Fit();
}



Dialogo_Eliminar::~Dialogo_Eliminar() {
	
}

void Dialogo_Eliminar::OnButtonClick_Cancela_Eliminar( wxCommandEvent& event )  {
	this->Close();
}

void Dialogo_Eliminar::OnclikContinuar_Eliminar( wxCommandEvent& event) {	
	///0 -> Libro
	///1 -> Reservars
	///2 -> etiquetas
	///3-> Alumno
	///4-> Bibliotecario
	vector<size_t>recuperarId={id};
	string nombreArchivo;
	if(tipo==0){
		vector<Libro> VLibros=sistema->VerContenido<Libro>(path,true);
		sistema->Eliminar<Libro>(id, VLibros);
		sistema->Guardar<Libro>(path,VLibros,true);
		
	}
	
	if(tipo==1){
		vector<Reservar> VReservars=sistema->VerContenido<Reservar>(path,true);
		sistema->Eliminar<Reservar>(id, VReservars);
		sistema->Guardar<Reservar>(path,VReservars,true);
	}
	if(tipo==2){
		vector<Tags> VTags=sistema->VerContenido<Tags>(path,true);
		sistema->Eliminar<Tags>(id, VTags);
		sistema->Guardar<Tags>(path,VTags,true);
	}
	if(tipo==3){
	vector<Alumno> Valumnos=sistema->VerContenido<Alumno>(path,true);
	sistema->Eliminar<Alumno>(id, Valumnos);
	sistema->Guardar<Alumno>(path,Valumnos,true);
	}
	if(tipo==4){
		vector<Bibliotecario>vBibliotecario =sistema->VerContenido<Bibliotecario>(path,true);
		sistema->Eliminar<Bibliotecario>(id, vBibliotecario);
		sistema->Guardar<Bibliotecario>(path,vBibliotecario,true);
	}
	EndModal(wxID_OK);
	
}

