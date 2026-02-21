///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 4.2.1-0-g80c4cb6-dirty)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/sizer.h>
#include <wx/listctrl.h>
#include <wx/panel.h>
#include <wx/frame.h>
#include <wx/radiobut.h>
#include <wx/bmpcbox.h>
#include <wx/button.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/dialog.h>
#include <wx/textctrl.h>

///////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
/// Class MyFrameHistorial
///////////////////////////////////////////////////////////////////////////////
class MyFrameHistorial : public wxFrame
{
	private:

	protected:
		wxStaticText* m_staticText21;
		wxStaticText* m_staticText22;
		wxPanel* m_panel7;
		wxListCtrl* m_list_PrestamosAnteriores;

	public:

		MyFrameHistorial( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Historial"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 565,388 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~MyFrameHistorial();

};

///////////////////////////////////////////////////////////////////////////////
/// Class MyDialogPrestamo
///////////////////////////////////////////////////////////////////////////////
class MyDialogPrestamo : public wxDialog
{
	private:

	protected:
		wxRadioButton* m_radioBtn7;
		wxStaticText* m_staticText10;
		wxStaticText* m_staticText11;
		wxStaticText* m_staticPrestar_NombreAlumno;
		wxStaticText* m_staticPrestar_NombreAlumno_Valor;
		wxStaticText* m_staticPrestar_DniAlumno;
		wxStaticText* m_staticPrestar_DniAlumno_Valor;
		wxStaticText* m_staticText9;
		wxBitmapComboBox* m_bcomboBox1;
		wxButton* m_button15;
		wxStaticText* m_staticText23;
		wxPanel* m_panel7;
		wxListCtrl* m_list_PrestamosAnteriores;

	public:

		MyDialogPrestamo( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 469,386 ), long style = wxDEFAULT_DIALOG_STYLE );

		~MyDialogPrestamo();

};

///////////////////////////////////////////////////////////////////////////////
/// Class MyDialogHistorial
///////////////////////////////////////////////////////////////////////////////
class MyDialogHistorial : public wxDialog
{
	private:

	protected:
		wxStaticText* m_staticPrestar_NombreAlumno;
		wxStaticText* m_staticPrestar_NombreAlumno_Valor;
		wxStaticText* m_staticPrestar_DniAlumno;
		wxStaticText* m_staticPrestar_DniAlumno_Valor;
		wxStaticText* m_staticText23;
		wxPanel* m_panel7;
		wxListCtrl* m_list_PrestamosAnteriores;

	public:

		MyDialogHistorial( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 554,424 ), long style = wxDEFAULT_DIALOG_STYLE );

		~MyDialogHistorial();

};

///////////////////////////////////////////////////////////////////////////////
/// Class MyDialog_Eliminar
///////////////////////////////////////////////////////////////////////////////
class MyDialog_Eliminar : public wxDialog
{
	private:

	protected:
		wxStaticText* m_staticText17;
		wxStaticText* m_staticEliminar;
		wxButton* m_button_Cancela_Eliminacion;
		wxButton* m_button_Continuar_Eliminar;

		// Virtual event handlers, override them in your derived class
		virtual void OnButtonClick_Cancela_Eliminar( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnclikContinuar_Eliminar( wxCommandEvent& event ) { event.Skip(); }


	public:

		MyDialog_Eliminar( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Eliminar"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 336,136 ), long style = wxDEFAULT_DIALOG_STYLE );

		~MyDialog_Eliminar();

};

///////////////////////////////////////////////////////////////////////////////
/// Class MyDialogAgregar
///////////////////////////////////////////////////////////////////////////////
class MyDialogAgregar : public wxDialog
{
	private:

	protected:
		wxStaticText* m_staticText17;
		wxTextCtrl* m_text_NuevoTag_Valor;
		wxButton* m_button_NuevoElemento_cancelar;
		wxButton* m_button_NuevoElemento_Continuar;

		// Virtual event handlers, override them in your derived class
		virtual void onTextEnter_Bienvenido_Confirmar( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnButtonClickCerrar( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnclikNuevoElemento( wxCommandEvent& event ) { event.Skip(); }


	public:

		MyDialogAgregar( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Nuevo Elemento"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( -1,-1 ), long style = wxDEFAULT_DIALOG_STYLE );

		~MyDialogAgregar();

};

///////////////////////////////////////////////////////////////////////////////
/// Class MyDialogAgregarPersona
///////////////////////////////////////////////////////////////////////////////
class MyDialogAgregarPersona : public wxDialog
{
	private:

	protected:
		wxStaticText* m_staticText17;
		wxTextCtrl* m_text_Nombre_Valor;
		wxStaticText* m_staticText171;
		wxTextCtrl* m_text_Apellido_Valor;
		wxStaticText* m_staticText1711;
		wxTextCtrl* m_text_Dni_Valor;
		wxButton* m_button_NuevoElemento_cancelar;
		wxButton* m_button_NuevoElemento_Continuar;

		// Virtual event handlers, override them in your derived class
		virtual void onTextEnter_Bienvenido_Confirmar( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnButtonClickCerrar( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnclikNuevoElemento( wxCommandEvent& event ) { event.Skip(); }


	public:

		MyDialogAgregarPersona( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Información Personal"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( -1,-1 ), long style = wxDEFAULT_DIALOG_STYLE );

		~MyDialogAgregarPersona();

};

