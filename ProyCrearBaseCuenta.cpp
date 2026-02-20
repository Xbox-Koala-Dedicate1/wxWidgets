///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 4.2.1-0-g80c4cb6)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "ProyCrearBaseCuenta.h"

///////////////////////////////////////////////////////////////////////////

MyFrameCrearCuenta::MyFrameCrearCuenta( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizerNuevaCuenta;
	bSizerNuevaCuenta = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizerNuevaCuenta_informacion;
	bSizerNuevaCuenta_informacion = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizerNombreLogin;
	bSizerNombreLogin = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizerNuevaCuenta_referencia;
	bSizerNuevaCuenta_referencia = new wxBoxSizer( wxVERTICAL );

	m_staticText_CrearCuenta_ref1 = new wxStaticText( this, wxID_ANY, wxT("Nombre: "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_CrearCuenta_ref1->Wrap( -1 );
	bSizerNuevaCuenta_referencia->Add( m_staticText_CrearCuenta_ref1, 0, wxALL, 5 );

	m_text_CrearCuenta_campo1 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizerNuevaCuenta_referencia->Add( m_text_CrearCuenta_campo1, 0, wxALL, 5 );


	bSizerNombreLogin->Add( bSizerNuevaCuenta_referencia, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizerNuevaCuenta_Campos;
	bSizerNuevaCuenta_Campos = new wxBoxSizer( wxVERTICAL );

	m_staticText_CrearCuenta_ref2 = new wxStaticText( this, wxID_ANY, wxT("Dni: "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_CrearCuenta_ref2->Wrap( -1 );
	bSizerNuevaCuenta_Campos->Add( m_staticText_CrearCuenta_ref2, 0, wxALL, 5 );

	m_text_CrearCuenta_campo2 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizerNuevaCuenta_Campos->Add( m_text_CrearCuenta_campo2, 0, wxALL, 5 );


	bSizerNombreLogin->Add( bSizerNuevaCuenta_Campos, 0, 0, 5 );


	bSizerNuevaCuenta_informacion->Add( bSizerNombreLogin, 0, 0, 5 );


	bSizerNuevaCuenta->Add( bSizerNuevaCuenta_informacion, 0, 0, 5 );

	wxBoxSizer* bSizerNuevaCuenta_Botones;
	bSizerNuevaCuenta_Botones = new wxBoxSizer( wxHORIZONTAL );

	m_button10 = new wxButton( this, wxID_ANY, wxT("Cancelar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerNuevaCuenta_Botones->Add( m_button10, 0, wxALL, 5 );

	m_button11 = new wxButton( this, wxID_ANY, wxT("Confirmar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerNuevaCuenta_Botones->Add( m_button11, 0, wxALL, 5 );


	bSizerNuevaCuenta->Add( bSizerNuevaCuenta_Botones, 0, wxALIGN_CENTER_HORIZONTAL, 5 );


	this->SetSizer( bSizerNuevaCuenta );
	this->Layout();
	bSizerNuevaCuenta->Fit( this );

	this->Centre( wxBOTH );

	// Connect Events
	m_button10->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrameCrearCuenta::OnButtonClickCerrar ), NULL, this );
	m_button11->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrameCrearCuenta::OnclikBienvenido_Iniciar ), NULL, this );
}

MyFrameCrearCuenta::~MyFrameCrearCuenta()
{
	// Disconnect Events
	m_button10->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrameCrearCuenta::OnButtonClickCerrar ), NULL, this );
	m_button11->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrameCrearCuenta::OnclikBienvenido_Iniciar ), NULL, this );

}
