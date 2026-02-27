///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 4.2.1-0-g80c4cb6)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/statbmp.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/sizer.h>
#include <wx/panel.h>
#include <wx/textctrl.h>
#include <wx/simplebook.h>
#include <wx/button.h>
#include <wx/dialog.h>

///////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
/// Class MyDialogVerLibro
///////////////////////////////////////////////////////////////////////////////
class MyDialogVerLibro : public wxDialog
{
	private:

	protected:
		wxStaticBitmap* m_bitmapCabeceraLbro;
		wxSimplebook* m_simplebook3;
		wxPanel* m_panel5;
		wxStaticText* m_staticNombreLibro;
		wxPanel* m_panel6;
		wxTextCtrl* m_textCtrlNombreLibro;
		wxStaticText* m_staticText7;
		wxBoxSizer* bSizerContendorTags;
		wxStaticText* m_staticText11;
		wxStaticText* m_staticEstadoValor;
		wxButton* m_botonEditar;
		wxStaticText* m_staticText3;
		wxSimplebook* m_simplebook1;
		wxPanel* m_panel1;
		wxStaticText* m_staticText_DescripcionValor;
		wxPanel* m_panel11;
		wxTextCtrl* m_textCtrlEdicionDescipcion;
		wxStaticText* m_staticText5;
		wxSimplebook* m_simplebook11;
		wxPanel* m_panel12;
		wxStaticText* m_staticAutorValor;
		wxPanel* m_panel111;
		wxTextCtrl* m_textCtrlEdicionAutor;
		wxButton* m_button19;

		// Virtual event handlers, override them in your derived class
		virtual void OnclikButtonClickEdicion( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnButtonClickReservar( wxCommandEvent& event ) { event.Skip(); }


	public:

		MyDialogVerLibro( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 646,446 ), long style = wxDEFAULT_DIALOG_STYLE );

		~MyDialogVerLibro();

};

