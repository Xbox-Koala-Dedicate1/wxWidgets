///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 4.2.1-0-g80c4cb6)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "ProyBaseReservar.h"

///////////////////////////////////////////////////////////////////////////

MyDialogReservar::MyDialogReservar( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer46;
	bSizer46 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer16;
	bSizer16 = new wxBoxSizer( wxHORIZONTAL );

	m_staticNombreLibroReservar = new wxStaticText( this, wxID_ANY, wxT("Libro: "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticNombreLibroReservar->Wrap( -1 );
	bSizer16->Add( m_staticNombreLibroReservar, 0, wxALL, 5 );

	m_staticNombreLibroReservarValor = new wxStaticText( this, wxID_ANY, wxT("NombreLibro"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticNombreLibroReservarValor->Wrap( -1 );
	bSizer16->Add( m_staticNombreLibroReservarValor, 0, wxALL, 5 );


	bSizer46->Add( bSizer16, 0, 0, 5 );

	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxVERTICAL );

	m_calendar1 = new wxCalendarCtrl( this, wxID_ANY, wxDefaultDateTime, wxDefaultPosition, wxDefaultSize, wxCAL_SHOW_HOLIDAYS );
	m_calendar1->SetFont( wxFont( wxNORMAL_FONT->GetPointSize(), wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxEmptyString ) );

	bSizer3->Add( m_calendar1, 0, wxALL, 5 );


	bSizer46->Add( bSizer3, 0, wxALIGN_CENTER_HORIZONTAL, 5 );

	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxHORIZONTAL );

	m_button1 = new wxButton( this, wxID_ANY, wxT("Cancelar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer4->Add( m_button1, 0, wxALL, 5 );

	m_button2 = new wxButton( this, wxID_ANY, wxT("Confirmar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer4->Add( m_button2, 0, wxALL, 5 );


	bSizer46->Add( bSizer4, 0, wxALIGN_CENTER_HORIZONTAL, 5 );


	this->SetSizer( bSizer46 );
	this->Layout();
	bSizer46->Fit( this );

	this->Centre( wxBOTH );
}

MyDialogReservar::~MyDialogReservar()
{
}
