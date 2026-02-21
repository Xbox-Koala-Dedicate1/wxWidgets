#ifndef DIALOGO_ELIMINAR_H
#define DIALOGO_ELIMINAR_H
#include "wxfb_project.h"
#include <string>
using namespace std;
class System;
class Dialogo_Eliminar : public MyDialog_Eliminar {
	
private:
	System *sistema;
	size_t id;
	string path;
	size_t tipo;
protected:
	void OnButtonClick_Cancela_Eliminar( wxCommandEvent& event )  override;
	void OnclikContinuar_Eliminar( wxCommandEvent& event)  ;
public:
	Dialogo_Eliminar(wxWindow *parent, size_t id,System * sistema, string path, size_t tipo, string nombre);
	~Dialogo_Eliminar();
};

#endif

