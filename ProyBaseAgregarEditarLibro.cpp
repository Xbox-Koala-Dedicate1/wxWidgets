///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 4.2.1-0-g80c4cb6)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "ProyBaseAgregarEditarLibro.h"

///////////////////////////////////////////////////////////////////////////

MyDialogAgregarEditarLibro::MyDialogAgregarEditarLibro( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer26;
	bSizer26 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer29;
	bSizer29 = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizer30;
	bSizer30 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer31;
	bSizer31 = new wxBoxSizer( wxVERTICAL );

	m_bitmapCabeceraLbro = new wxStaticBitmap( this, wxID_ANY, wxBitmap( wxT("Recursos/img/not_found.jpg"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, 0 );
	m_bitmapCabeceraLbro->SetMaxSize( wxSize( 200,200 ) );

	bSizer31->Add( m_bitmapCabeceraLbro, 1, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );

	wxBoxSizer* bSizer151;
	bSizer151 = new wxBoxSizer( wxVERTICAL );

	m_textCtrlEditarNombreLibro = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer151->Add( m_textCtrlEditarNombreLibro, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );


	bSizer31->Add( bSizer151, 0, wxEXPAND, 5 );


	bSizer30->Add( bSizer31, 1, 0, 5 );

	wxBoxSizer* bSizer32;
	bSizer32 = new wxBoxSizer( wxVERTICAL );

	m_staticText7 = new wxStaticText( this, wxID_ANY, wxT("Asigna etiquetas"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText7->Wrap( -1 );
	bSizer32->Add( m_staticText7, 0, wxALL, 5 );

	m_button3 = new wxButton( this, wxID_ANY, wxT("+"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer32->Add( m_button3, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );

	m_button31 = new wxButton( this, wxID_ANY, wxT("+"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer32->Add( m_button31, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );

	m_button311 = new wxButton( this, wxID_ANY, wxT("+"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer32->Add( m_button311, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );

	bSizerContendorTags = new wxBoxSizer( wxVERTICAL );


	bSizer32->Add( bSizerContendorTags, 1, wxEXPAND, 5 );


	bSizer30->Add( bSizer32, 0, wxEXPAND, 5 );


	bSizer29->Add( bSizer30, 0, 0, 5 );

	wxBoxSizer* bSizer27;
	bSizer27 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer37;
	bSizer37 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText11 = new wxStaticText( this, wxID_ANY, wxT("Estado: "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText11->Wrap( -1 );
	bSizer37->Add( m_staticText11, 0, wxALL, 5 );

	m_staticEstadoValor = new wxStaticText( this, wxID_ANY, wxT("Disponible/Prestado"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticEstadoValor->Wrap( -1 );
	bSizer37->Add( m_staticEstadoValor, 0, wxALL, 5 );

	wxBoxSizer* bSizer34;
	bSizer34 = new wxBoxSizer( wxVERTICAL );

	m_botonEditar = new wxButton( this, wxID_ANY, wxT("Confirmar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer34->Add( m_botonEditar, 0, wxALL|wxALIGN_RIGHT, 5 );


	bSizer37->Add( bSizer34, 1, 0, 5 );


	bSizer27->Add( bSizer37, 0, wxEXPAND, 5 );

	m_staticText3 = new wxStaticText( this, wxID_ANY, wxT("Descripción"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3->Wrap( -1 );
	bSizer27->Add( m_staticText3, 0, wxALL, 5 );

	m_textCtrlEdicionDescipcion = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer27->Add( m_textCtrlEdicionDescipcion, 1, wxALL|wxEXPAND, 5 );

	m_staticText5 = new wxStaticText( this, wxID_ANY, wxT("Autor: "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText5->Wrap( -1 );
	bSizer27->Add( m_staticText5, 0, wxALL, 5 );

	m_textCtrlEdicionAutor = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer27->Add( m_textCtrlEdicionAutor, 1, wxALL|wxEXPAND, 5 );


	bSizer29->Add( bSizer27, 1, wxEXPAND, 5 );


	bSizer26->Add( bSizer29, 1, wxEXPAND, 5 );


	this->SetSizer( bSizer26 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	m_botonEditar->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyDialogAgregarEditarLibro::OnclikButtonClickEdicion ), NULL, this );
}

MyDialogAgregarEditarLibro::~MyDialogAgregarEditarLibro()
{
	// Disconnect Events
	m_botonEditar->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyDialogAgregarEditarLibro::OnclikButtonClickEdicion ), NULL, this );

}
