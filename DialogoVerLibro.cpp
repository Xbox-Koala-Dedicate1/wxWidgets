#include "DialogoVerLibro.h"
#include "Funcionalidades/system/system.h"
DialogoVerLibro::DialogoVerLibro(wxWindow *parent, Libro& actual) : MyDialogVerLibro(parent) {
	this->actual = actual;
	/// 1. Asignar textos (ajusta los métodos Get a los de tu clase)
	m_staticNombreLibro->SetLabel(actual.VerNombre());
	m_staticText_DescripcionValor->SetLabel(actual.VerDescripcion());
	m_staticAutorValor->SetLabel(actual.VerAutores());
	
	/// 2. Asignar imagen
	wxImage img;
	if (img.LoadFile(actual.VerPath(), wxBITMAP_TYPE_ANY)) {
		m_bitmapCabeceraLbro->SetBitmap(wxBitmap(img));
	}
	
	/// 3. Crear botones dinámicos de tags (máximo 3)
	/// Asegúrate de borrar los botones "Tags1" y "Tag2" de prueba en wxFormBuilder
	int a = 2;
	int *tags = &a; 
	int cantTags = 3;
	
	for (int i = 0; i < cantTags; i++) {
		wxButton* btnTag = new wxButton(this, wxID_ANY, std::to_string(tags[i]));
		bSizerContendorTags->Add(btnTag, 0, wxALL, 5); /// bSizer28 es donde van los tags según tu imagen
		
		/// Vincular al evento común
		btnTag->Bind(wxEVT_BUTTON, &DialogoVerLibro::OnTagClick, this);
	}
	
	this->Layout(); 
}

/// 4. Implementación del evento común (declarar en el .h)
void DialogoVerLibro::OnTagClick(wxCommandEvent& event) {
	wxButton* btn = dynamic_cast<wxButton*>(event.GetEventObject());
	if (btn) {
		wxString tagSeleccionado = btn->GetLabel();
		/// Aquí llamas a tu evento/función del buscador pasándole 'tagSeleccionado'
	}
	EndModal(wxID_OK); /// Cierra el diálogo actual
}

DialogoVerLibro::~DialogoVerLibro() {
	
}
void DialogoVerLibro::OnclikButtonClickEdicion( wxCommandEvent& event )  {
	wxSimplebook* bookNom = static_cast<wxSimplebook*>(m_staticNombreLibro->GetParent()->GetParent());
	wxSimplebook* bookDesc = static_cast<wxSimplebook*>(m_staticText_DescripcionValor->GetParent()->GetParent());
	wxSimplebook* bookAutor = static_cast<wxSimplebook*>(m_staticAutorValor->GetParent()->GetParent());
	
	if (m_botonEditar->GetLabel() == "Editar") {
		///Edicion Nombre
		m_textCtrlNombreLibro->SetValue(m_staticNombreLibro->GetLabel());
		bookNom->SetSelection(1); 
		
		///Edicion descripcion
		m_textCtrlEdicionDescipcion->SetValue(m_staticText_DescripcionValor->GetLabel());
		bookDesc->SetSelection(1); 
		
		///Edicion autor
		m_textCtrlEdicionAutor->SetValue(m_staticAutorValor->GetLabel());
		bookAutor->SetSelection(1); 
		
		m_botonEditar->SetLabel("Confirmar");
	} else {
		/// Pasar a modo vista (Confirmar)
		
		///Descripcion confirmacion
		m_staticNombreLibro->SetLabel(m_textCtrlNombreLibro->GetValue());
		bookNom->SetSelection(0); 
		
		///Descripcion confirmacion
		m_staticText_DescripcionValor->SetLabel(m_textCtrlEdicionDescipcion->GetValue());
		bookDesc->SetSelection(0); 
		
		///Autores confirmacion
		m_staticAutorValor->SetLabel(m_textCtrlEdicionAutor->GetValue());
		bookAutor->SetSelection(0); 
		
		m_botonEditar->SetLabel("Editar");
		
		actual.CambiarNombre(m_textCtrlNombreLibro->GetValue().utf8_str());
		actual.CambiarDescripcion(m_textCtrlEdicionDescipcion->GetValue().utf8_str());
		actual.CambiarAutores(m_textCtrlEdicionAutor->GetValue().utf8_str());
		System sistema;
		vector<size_t>ids={actual.VerID()};
		vector<Libro>Lib ={actual};
		sistema.EscribirEnBin<Libro>(ids,Lib,sistema.libros());
		EndModal(wxID_OK);
	}
	
	
}

void DialogoVerLibro::OnButtonClickReservar( wxCommandEvent& event )  {
	event.Skip();
}

