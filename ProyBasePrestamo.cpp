///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 4.2.1-0-g80c4cb6)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "ProyBasePrestamo.h"

///////////////////////////////////////////////////////////////////////////

MyDialogPrestamo::MyDialogPrestamo( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer46;
	bSizer46 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizerCabeceraPrestarLibro;
	bSizerCabeceraPrestarLibro = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizer35;
	bSizer35 = new wxBoxSizer( wxHORIZONTAL );

	m_radioBtn7 = new wxRadioButton( this, wxID_ANY, wxT("Sancionado"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer35->Add( m_radioBtn7, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizerCabeceraPrestarLibro->Add( bSizer35, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer36;
	bSizer36 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText10 = new wxStaticText( this, wxID_ANY, wxT("Dias Restantes: "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText10->Wrap( -1 );
	bSizer36->Add( m_staticText10, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl5 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer36->Add( m_textCtrl5, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizerCabeceraPrestarLibro->Add( bSizer36, 0, wxEXPAND, 5 );


	bSizer46->Add( bSizerCabeceraPrestarLibro, 0, wxEXPAND, 5 );

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

	wxBoxSizer* bSizerBuscarLibroAPrestar;
	bSizerBuscarLibroAPrestar = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizer61;
	bSizer61 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer63;
	bSizer63 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText9 = new wxStaticText( this, wxID_ANY, wxT("Prestar Libro:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText9->Wrap( -1 );
	bSizer63->Add( m_staticText9, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_txtBuscarLibro = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer63->Add( m_txtBuscarLibro, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer61->Add( bSizer63, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer17;
	bSizer17 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText8 = new wxStaticText( this, wxID_ANY, wxT("Resultados Busqueda"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText8->Wrap( -1 );
	bSizer17->Add( m_staticText8, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_listaResultadosLibros = new wxDataViewListCtrl( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxDV_ROW_LINES );
	bSizer17->Add( m_listaResultadosLibros, 1, wxALL, 5 );


	bSizer61->Add( bSizer17, 1, wxEXPAND, 5 );


	bSizerBuscarLibroAPrestar->Add( bSizer61, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer62;
	bSizer62 = new wxBoxSizer( wxHORIZONTAL );

	m_btnConfirmar = new wxButton( this, wxID_ANY, wxT("Confirmar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer62->Add( m_btnConfirmar, 0, wxALL, 5 );


	bSizerBuscarLibroAPrestar->Add( bSizer62, 0, wxEXPAND, 5 );


	bSizer46->Add( bSizerBuscarLibroAPrestar, 0, wxEXPAND, 5 );

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

	m_gridHistorial = new wxGrid( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );

	// Grid
	m_gridHistorial->CreateGrid( 5, 5 );
	m_gridHistorial->EnableEditing( true );
	m_gridHistorial->EnableGridLines( true );
	m_gridHistorial->EnableDragGridSize( false );
	m_gridHistorial->SetMargins( 0, 0 );

	// Columns
	m_gridHistorial->SetColSize( 0, 47 );
	m_gridHistorial->SetColSize( 1, 121 );
	m_gridHistorial->SetColSize( 2, 129 );
	m_gridHistorial->SetColSize( 3, 135 );
	m_gridHistorial->SetColSize( 4, 205 );
	m_gridHistorial->EnableDragColMove( false );
	m_gridHistorial->EnableDragColSize( true );
	m_gridHistorial->SetColLabelValue( 0, wxT("ID") );
	m_gridHistorial->SetColLabelValue( 1, wxT("Nombre Libro") );
	m_gridHistorial->SetColLabelValue( 2, wxT("Fecha Prestamo") );
	m_gridHistorial->SetColLabelValue( 3, wxT("Fecha Devolucion") );
	m_gridHistorial->SetColLabelValue( 4, wxT("Fecha Devuelto Alumno") );
	m_gridHistorial->SetColLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Rows
	m_gridHistorial->SetRowSize( 0, 25 );
	m_gridHistorial->SetRowSize( 1, 25 );
	m_gridHistorial->SetRowSize( 2, 25 );
	m_gridHistorial->SetRowSize( 3, 26 );
	m_gridHistorial->SetRowSize( 4, 25 );
	m_gridHistorial->EnableDragRowSize( true );
	m_gridHistorial->SetRowLabelSize( 0 );
	m_gridHistorial->SetRowLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Label Appearance

	// Cell Defaults
	m_gridHistorial->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	bSizerListaPrestamosAnteriores->Add( m_gridHistorial, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL, 5 );


	bSizer64->Add( bSizerListaPrestamosAnteriores, 1, wxEXPAND, 5 );


	bSizer46->Add( bSizer64, 1, wxEXPAND, 5 );


	this->SetSizer( bSizer46 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	m_txtBuscarLibro->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( MyDialogPrestamo::OnBuscarLibro ), NULL, this );
	m_btnConfirmar->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyDialogPrestamo::OnConfirmarPrestamoClick ), NULL, this );
}

MyDialogPrestamo::~MyDialogPrestamo()
{
	// Disconnect Events
	m_txtBuscarLibro->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( MyDialogPrestamo::OnBuscarLibro ), NULL, this );
	m_btnConfirmar->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyDialogPrestamo::OnConfirmarPrestamoClick ), NULL, this );

}
