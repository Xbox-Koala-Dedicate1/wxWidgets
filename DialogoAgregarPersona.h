#ifndef DIALOGOAGREGARPERSONA_H
#define DIALOGOAGREGARPERSONA_H
#include "wxfb_project.h"
#include <string>
using namespace std;
class Bibliotecario;
class System;
class DialogoAgregarPersona : public MyDialogAgregarPersona {
	
private:
	System * sistema;
	Bibliotecario * admin;
	string path;
	int tipo;
	
protected:
	void onTextEnter_Bienvenido_Confirmar( wxCommandEvent& event )  override;
	void OnButtonClickCerrar( wxCommandEvent& event )  override;
	void OnclikNuevoElemento( wxCommandEvent& event )  override;
	
public:
	DialogoAgregarPersona(wxWindow *parent, System* sistema, Bibliotecario* admin,int tipo,string path);
	~DialogoAgregarPersona();
};

#endif

