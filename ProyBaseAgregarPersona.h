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
#include <wx/dialog.h>

///////////////////////////////////////////////////////////////////////////

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

