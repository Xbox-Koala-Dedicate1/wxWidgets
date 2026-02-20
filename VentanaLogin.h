#ifndef VENTANALOGIN_H
#define VENTANALOGIN_H
#include "wxfb_project.h"
#include "Funcionalidades/login/login.h"
#include "Funcionalidades/system/system.h"

class VentanaLogin : public MyFrameLogin {
	
private:
	
protected:
	
	vector<Alumno> vectorAlumnos;
	vector<Bibliotecario>vectorBibliotecario;
	Alumno alumn;
	Bibliotecario biblio;
	void OnButtonClickCrearCuenta( wxCommandEvent& event )  override;
	void onTextEnter_Bienvenido_Confirmar( wxCommandEvent& event )  override;
	void OnclikBienvenido_Iniciar( wxCommandEvent& event )  override;
	
public:
	VentanaLogin(wxWindow *parent=NULL);
	~VentanaLogin();
};

#endif

