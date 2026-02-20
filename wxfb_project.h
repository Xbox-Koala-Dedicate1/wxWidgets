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
#include <wx/radiobut.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/bmpcbox.h>
#include <wx/button.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/grid.h>
#include <wx/panel.h>
#include <wx/dialog.h>

///////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
/// Class MyDialogPrestamo
///////////////////////////////////////////////////////////////////////////////
class MyDialogPrestamo : public wxDialog
{
	private:

	protected:
		wxRadioButton* m_radioBtn7;
		wxStaticText* m_staticText10;
		wxTextCtrl* txtDiasRestantes;
		wxStaticText* m_staticPrestar_NombreAlumno;
		wxStaticText* m_staticPrestar_NombreAlumno_Valor;
		wxStaticText* m_staticPrestar_DniAlumno;
		wxStaticText* m_staticPrestar_DniAlumno_Valor;
		wxStaticText* m_staticText9;
		wxBitmapComboBox* m_bcomboBox1;
		wxButton* m_button15;
		wxStaticText* m_staticText23;
		wxPanel* m_panel7;
		wxGrid* m_grid1;

		// Virtual event handlers, override them in your derived class
		virtual void OnBuscarLibroText( wxCommandEvent& event ) { event.Skip(); }


	public:

		MyDialogPrestamo( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 681,498 ), long style = wxDEFAULT_DIALOG_STYLE );

		~MyDialogPrestamo();

};

