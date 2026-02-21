///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 4.2.1-0-g80c4cb6)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "wxfb_historial.h"

///////////////////////////////////////////////////////////////////////////

MyFrameHistorial::MyFrameHistorial( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizerInformacionDetalladaAlumno;
	bSizerInformacionDetalladaAlumno = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizerPrestarAAlumno;
	bSizerPrestarAAlumno = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizer58;
	bSizer58 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer59;
	bSizer59 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText21 = new wxStaticText( this, wxID_ANY, wxT("Nombre: NombreEjemplo"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText21->Wrap( -1 );
	bSizer59->Add( m_staticText21, 0, wxALL, 5 );

	m_staticText22 = new wxStaticText( this, wxID_ANY, wxT("Dni: DniDeEjemplo"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText22->Wrap( -1 );
	bSizer59->Add( m_staticText22, 0, wxALL, 5 );


	bSizer58->Add( bSizer59, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer60;
	bSizer60 = new wxBoxSizer( wxVERTICAL );


	bSizer58->Add( bSizer60, 1, wxEXPAND, 5 );


	bSizerPrestarAAlumno->Add( bSizer58, 1, wxEXPAND, 5 );


	bSizerInformacionDetalladaAlumno->Add( bSizerPrestarAAlumno, 0, 0, 5 );

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


	bSizerInformacionDetalladaAlumno->Add( bSizerListaPrestamosAnteriores, 1, wxEXPAND, 5 );


	this->SetSizer( bSizerInformacionDetalladaAlumno );
	this->Layout();

	this->Centre( wxBOTH );
}

MyFrameHistorial::~MyFrameHistorial()
{
}
