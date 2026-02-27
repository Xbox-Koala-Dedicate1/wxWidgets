///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 4.2.1-0-g80c4cb6)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/intl.h>
#include <wx/string.h>
#include <wx/radiobut.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/datectrl.h>
#include <wx/dateevt.h>
#include <wx/textctrl.h>
#include <wx/dataview.h>
#include <wx/button.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/grid.h>
#include <wx/dialog.h>

///////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
/// Class MyDialogDevolucion
///////////////////////////////////////////////////////////////////////////////
class MyDialogDevolucion : public wxDialog
{
	private:

	protected:
		wxRadioButton* m_radioBtn7;
		wxStaticText* m_staticText10;
		wxDatePickerCtrl* m_datePickerDevolucion;
		wxStaticText* m_staticPrestar_NombreAlumno;
		wxStaticText* m_staticPrestar_NombreAlumno_Valor;
		wxStaticText* m_staticPrestar_DniAlumno;
		wxStaticText* m_staticPrestar_DniAlumno_Valor;
		wxStaticText* m_staticText9;
		wxTextCtrl* m_txtBuscarLibro;
		wxStaticText* m_staticText8;
		wxDataViewListCtrl* m_listaResultadosLibros;
		wxButton* m_btnConfirmar;
		wxStaticText* m_staticText23;
		wxGrid* m_gridHistorial;

		// Virtual event handlers, override them in your derived class
		virtual void OnFechaDevolucionChanged( wxDateEvent& event ) { event.Skip(); }
		virtual void OnBuscarLibro( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnConfirmarPrestamoClick( wxCommandEvent& event ) { event.Skip(); }


	public:

		MyDialogDevolucion( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("DEVOLUCION"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 773,515 ), long style = wxDEFAULT_DIALOG_STYLE );

		~MyDialogDevolucion();

};

