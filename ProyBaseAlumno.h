///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 4.2.1-0-g80c4cb6)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/string.h>
#include <wx/textctrl.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/button.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/sizer.h>
#include <wx/radiobut.h>
#include <wx/stattext.h>
#include <wx/statbmp.h>
#include <wx/panel.h>
#include <wx/listctrl.h>
#include <wx/calctrl.h>
#include <wx/simplebook.h>
#include <wx/frame.h>

///////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
/// Class MyFrameInicioCorrectoAlumno
///////////////////////////////////////////////////////////////////////////////
class MyFrameInicioCorrectoAlumno : public wxFrame
{
	private:

	protected:
		wxTextCtrl* mtext_Buscador_frase;
		wxButton* Boton_Buscar_Frase;
		wxRadioButton* m_radio_Libros;
		wxRadioButton* m_radio_InfoLibros;
		wxRadioButton* m_radio_Reservar;
		wxRadioButton* m_radio_Etiquetas;
		wxRadioButton* m_radio_Alumnos;
		wxRadioButton* m_radio_Bibliotecarios;
		wxSimplebook* m_Bibliotecario_frameActual;
		wxPanel* m_panel_Bibliotecario_Libros;
		wxStaticText* m_staticText4;
		wxStaticBitmap* m_bitmap2;
		wxButton* m_button19;
		wxStaticText* m_staticText18;
		wxButton* m_button20;
		wxPanel* m_panel_DetallesLibros;
		wxListCtrl* m_list_InfoLibros;
		wxButton* m_button131;
		wxButton* m_button21;
		wxButton* m_button201;
		wxButton* m_button141;
		wxPanel* m_panel_Reservar;
		wxCalendarCtrl* m_calendar1;
		wxListCtrl* m_list_Reservas;
		wxButton* m_button14111;
		wxPanel* m_panel_DetallesEtiquetas;
		wxListCtrl* m_list_Etiquetas;
		wxButton* m_button1311;
		wxButton* m_button1411;
		wxPanel* m_panel_Alumnos;
		wxListCtrl* m_list_Alumnos;
		wxButton* m_button13;
		wxButton* m_button17;
		wxButton* m_button142;
		wxButton* m_button14;
		wxButton* m_button15;
		wxPanel* m_panel_Bibliotecarios;
		wxListCtrl* m_list_Bibliotecarios;
		wxButton* m_button132;
		wxButton* button_eliminar;

		// Virtual event handlers, override them in your derived class
		virtual void Onclick_Boton_Buscar_Frase( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnRadioButton_CambiaPestana( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnButtonClickAgregar( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnButtonClickEliminar( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnButtonClickPrestarLibro( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnButtonClickHistorialAlumno( wxCommandEvent& event ) { event.Skip(); }


	public:

		MyFrameInicioCorrectoAlumno( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("ALUMNO"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( -1,-1 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~MyFrameInicioCorrectoAlumno();

};

