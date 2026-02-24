#ifndef DIALOGOAGREGAR_H
#define DIALOGOAGREGAR_H
#include "ProyBaseAgregar.h"
#include <string>
#include "Funcionalidades/Bloques/Bloques.h"

using namespace std;
class Bibliotecario;
class DialogoAgregar : public MyDialogAgregar {
	
private:
	int tipo;
	System * sistema;
	Bibliotecario * admin;
	string path;
	
	///Para tags
	Tags auxTags;
	Bloques allTags;
	
	
protected:
	void onTextEnter_Bienvenido_Confirmar( wxCommandEvent& event )  override;
	void OnButtonClickCerrar( wxCommandEvent& event )  override;
	void OnclikNuevoElemento( wxCommandEvent& event )  override;
	
public:
	DialogoAgregar(wxWindow *parent, System* sistema, Bibliotecario* admin,int tipo,string path);
	~DialogoAgregar();
};

#endif

