#ifndef DIALOGOAGREGAR_H
#define DIALOGOAGREGAR_H
#include "wxfb_project.h"
#include <string>
#include "Funcionalidades/system/system.h"
#include "Funcionalidades/Bloques/Bloques.h"

using namespace std;

class DialogoAgregar : public MyDialogAgregar {
	
private:
	System * sistema;
	string path;
protected:
	void onTextEnter_Bienvenido_Confirmar( wxCommandEvent& event )  override;
	void OnButtonClickCerrar( wxCommandEvent& event )  override;
	void OnclikNuevoElemento( wxCommandEvent& event )  override;
	
public:
	DialogoAgregar(wxWindow *parent, System* sistema,string path);
	~DialogoAgregar();
};

#endif

