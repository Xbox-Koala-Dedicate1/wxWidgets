///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 4.2.1-0-g80c4cb6)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "ProyBaseHistorial.h"

///////////////////////////////////////////////////////////////////////////

MyDialogHistorial::MyDialogHistorial( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer46;
	bSizer46 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizerPrestarAAlumno;
	bSizerPrestarAAlumno = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizer59;
	bSizer59 = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizer58;
	bSizer58 = new wxBoxSizer( wxHORIZONTAL );

	m_staticPrestar_NombreAlumno = new wxStaticText( this, wxID_ANY, wxT("Nombre: "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticPrestar_NombreAlumno->Wrap( -1 );
	bSizer58->Add( m_staticPrestar_NombreAlumno, 0, wxALL, 5 );

	m_staticPrestar_NombreAlumno_Valor = new wxStaticText( this, wxID_ANY, wxT("NombreEjemplo"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticPrestar_NombreAlumno_Valor->Wrap( -1 );
	bSizer58->Add( m_staticPrestar_NombreAlumno_Valor, 0, wxALL, 5 );


	bSizer59->Add( bSizer58, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer57;
	bSizer57 = new wxBoxSizer( wxHORIZONTAL );

	m_staticPrestar_DniAlumno = new wxStaticText( this, wxID_ANY, wxT("Dni: "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticPrestar_DniAlumno->Wrap( -1 );
	bSizer57->Add( m_staticPrestar_DniAlumno, 0, wxALL, 5 );

	m_staticPrestar_DniAlumno_Valor = new wxStaticText( this, wxID_ANY, wxT("DniDeEjemplo"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticPrestar_DniAlumno_Valor->Wrap( -1 );
	bSizer57->Add( m_staticPrestar_DniAlumno_Valor, 0, wxALL, 5 );


	bSizer59->Add( bSizer57, 1, wxEXPAND, 5 );


	bSizerPrestarAAlumno->Add( bSizer59, 0, 0, 5 );


	bSizer46->Add( bSizerPrestarAAlumno, 0, 0, 5 );

	wxBoxSizer* bSizer64;
	bSizer64 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer70;
	bSizer70 = new wxBoxSizer( wxVERTICAL );

	m_staticText23 = new wxStaticText( this, wxID_ANY, wxT("Libros Recientes"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText23->Wrap( -1 );
	bSizer70->Add( m_staticText23, 0, wxALL, 5 );


	bSizer64->Add( bSizer70, 0, 0, 5 );

	wxBoxSizer* bSizerListaPrestamosAnteriores;
	bSizerListaPrestamosAnteriores = new wxBoxSizer( wxVERTICAL );

	m_panel7 = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer40;
	bSizer40 = new wxBoxSizer( wxVERTICAL );

	m_list_PrestamosAnteriores = new wxListCtrl( m_panel7, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLC_REPORT );
	bSizer40->Add( m_list_PrestamosAnteriores, 1, wxALL|wxEXPAND, 5 );


	m_panel7->SetSizer( bSizer40 );
	m_panel7->Layout();
	bSizer40->Fit( m_panel7 );
	bSizerListaPrestamosAnteriores->Add( m_panel7, 1, wxALL|wxEXPAND, 5 );


	bSizer64->Add( bSizerListaPrestamosAnteriores, 1, wxEXPAND, 5 );


	bSizer46->Add( bSizer64, 1, wxEXPAND, 5 );


	this->SetSizer( bSizer46 );
	this->Layout();

	this->Centre( wxBOTH );
}

MyDialogHistorial::~MyDialogHistorial()
{
}
