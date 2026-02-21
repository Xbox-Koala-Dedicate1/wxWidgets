///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 4.2.1-0-g80c4cb6-dirty)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "wxfb_project.h"

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
	bSizer35->Add( m_radioBtn7, 0, wxALL, 5 );


	bSizerCabeceraPrestarLibro->Add( bSizer35, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer36;
	bSizer36 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText10 = new wxStaticText( this, wxID_ANY, wxT("Dias Restantes: "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText10->Wrap( -1 );
	bSizer36->Add( m_staticText10, 0, wxALL, 5 );

	m_staticText11 = new wxStaticText( this, wxID_ANY, wxT("N/A"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText11->Wrap( -1 );
	bSizer36->Add( m_staticText11, 0, wxALL, 5 );


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
	bSizer61 = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizer63;
	bSizer63 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText9 = new wxStaticText( this, wxID_ANY, wxT("Prestar Libro:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText9->Wrap( -1 );
	bSizer63->Add( m_staticText9, 0, wxALL, 5 );


	bSizer61->Add( bSizer63, 0, wxEXPAND, 5 );

	m_bcomboBox1 = new wxBitmapComboBox( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 );
	bSizer61->Add( m_bcomboBox1, 1, wxALL, 5 );


	bSizerBuscarLibroAPrestar->Add( bSizer61, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer62;
	bSizer62 = new wxBoxSizer( wxHORIZONTAL );

	m_button15 = new wxButton( this, wxID_ANY, wxT("Confirmar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer62->Add( m_button15, 0, wxALL, 5 );


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

MyDialogPrestamo::~MyDialogPrestamo()
{
}

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

MyDialogAgregar::MyDialogAgregar( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
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

	m_staticText17 = new wxStaticText( this, wxID_ANY, wxT("Nombre: "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText17->Wrap( -1 );
	bSizer34->Add( m_staticText17, 0, wxALL, 5 );

	m_text_NuevoTag_Valor = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER );
	bSizer34->Add( m_text_NuevoTag_Valor, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );


	bSizer33->Add( bSizer34, 0, 0, 5 );


	bSizer32->Add( bSizer33, 0, wxALIGN_CENTER_VERTICAL|wxALIGN_CENTER_HORIZONTAL, 5 );


	bSizer30->Add( bSizer32, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer31;
	bSizer31 = new wxBoxSizer( wxHORIZONTAL );

	m_button_NuevoElemento_cancelar = new wxButton( this, wxID_ANY, wxT("Cancelar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer31->Add( m_button_NuevoElemento_cancelar, 0, wxALL, 5 );

	m_button_NuevoElemento_Continuar = new wxButton( this, wxID_ANY, wxT("Confirmar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer31->Add( m_button_NuevoElemento_Continuar, 0, wxALL, 5 );


	bSizer30->Add( bSizer31, 0, wxALIGN_CENTER_HORIZONTAL, 5 );


	this->SetSizer( bSizer30 );
	this->Layout();
	bSizer30->Fit( this );

	this->Centre( wxBOTH );

	// Connect Events
	m_text_NuevoTag_Valor->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( MyDialogAgregar::onTextEnter_Bienvenido_Confirmar ), NULL, this );
	m_button_NuevoElemento_cancelar->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyDialogAgregar::OnButtonClickCerrar ), NULL, this );
	m_button_NuevoElemento_Continuar->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyDialogAgregar::OnclikNuevoElemento ), NULL, this );
}

MyDialogAgregar::~MyDialogAgregar()
{
	// Disconnect Events
	m_text_NuevoTag_Valor->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( MyDialogAgregar::onTextEnter_Bienvenido_Confirmar ), NULL, this );
	m_button_NuevoElemento_cancelar->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyDialogAgregar::OnButtonClickCerrar ), NULL, this );
	m_button_NuevoElemento_Continuar->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyDialogAgregar::OnclikNuevoElemento ), NULL, this );

}

MyDialogAgregarPersona::MyDialogAgregarPersona( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer30;
	bSizer30 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer32;
	bSizer32 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer34;
	bSizer34 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText17 = new wxStaticText( this, wxID_ANY, wxT("Nombre: "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText17->Wrap( -1 );
	bSizer34->Add( m_staticText17, 0, wxALL, 5 );

	m_text_Nombre_Valor = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER );
	bSizer34->Add( m_text_Nombre_Valor, 0, wxALL, 5 );


	bSizer32->Add( bSizer34, 0, 0, 5 );

	wxBoxSizer* bSizer341;
	bSizer341 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText171 = new wxStaticText( this, wxID_ANY, wxT("Apellido: "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText171->Wrap( -1 );
	bSizer341->Add( m_staticText171, 0, wxALL, 5 );

	m_text_Apellido_Valor = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER );
	bSizer341->Add( m_text_Apellido_Valor, 0, wxALL, 5 );


	bSizer32->Add( bSizer341, 0, 0, 5 );

	wxBoxSizer* bSizer3411;
	bSizer3411 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText1711 = new wxStaticText( this, wxID_ANY, wxT("Dni: "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1711->Wrap( -1 );
	bSizer3411->Add( m_staticText1711, 1, wxALL, 5 );

	m_text_Dni_Valor = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER );
	bSizer3411->Add( m_text_Dni_Valor, 0, wxALL, 5 );


	bSizer32->Add( bSizer3411, 0, wxEXPAND, 5 );


	bSizer30->Add( bSizer32, 0, 0, 5 );

	wxBoxSizer* bSizer31;
	bSizer31 = new wxBoxSizer( wxHORIZONTAL );

	m_button_NuevoElemento_cancelar = new wxButton( this, wxID_ANY, wxT("Cancelar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer31->Add( m_button_NuevoElemento_cancelar, 0, wxALL, 5 );

	m_button_NuevoElemento_Continuar = new wxButton( this, wxID_ANY, wxT("Confirmar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer31->Add( m_button_NuevoElemento_Continuar, 0, wxALL, 5 );


	bSizer30->Add( bSizer31, 0, 0, 5 );


	this->SetSizer( bSizer30 );
	this->Layout();
	bSizer30->Fit( this );

	this->Centre( wxBOTH );

	// Connect Events
	m_text_Nombre_Valor->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( MyDialogAgregarPersona::onTextEnter_Bienvenido_Confirmar ), NULL, this );
	m_text_Apellido_Valor->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( MyDialogAgregarPersona::onTextEnter_Bienvenido_Confirmar ), NULL, this );
	m_text_Dni_Valor->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( MyDialogAgregarPersona::onTextEnter_Bienvenido_Confirmar ), NULL, this );
	m_button_NuevoElemento_cancelar->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyDialogAgregarPersona::OnButtonClickCerrar ), NULL, this );
	m_button_NuevoElemento_Continuar->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyDialogAgregarPersona::OnclikNuevoElemento ), NULL, this );
}

MyDialogAgregarPersona::~MyDialogAgregarPersona()
{
	// Disconnect Events
	m_text_Nombre_Valor->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( MyDialogAgregarPersona::onTextEnter_Bienvenido_Confirmar ), NULL, this );
	m_text_Apellido_Valor->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( MyDialogAgregarPersona::onTextEnter_Bienvenido_Confirmar ), NULL, this );
	m_text_Dni_Valor->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( MyDialogAgregarPersona::onTextEnter_Bienvenido_Confirmar ), NULL, this );
	m_button_NuevoElemento_cancelar->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyDialogAgregarPersona::OnButtonClickCerrar ), NULL, this );
	m_button_NuevoElemento_Continuar->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyDialogAgregarPersona::OnclikNuevoElemento ), NULL, this );

}
