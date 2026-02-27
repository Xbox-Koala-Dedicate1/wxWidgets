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
#include <wx/textctrl.h>
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/button.h>
#include <wx/dialog.h>

///////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
/// Class MyDialogAgregarEditarLibro
///////////////////////////////////////////////////////////////////////////////
class MyDialogAgregarEditarLibro : public wxDialog
{
	private:

	protected:
		wxStaticBitmap* m_bitmapCabeceraLbro;
		wxTextCtrl* m_textCtrlEditarNombreLibro;
		wxStaticText* m_staticText7;
		wxButton* m_button3;
		wxButton* m_button31;
		wxButton* m_button311;
		wxBoxSizer* bSizerContendorTags;
		wxStaticText* m_staticText11;
		wxStaticText* m_staticEstadoValor;
		wxButton* m_botonEditar;
		wxStaticText* m_staticText3;
		wxTextCtrl* m_textCtrlEdicionDescipcion;
		wxStaticText* m_staticText5;
		wxTextCtrl* m_textCtrlEdicionAutor;

		// Virtual event handlers, override them in your derived class
		virtual void OnclikButtonClickEdicion( wxCommandEvent& event ) { event.Skip(); }


	public:

		MyDialogAgregarEditarLibro( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Ventana Agregar/Editar"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 646,446 ), long style = wxDEFAULT_DIALOG_STYLE );

		~MyDialogAgregarEditarLibro();

};

