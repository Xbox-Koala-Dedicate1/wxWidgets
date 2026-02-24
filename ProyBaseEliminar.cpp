///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 4.2.1-0-g80c4cb6)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "ProyBaseEliminar.h"

///////////////////////////////////////////////////////////////////////////

MyDialog_Eliminar::MyDialog_Eliminar( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
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

	m_staticText17 = new wxStaticText( this, wxID_ANY, wxT("¿Deseas eliminar A?"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText17->Wrap( -1 );
	bSizer34->Add( m_staticText17, 0, wxALL, 5 );

	m_staticEliminar = new wxStaticText( this, wxID_ANY, wxT("MyLabel"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticEliminar->Wrap( -1 );
	bSizer34->Add( m_staticEliminar, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );


	bSizer33->Add( bSizer34, 0, 0, 5 );


	bSizer32->Add( bSizer33, 0, wxALIGN_CENTER_VERTICAL|wxALIGN_CENTER_HORIZONTAL, 5 );


	bSizer30->Add( bSizer32, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer31;
	bSizer31 = new wxBoxSizer( wxHORIZONTAL );

	m_button_Cancela_Eliminacion = new wxButton( this, wxID_ANY, wxT("Cancelar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer31->Add( m_button_Cancela_Eliminacion, 0, wxALL, 5 );

	m_button_Continuar_Eliminar = new wxButton( this, wxID_ANY, wxT("Continuar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer31->Add( m_button_Continuar_Eliminar, 0, wxALL, 5 );


	bSizer30->Add( bSizer31, 0, wxALIGN_CENTER_HORIZONTAL, 5 );


	this->SetSizer( bSizer30 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	m_button_Cancela_Eliminacion->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyDialog_Eliminar::OnButtonClick_Cancela_Eliminar ), NULL, this );
	m_button_Continuar_Eliminar->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyDialog_Eliminar::OnclikContinuar_Eliminar ), NULL, this );
}

MyDialog_Eliminar::~MyDialog_Eliminar()
{
	// Disconnect Events
	m_button_Cancela_Eliminacion->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyDialog_Eliminar::OnButtonClick_Cancela_Eliminar ), NULL, this );
	m_button_Continuar_Eliminar->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyDialog_Eliminar::OnclikContinuar_Eliminar ), NULL, this );

}
