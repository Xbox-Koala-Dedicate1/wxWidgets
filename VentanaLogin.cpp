#include "VentanaLogin.h"
#include <wx/msgdlg.h>
#include <string>
#include "VentanaPrincipal.h"
#include "VentanaParaBibliotecario.h"
#include "VentanaCrearCuenta.h"
#include "VentanaParaAlumno.h"
using namespace std;

VentanaLogin::VentanaLogin(wxWindow *parent) : MyFrameLogin(parent) {
	
}

VentanaLogin::~VentanaLogin() {
	
}

void VentanaLogin::OnclikBienvenido_Iniciar( wxCommandEvent& event )  {
	long dni; 
	if(!m_text_Bienvenido_Valor->GetValue().ToLong(&dni)){
		wxMessageBox("Eso no es un dni","Error",wxOK|wxICON_ERROR);
		return;
	}
	
	System sistema;
	vectorAlumnos = sistema.VerContenido<Alumno>(sistema.pathAlumnos(),true);
	vectorBibliotecario= sistema.VerContenido<Bibliotecario>(sistema.pathBibliotecarios(),true);
	
	int PosBibliotecario = BuscarDniEnBibliotecarios(dni, vectorBibliotecario);
	
	if(PosBibliotecario != -1){
		biblio = ObjetoCorrespondienteBibliotecario(PosBibliotecario, vectorBibliotecario);
		///cout<<"?Que Quieres Hacer "<<biblio.VerNombre()<<" ?"<<endl;
		///menuBibliotecario
		VentanaParaBibliotecario *ventana = new VentanaParaBibliotecario(NULL);
		ventana->Show();
		this->Close();
	}
	else{
		int PosAlumno = BuscarDniEnAlumnos(dni,vectorAlumnos);
		if(PosAlumno!= -1){
			alumn = ObjetoCorrespondienteAlumno(PosAlumno, vectorAlumnos); 
			///MenuAlumno
			VentanaParaAlumno *ventana = new VentanaParaAlumno(NULL);
			ventana->Show();
			this->Close();
		}else{
			///cout<<"No est?s en el sistema... Registrandote"<<endl;
			///cant=1; PARA VENTANA CREAR CUENTA
			///admin.CargarNuevos<Alumno>(cant,alumnos);
			OnButtonClickCrearCuenta(event);
		}
	}
	
	
}
void VentanaLogin::onTextEnter_Bienvenido_Confirmar( wxCommandEvent& event )  {
	OnclikBienvenido_Iniciar( event );
}
void VentanaLogin::OnButtonClickCrearCuenta( wxCommandEvent& event )  {
	VentanaCrearCuenta *ventanaCrear = new VentanaCrearCuenta(NULL);
	ventanaCrear->Show();
	this->Close();
}

