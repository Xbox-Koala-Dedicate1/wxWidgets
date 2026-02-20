#ifndef VENTANACREARCUENTA_H
#define VENTANACREARCUENTA_H
#include "wxfb_project.h"

class VentanaCrearCuenta : public MyFrameCrearCuenta {
	
private:
	
protected:
	void OnclikBienvenido_Iniciar( wxCommandEvent& event )  override;
	void OnButtonClickCerrar( wxCommandEvent& event )  override;
	
public:
	VentanaCrearCuenta(wxWindow *parent=NULL);
	~VentanaCrearCuenta();
};

#endif

