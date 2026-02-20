///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 4.2.1-0-g80c4cb6)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "ProyBaseLogin.h"

///////////////////////////////////////////////////////////////////////////

MyFrameLogin::MyFrameLogin( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer30;
	bSizer30 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer32;
	bSizer32 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer33;
	bSizer33 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer34;
	bSizer34 = new wxBoxSizer( wxVERTICAL );

	m_staticText17 = new wxStaticText( this, wxID_ANY, wxT("Ingresar dni"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText17->Wrap( -1 );
	bSizer34->Add( m_staticText17, 0, wxALL, 5 );

	m_text_Bienvenido_Valor = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER );
	bSizer34->Add( m_text_Bienvenido_Valor, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );


	bSizer33->Add( bSizer34, 0, 0, 5 );


	bSizer32->Add( bSizer33, 0, wxALIGN_CENTER_VERTICAL|wxALIGN_CENTER_HORIZONTAL, 5 );


	bSizer30->Add( bSizer32, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer31;
	bSizer31 = new wxBoxSizer( wxHORIZONTAL );

	m_button_Bienvenido_CrearCuenta = new wxButton( this, wxID_ANY, wxT("Crear Cuenta"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer31->Add( m_button_Bienvenido_CrearCuenta, 0, wxALL, 5 );

	m_button_Bienvenido_Continuar = new wxButton( this, wxID_ANY, wxT("Continuar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer31->Add( m_button_Bienvenido_Continuar, 0, wxALL, 5 );


	bSizer30->Add( bSizer31, 0, wxALIGN_CENTER_HORIZONTAL, 5 );


	this->SetSizer( bSizer30 );
	this->Layout();
	bSizer30->Fit( this );

	this->Centre( wxBOTH );

	// Connect Events
	m_text_Bienvenido_Valor->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( MyFrameLogin::onTextEnter_Bienvenido_Confirmar ), NULL, this );
	m_button_Bienvenido_CrearCuenta->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrameLogin::OnButtonClickCrearCuenta ), NULL, this );
	m_button_Bienvenido_Continuar->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrameLogin::OnclikBienvenido_Iniciar ), NULL, this );
}

MyFrameLogin::~MyFrameLogin()
{
	// Disconnect Events
	m_text_Bienvenido_Valor->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( MyFrameLogin::onTextEnter_Bienvenido_Confirmar ), NULL, this );
	m_button_Bienvenido_CrearCuenta->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrameLogin::OnButtonClickCrearCuenta ), NULL, this );
	m_button_Bienvenido_Continuar->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrameLogin::OnclikBienvenido_Iniciar ), NULL, this );

}
