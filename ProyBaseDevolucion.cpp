///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 4.2.1-0-g80c4cb6)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "ProyBaseDevolucion.h"

///////////////////////////////////////////////////////////////////////////

MyDialogDevolucion::MyDialogDevolucion( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer46;
	bSizer46 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizerCabeceraPrestarLibro;
	bSizerCabeceraPrestarLibro = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizer35;
	bSizer35 = new wxBoxSizer( wxHORIZONTAL );

	m_radioBtn7 = new wxRadioButton( this, wxID_ANY, _("Sancionado"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer35->Add( m_radioBtn7, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );


	bSizerCabeceraPrestarLibro->Add( bSizer35, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer36;
	bSizer36 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText10 = new wxStaticText( this, wxID_ANY, _("Seleccionar Fecha Devolucion"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText10->Wrap( -1 );
	bSizer36->Add( m_staticText10, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );


	bSizerCabeceraPrestarLibro->Add( bSizer36, 0, wxEXPAND, 5 );


	bSizer46->Add( bSizerCabeceraPrestarLibro, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizerPrestarAAlumno;
	bSizerPrestarAAlumno = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizer59;
	bSizer59 = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizer58;
	bSizer58 = new wxBoxSizer( wxHORIZONTAL );

	m_staticPrestar_NombreAlumno = new wxStaticText( this, wxID_ANY, _("Nombre: "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticPrestar_NombreAlumno->Wrap( -1 );
	bSizer58->Add( m_staticPrestar_NombreAlumno, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticPrestar_NombreAlumno_Valor = new wxStaticText( this, wxID_ANY, _("NombreEjemplo"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticPrestar_NombreAlumno_Valor->Wrap( -1 );
	bSizer58->Add( m_staticPrestar_NombreAlumno_Valor, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer59->Add( bSizer58, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer57;
	bSizer57 = new wxBoxSizer( wxHORIZONTAL );

	m_staticPrestar_DniAlumno = new wxStaticText( this, wxID_ANY, _("Dni: "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticPrestar_DniAlumno->Wrap( -1 );
	bSizer57->Add( m_staticPrestar_DniAlumno, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticPrestar_DniAlumno_Valor = new wxStaticText( this, wxID_ANY, _("DniDeEjemplo"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticPrestar_DniAlumno_Valor->Wrap( -1 );
	bSizer57->Add( m_staticPrestar_DniAlumno_Valor, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer59->Add( bSizer57, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer18;
	bSizer18 = new wxBoxSizer( wxVERTICAL );

	m_button = new wxButton( this, wxID_ANY, _("Devolver"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer18->Add( m_button, 0, wxALL|wxALIGN_RIGHT, 5 );


	bSizer59->Add( bSizer18, 1, wxEXPAND, 5 );


	bSizerPrestarAAlumno->Add( bSizer59, 1, wxALIGN_CENTER_VERTICAL|wxEXPAND, 5 );


	bSizer46->Add( bSizerPrestarAAlumno, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer64;
	bSizer64 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer70;
	bSizer70 = new wxBoxSizer( wxVERTICAL );

	m_staticText23 = new wxStaticText( this, wxID_ANY, _("Libros Prestados"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText23->Wrap( -1 );
	bSizer70->Add( m_staticText23, 0, wxALL, 5 );


	bSizer64->Add( bSizer70, 0, 0, 5 );

	wxBoxSizer* bSizerListaPrestamosAnteriores;
	bSizerListaPrestamosAnteriores = new wxBoxSizer( wxVERTICAL );

	m_gridDevoluciones = new wxGrid( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );

	// Grid
	m_gridDevoluciones->CreateGrid( 5, 5 );
	m_gridDevoluciones->EnableEditing( true );
	m_gridDevoluciones->EnableGridLines( true );
	m_gridDevoluciones->EnableDragGridSize( false );
	m_gridDevoluciones->SetMargins( 0, 0 );

	// Columns
	m_gridDevoluciones->SetColSize( 0, 47 );
	m_gridDevoluciones->SetColSize( 1, 121 );
	m_gridDevoluciones->SetColSize( 2, 129 );
	m_gridDevoluciones->SetColSize( 3, 135 );
	m_gridDevoluciones->SetColSize( 4, 205 );
	m_gridDevoluciones->EnableDragColMove( false );
	m_gridDevoluciones->EnableDragColSize( true );
	m_gridDevoluciones->SetColLabelValue( 0, _("ID") );
	m_gridDevoluciones->SetColLabelValue( 1, _("Nombre Libro") );
	m_gridDevoluciones->SetColLabelValue( 2, _("Fecha Prestamo") );
	m_gridDevoluciones->SetColLabelValue( 3, _("Fecha Devolucion") );
	m_gridDevoluciones->SetColLabelValue( 4, _("Fecha Devuelto Alumno") );
	m_gridDevoluciones->SetColLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Rows
	m_gridDevoluciones->SetRowSize( 0, 25 );
	m_gridDevoluciones->SetRowSize( 1, 25 );
	m_gridDevoluciones->SetRowSize( 2, 25 );
	m_gridDevoluciones->SetRowSize( 3, 26 );
	m_gridDevoluciones->SetRowSize( 4, 25 );
	m_gridDevoluciones->EnableDragRowSize( true );
	m_gridDevoluciones->SetRowLabelSize( 0 );
	m_gridDevoluciones->SetRowLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Label Appearance

	// Cell Defaults
	m_gridDevoluciones->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	bSizerListaPrestamosAnteriores->Add( m_gridDevoluciones, 1, wxALL|wxEXPAND, 5 );


	bSizer64->Add( bSizerListaPrestamosAnteriores, 1, wxALL|wxEXPAND, 5 );


	bSizer46->Add( bSizer64, 1, wxEXPAND, 5 );


	this->SetSizer( bSizer46 );
	this->Layout();

	this->Centre( wxBOTH );
}

MyDialogDevolucion::~MyDialogDevolucion()
{
}
