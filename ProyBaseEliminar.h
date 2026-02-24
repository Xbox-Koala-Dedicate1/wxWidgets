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
#include <wx/sizer.h>
#include <wx/button.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/dialog.h>

///////////////////////////////////////////////////////////////////////////

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

