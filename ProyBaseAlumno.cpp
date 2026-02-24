///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 4.2.1-0-g80c4cb6)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "ProyBaseAlumno.h"

///////////////////////////////////////////////////////////////////////////

MyFrameInicioCorrectoAlumno::MyFrameInicioCorrectoAlumno( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizerBuscador;
	bSizerBuscador = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer9;
	bSizer9 = new wxBoxSizer( wxHORIZONTAL );

	mtext_Buscador_frase = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer9->Add( mtext_Buscador_frase, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	Boton_Buscar_Frase = new wxButton( this, wxID_ANY, wxT("Buscar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer9->Add( Boton_Buscar_Frase, 0, wxALL, 5 );


	bSizerBuscador->Add( bSizer9, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer8;
	bSizer8 = new wxBoxSizer( wxHORIZONTAL );

	m_radio_Libros = new wxRadioButton( this, wxID_ANY, wxT("Libros"), wxDefaultPosition, wxDefaultSize, 0 );
	m_radio_Libros->SetValue( true );
	bSizer8->Add( m_radio_Libros, 0, wxALL, 5 );

	m_radio_InfoLibros = new wxRadioButton( this, wxID_ANY, wxT("Info Libros"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer8->Add( m_radio_InfoLibros, 0, wxALL, 5 );

	m_radio_Reservar = new wxRadioButton( this, wxID_ANY, wxT("Reservas"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer8->Add( m_radio_Reservar, 0, wxALL, 5 );

	m_radio_Etiquetas = new wxRadioButton( this, wxID_ANY, wxT("Etiquetas"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer8->Add( m_radio_Etiquetas, 0, wxALL, 5 );

	m_radio_Alumnos = new wxRadioButton( this, wxID_ANY, wxT("Alumnos"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer8->Add( m_radio_Alumnos, 0, wxALL, 5 );

	m_radio_Bibliotecarios = new wxRadioButton( this, wxID_ANY, wxT("Bibliotecarios"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer8->Add( m_radio_Bibliotecarios, 0, wxALL, 5 );


	bSizerBuscador->Add( bSizer8, 0, 0, 5 );


	bSizer3->Add( bSizerBuscador, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizerContenedorLibros;
	bSizerContenedorLibros = new wxBoxSizer( wxVERTICAL );

	m_Bibliotecario_frameActual = new wxSimplebook( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	m_panel_Bibliotecario_Libros = new wxPanel( m_Bibliotecario_frameActual, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizerLibro;
	bSizerLibro = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer30;
	bSizer30 = new wxBoxSizer( wxVERTICAL );

	m_staticText4 = new wxStaticText( m_panel_Bibliotecario_Libros, wxID_ANY, wxT("Don Quijote de la Mancha"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText4->Wrap( -1 );
	bSizer30->Add( m_staticText4, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );

	m_bitmap2 = new wxStaticBitmap( m_panel_Bibliotecario_Libros, wxID_ANY, wxBitmap( wxT("Recursos/img/quijote_mancha.jpg"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, 0 );
	m_bitmap2->SetMaxSize( wxSize( 200,200 ) );

	bSizer30->Add( m_bitmap2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );


	bSizerLibro->Add( bSizer30, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizerPaginador;
	bSizerPaginador = new wxBoxSizer( wxHORIZONTAL );

	m_button19 = new wxButton( m_panel_Bibliotecario_Libros, wxID_ANY, wxT("Anterior"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerPaginador->Add( m_button19, 0, wxALL, 5 );

	m_staticText18 = new wxStaticText( m_panel_Bibliotecario_Libros, wxID_ANY, wxT("1 de 5"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText18->Wrap( -1 );
	bSizerPaginador->Add( m_staticText18, 0, wxALIGN_CENTER_VERTICAL, 5 );

	m_button20 = new wxButton( m_panel_Bibliotecario_Libros, wxID_ANY, wxT("Siguiente"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerPaginador->Add( m_button20, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizerLibro->Add( bSizerPaginador, 0, wxALIGN_CENTER_HORIZONTAL, 5 );


	m_panel_Bibliotecario_Libros->SetSizer( bSizerLibro );
	m_panel_Bibliotecario_Libros->Layout();
	bSizerLibro->Fit( m_panel_Bibliotecario_Libros );
	m_Bibliotecario_frameActual->AddPage( m_panel_Bibliotecario_Libros, wxT("a page"), false );
	m_panel_DetallesLibros = new wxPanel( m_Bibliotecario_frameActual, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizerContenedorAlumnos1;
	bSizerContenedorAlumnos1 = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizerTodosLosAlumnos1;
	bSizerTodosLosAlumnos1 = new wxBoxSizer( wxVERTICAL );

	m_list_InfoLibros = new wxListCtrl( m_panel_DetallesLibros, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLC_REPORT );
	bSizerTodosLosAlumnos1->Add( m_list_InfoLibros, 1, wxALL, 5 );


	bSizerContenedorAlumnos1->Add( bSizerTodosLosAlumnos1, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer451;
	bSizer451 = new wxBoxSizer( wxVERTICAL );

	m_button131 = new wxButton( m_panel_DetallesLibros, wxID_ANY, wxT("Agregar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer451->Add( m_button131, 0, wxALL, 5 );

	m_button21 = new wxButton( m_panel_DetallesLibros, wxID_ANY, wxT("Editar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer451->Add( m_button21, 0, wxALL, 5 );

	m_button201 = new wxButton( m_panel_DetallesLibros, wxID_ANY, wxT("Lectores"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer451->Add( m_button201, 0, wxALL, 5 );

	m_button141 = new wxButton( m_panel_DetallesLibros, wxID_ANY, wxT("Eliminar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer451->Add( m_button141, 0, wxALL, 5 );


	bSizerContenedorAlumnos1->Add( bSizer451, 0, wxEXPAND, 5 );


	m_panel_DetallesLibros->SetSizer( bSizerContenedorAlumnos1 );
	m_panel_DetallesLibros->Layout();
	bSizerContenedorAlumnos1->Fit( m_panel_DetallesLibros );
	m_Bibliotecario_frameActual->AddPage( m_panel_DetallesLibros, wxT("a page"), false );
	m_panel_Reservar = new wxPanel( m_Bibliotecario_frameActual, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizerContenedorAlumnos111;
	bSizerContenedorAlumnos111 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer301;
	bSizer301 = new wxBoxSizer( wxVERTICAL );

	m_calendar1 = new wxCalendarCtrl( m_panel_Reservar, wxID_ANY, wxDefaultDateTime, wxDefaultPosition, wxDefaultSize, wxCAL_SHOW_HOLIDAYS );
	bSizer301->Add( m_calendar1, 0, wxALL, 5 );


	bSizerContenedorAlumnos111->Add( bSizer301, 0, wxALIGN_CENTER_HORIZONTAL, 5 );

	wxBoxSizer* bSizer31;
	bSizer31 = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizerTodosLosAlumnos111;
	bSizerTodosLosAlumnos111 = new wxBoxSizer( wxVERTICAL );

	m_list_Reservas = new wxListCtrl( m_panel_Reservar, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLC_REPORT );
	bSizerTodosLosAlumnos111->Add( m_list_Reservas, 1, wxALL|wxEXPAND, 5 );


	bSizer31->Add( bSizerTodosLosAlumnos111, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer45111;
	bSizer45111 = new wxBoxSizer( wxVERTICAL );

	m_button14111 = new wxButton( m_panel_Reservar, wxID_ANY, wxT("Eliminar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer45111->Add( m_button14111, 0, wxALL, 5 );


	bSizer31->Add( bSizer45111, 0, wxEXPAND, 5 );


	bSizerContenedorAlumnos111->Add( bSizer31, 1, wxEXPAND, 5 );


	m_panel_Reservar->SetSizer( bSizerContenedorAlumnos111 );
	m_panel_Reservar->Layout();
	bSizerContenedorAlumnos111->Fit( m_panel_Reservar );
	m_Bibliotecario_frameActual->AddPage( m_panel_Reservar, wxT("a page"), false );
	m_panel_DetallesEtiquetas = new wxPanel( m_Bibliotecario_frameActual, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizerContenedorAlumnos11;
	bSizerContenedorAlumnos11 = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizerTodosLosAlumnos11;
	bSizerTodosLosAlumnos11 = new wxBoxSizer( wxVERTICAL );

	m_list_Etiquetas = new wxListCtrl( m_panel_DetallesEtiquetas, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLC_REPORT );
	bSizerTodosLosAlumnos11->Add( m_list_Etiquetas, 1, wxALL, 5 );


	bSizerContenedorAlumnos11->Add( bSizerTodosLosAlumnos11, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer4511;
	bSizer4511 = new wxBoxSizer( wxVERTICAL );

	m_button1311 = new wxButton( m_panel_DetallesEtiquetas, wxID_ANY, wxT("Agregar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer4511->Add( m_button1311, 0, wxALL, 5 );

	m_button1411 = new wxButton( m_panel_DetallesEtiquetas, wxID_ANY, wxT("Eliminar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer4511->Add( m_button1411, 0, wxALL, 5 );


	bSizerContenedorAlumnos11->Add( bSizer4511, 0, wxEXPAND, 5 );


	m_panel_DetallesEtiquetas->SetSizer( bSizerContenedorAlumnos11 );
	m_panel_DetallesEtiquetas->Layout();
	bSizerContenedorAlumnos11->Fit( m_panel_DetallesEtiquetas );
	m_Bibliotecario_frameActual->AddPage( m_panel_DetallesEtiquetas, wxT("a page"), false );
	m_panel_Alumnos = new wxPanel( m_Bibliotecario_frameActual, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizerContenedorAlumnos;
	bSizerContenedorAlumnos = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizerTodosLosAlumnos;
	bSizerTodosLosAlumnos = new wxBoxSizer( wxVERTICAL );

	m_list_Alumnos = new wxListCtrl( m_panel_Alumnos, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLC_REPORT );
	bSizerTodosLosAlumnos->Add( m_list_Alumnos, 1, wxALL, 5 );


	bSizerContenedorAlumnos->Add( bSizerTodosLosAlumnos, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer45;
	bSizer45 = new wxBoxSizer( wxVERTICAL );

	m_button13 = new wxButton( m_panel_Alumnos, wxID_ANY, wxT("Prestar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer45->Add( m_button13, 0, wxALL, 5 );

	m_button17 = new wxButton( m_panel_Alumnos, wxID_ANY, wxT("Devolucion"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer45->Add( m_button17, 0, wxALL, 5 );

	m_button142 = new wxButton( m_panel_Alumnos, wxID_ANY, wxT("Agregar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer45->Add( m_button142, 0, wxALL, 5 );

	m_button14 = new wxButton( m_panel_Alumnos, wxID_ANY, wxT("Historial"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer45->Add( m_button14, 0, wxALL, 5 );

	m_button15 = new wxButton( m_panel_Alumnos, wxID_ANY, wxT("Eliminar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer45->Add( m_button15, 0, wxALL, 5 );


	bSizerContenedorAlumnos->Add( bSizer45, 0, wxEXPAND, 5 );


	m_panel_Alumnos->SetSizer( bSizerContenedorAlumnos );
	m_panel_Alumnos->Layout();
	bSizerContenedorAlumnos->Fit( m_panel_Alumnos );
	m_Bibliotecario_frameActual->AddPage( m_panel_Alumnos, wxT("a page"), false );
	m_panel_Bibliotecarios = new wxPanel( m_Bibliotecario_frameActual, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer34;
	bSizer34 = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizer76;
	bSizer76 = new wxBoxSizer( wxVERTICAL );

	m_list_Bibliotecarios = new wxListCtrl( m_panel_Bibliotecarios, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLC_REPORT );
	bSizer76->Add( m_list_Bibliotecarios, 1, wxALL|wxEXPAND, 5 );


	bSizer34->Add( bSizer76, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer77;
	bSizer77 = new wxBoxSizer( wxVERTICAL );

	m_button132 = new wxButton( m_panel_Bibliotecarios, wxID_ANY, wxT("Agregar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer77->Add( m_button132, 0, wxALL, 5 );

	button_eliminar = new wxButton( m_panel_Bibliotecarios, wxID_ANY, wxT("Eliminar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer77->Add( button_eliminar, 0, wxALL, 5 );


	bSizer34->Add( bSizer77, 0, wxEXPAND, 5 );


	m_panel_Bibliotecarios->SetSizer( bSizer34 );
	m_panel_Bibliotecarios->Layout();
	bSizer34->Fit( m_panel_Bibliotecarios );
	m_Bibliotecario_frameActual->AddPage( m_panel_Bibliotecarios, wxT("a page"), false );

	bSizerContenedorLibros->Add( m_Bibliotecario_frameActual, 1, wxEXPAND | wxALL, 5 );


	bSizer3->Add( bSizerContenedorLibros, 1, wxEXPAND, 5 );


	this->SetSizer( bSizer3 );
	this->Layout();
	bSizer3->Fit( this );

	this->Centre( wxBOTH );

	// Connect Events
	Boton_Buscar_Frase->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrameInicioCorrectoAlumno::Onclick_Boton_Buscar_Frase ), NULL, this );
	m_radio_Libros->Connect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( MyFrameInicioCorrectoAlumno::OnRadioButton_CambiaPestana ), NULL, this );
	m_radio_InfoLibros->Connect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( MyFrameInicioCorrectoAlumno::OnRadioButton_CambiaPestana ), NULL, this );
	m_radio_Reservar->Connect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( MyFrameInicioCorrectoAlumno::OnRadioButton_CambiaPestana ), NULL, this );
	m_radio_Etiquetas->Connect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( MyFrameInicioCorrectoAlumno::OnRadioButton_CambiaPestana ), NULL, this );
	m_radio_Alumnos->Connect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( MyFrameInicioCorrectoAlumno::OnRadioButton_CambiaPestana ), NULL, this );
	m_radio_Bibliotecarios->Connect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( MyFrameInicioCorrectoAlumno::OnRadioButton_CambiaPestana ), NULL, this );
	m_button131->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrameInicioCorrectoAlumno::OnButtonClickAgregar ), NULL, this );
	m_button141->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrameInicioCorrectoAlumno::OnButtonClickEliminar ), NULL, this );
	m_button14111->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrameInicioCorrectoAlumno::OnButtonClickEliminar ), NULL, this );
	m_button1311->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrameInicioCorrectoAlumno::OnButtonClickAgregar ), NULL, this );
	m_button1411->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrameInicioCorrectoAlumno::OnButtonClickEliminar ), NULL, this );
	m_button13->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrameInicioCorrectoAlumno::OnButtonClickPrestarLibro ), NULL, this );
	m_button142->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrameInicioCorrectoAlumno::OnButtonClickAgregar ), NULL, this );
	m_button14->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrameInicioCorrectoAlumno::OnButtonClickHistorialAlumno ), NULL, this );
	m_button15->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrameInicioCorrectoAlumno::OnButtonClickEliminar ), NULL, this );
	m_button132->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrameInicioCorrectoAlumno::OnButtonClickAgregar ), NULL, this );
	button_eliminar->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrameInicioCorrectoAlumno::OnButtonClickEliminar ), NULL, this );
}

MyFrameInicioCorrectoAlumno::~MyFrameInicioCorrectoAlumno()
{
	// Disconnect Events
	Boton_Buscar_Frase->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrameInicioCorrectoAlumno::Onclick_Boton_Buscar_Frase ), NULL, this );
	m_radio_Libros->Disconnect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( MyFrameInicioCorrectoAlumno::OnRadioButton_CambiaPestana ), NULL, this );
	m_radio_InfoLibros->Disconnect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( MyFrameInicioCorrectoAlumno::OnRadioButton_CambiaPestana ), NULL, this );
	m_radio_Reservar->Disconnect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( MyFrameInicioCorrectoAlumno::OnRadioButton_CambiaPestana ), NULL, this );
	m_radio_Etiquetas->Disconnect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( MyFrameInicioCorrectoAlumno::OnRadioButton_CambiaPestana ), NULL, this );
	m_radio_Alumnos->Disconnect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( MyFrameInicioCorrectoAlumno::OnRadioButton_CambiaPestana ), NULL, this );
	m_radio_Bibliotecarios->Disconnect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( MyFrameInicioCorrectoAlumno::OnRadioButton_CambiaPestana ), NULL, this );
	m_button131->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrameInicioCorrectoAlumno::OnButtonClickAgregar ), NULL, this );
	m_button141->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrameInicioCorrectoAlumno::OnButtonClickEliminar ), NULL, this );
	m_button14111->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrameInicioCorrectoAlumno::OnButtonClickEliminar ), NULL, this );
	m_button1311->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrameInicioCorrectoAlumno::OnButtonClickAgregar ), NULL, this );
	m_button1411->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrameInicioCorrectoAlumno::OnButtonClickEliminar ), NULL, this );
	m_button13->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrameInicioCorrectoAlumno::OnButtonClickPrestarLibro ), NULL, this );
	m_button142->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrameInicioCorrectoAlumno::OnButtonClickAgregar ), NULL, this );
	m_button14->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrameInicioCorrectoAlumno::OnButtonClickHistorialAlumno ), NULL, this );
	m_button15->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrameInicioCorrectoAlumno::OnButtonClickEliminar ), NULL, this );
	m_button132->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrameInicioCorrectoAlumno::OnButtonClickAgregar ), NULL, this );
	button_eliminar->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrameInicioCorrectoAlumno::OnButtonClickEliminar ), NULL, this );

}
