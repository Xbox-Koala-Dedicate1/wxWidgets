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
#include <wx/stattext.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/textctrl.h>
#include <wx/sizer.h>
#include <wx/button.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/frame.h>

///////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
/// Class MyFrameCrearCuenta
///////////////////////////////////////////////////////////////////////////////
class MyFrameCrearCuenta : public wxFrame
{
	private:

	protected:
		wxStaticText* m_staticText_CrearCuenta_ref1;
		wxTextCtrl* m_text_CrearCuenta_campo1;
		wxStaticText* m_staticText_CrearCuenta_ref2;
		wxTextCtrl* m_text_CrearCuenta_campo2;
		wxButton* m_button10;
		wxButton* m_button11;

		// Virtual event handlers, override them in your derived class
		virtual void OnButtonClickCerrar( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnclikBienvenido_Iniciar( wxCommandEvent& event ) { event.Skip(); }


	public:

		MyFrameCrearCuenta( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Crear Nueva Cuenta"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( -1,-1 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~MyFrameCrearCuenta();

};

