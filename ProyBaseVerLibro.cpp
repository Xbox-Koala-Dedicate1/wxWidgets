///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 4.2.1-0-g80c4cb6)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "ProyBaseVerLibro.h"

///////////////////////////////////////////////////////////////////////////

MyDialogVerLibro::MyDialogVerLibro( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
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

	m_bitmapCabeceraLbro = new wxStaticBitmap( this, wxID_ANY, wxBitmap( wxT("Recursos/img/quijote_mancha.jpg"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, 0 );
	m_bitmapCabeceraLbro->SetMaxSize( wxSize( 200,200 ) );

	bSizer31->Add( m_bitmapCabeceraLbro, 1, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );

	m_simplebook3 = new wxSimplebook( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	m_panel5 = new wxPanel( m_simplebook3, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer15;
	bSizer15 = new wxBoxSizer( wxVERTICAL );

	m_staticNombreLibro = new wxStaticText( m_panel5, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_staticNombreLibro->Wrap( -1 );
	bSizer15->Add( m_staticNombreLibro, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );


	m_panel5->SetSizer( bSizer15 );
	m_panel5->Layout();
	bSizer15->Fit( m_panel5 );
	m_simplebook3->AddPage( m_panel5, wxT("a page"), false );
	m_panel6 = new wxPanel( m_simplebook3, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer17;
	bSizer17 = new wxBoxSizer( wxVERTICAL );

	m_textCtrlNombreLibro = new wxTextCtrl( m_panel6, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer17->Add( m_textCtrlNombreLibro, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );


	m_panel6->SetSizer( bSizer17 );
	m_panel6->Layout();
	bSizer17->Fit( m_panel6 );
	m_simplebook3->AddPage( m_panel6, wxT("a page"), false );

	bSizer31->Add( m_simplebook3, 0, wxALL, 5 );


	bSizer30->Add( bSizer31, 0, 0, 5 );

	wxBoxSizer* bSizer32;
	bSizer32 = new wxBoxSizer( wxVERTICAL );

	m_staticText7 = new wxStaticText( this, wxID_ANY, wxT("Encuentrá más libros sobre"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText7->Wrap( -1 );
	bSizer32->Add( m_staticText7, 0, wxALL, 5 );

	bSizerContendorTags = new wxBoxSizer( wxVERTICAL );


	bSizer32->Add( bSizerContendorTags, 1, wxEXPAND, 5 );


	bSizer30->Add( bSizer32, 1, wxEXPAND, 5 );


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

	m_botonEditar = new wxButton( this, wxID_ANY, wxT("Editar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer34->Add( m_botonEditar, 0, wxALL|wxALIGN_RIGHT, 5 );


	bSizer37->Add( bSizer34, 1, 0, 5 );


	bSizer27->Add( bSizer37, 0, wxEXPAND, 5 );

	m_staticText3 = new wxStaticText( this, wxID_ANY, wxT("Descripción"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3->Wrap( -1 );
	bSizer27->Add( m_staticText3, 0, wxALL, 5 );

	m_simplebook1 = new wxSimplebook( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	m_panel1 = new wxPanel( m_simplebook1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer11;
	bSizer11 = new wxBoxSizer( wxVERTICAL );

	m_staticText_DescripcionValor = new wxStaticText( m_panel1, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_DescripcionValor->Wrap( -1 );
	bSizer11->Add( m_staticText_DescripcionValor, 1, wxALL|wxEXPAND, 5 );


	m_panel1->SetSizer( bSizer11 );
	m_panel1->Layout();
	bSizer11->Fit( m_panel1 );
	m_simplebook1->AddPage( m_panel1, wxT("a page"), false );
	m_panel11 = new wxPanel( m_simplebook1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer111;
	bSizer111 = new wxBoxSizer( wxVERTICAL );

	m_textCtrlEdicionDescipcion = new wxTextCtrl( m_panel11, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer111->Add( m_textCtrlEdicionDescipcion, 1, wxALL|wxEXPAND, 5 );


	m_panel11->SetSizer( bSizer111 );
	m_panel11->Layout();
	bSizer111->Fit( m_panel11 );
	m_simplebook1->AddPage( m_panel11, wxT("a page"), false );

	bSizer27->Add( m_simplebook1, 1, wxEXPAND | wxALL, 5 );

	m_staticText5 = new wxStaticText( this, wxID_ANY, wxT("Autor: "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText5->Wrap( -1 );
	bSizer27->Add( m_staticText5, 0, wxALL, 5 );

	m_simplebook11 = new wxSimplebook( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	m_panel12 = new wxPanel( m_simplebook11, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer112;
	bSizer112 = new wxBoxSizer( wxVERTICAL );

	m_staticAutorValor = new wxStaticText( m_panel12, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_staticAutorValor->Wrap( -1 );
	bSizer112->Add( m_staticAutorValor, 1, wxALL|wxEXPAND, 5 );


	m_panel12->SetSizer( bSizer112 );
	m_panel12->Layout();
	bSizer112->Fit( m_panel12 );
	m_simplebook11->AddPage( m_panel12, wxT("a page"), false );
	m_panel111 = new wxPanel( m_simplebook11, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer1111;
	bSizer1111 = new wxBoxSizer( wxVERTICAL );

	m_textCtrlEdicionAutor = new wxTextCtrl( m_panel111, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer1111->Add( m_textCtrlEdicionAutor, 1, wxALL|wxEXPAND, 5 );


	m_panel111->SetSizer( bSizer1111 );
	m_panel111->Layout();
	bSizer1111->Fit( m_panel111 );
	m_simplebook11->AddPage( m_panel111, wxT("a page"), false );

	bSizer27->Add( m_simplebook11, 1, wxEXPAND | wxALL, 5 );


	bSizer29->Add( bSizer27, 1, wxEXPAND, 5 );


	bSizer26->Add( bSizer29, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer28;
	bSizer28 = new wxBoxSizer( wxHORIZONTAL );

	m_button19 = new wxButton( this, wxID_ANY, wxT("Reservar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer28->Add( m_button19, 0, wxALL, 5 );


	bSizer26->Add( bSizer28, 0, wxALIGN_RIGHT, 5 );


	this->SetSizer( bSizer26 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	m_botonEditar->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyDialogVerLibro::OnclikButtonClickEdicion ), NULL, this );
	m_button19->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyDialogVerLibro::OnButtonClickReservar ), NULL, this );
}

MyDialogVerLibro::~MyDialogVerLibro()
{
	// Disconnect Events
	m_botonEditar->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyDialogVerLibro::OnclikButtonClickEdicion ), NULL, this );
	m_button19->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyDialogVerLibro::OnButtonClickReservar ), NULL, this );

}
