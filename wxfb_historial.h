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
#include <wx/listctrl.h>
#include <wx/panel.h>
#include <wx/frame.h>

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

