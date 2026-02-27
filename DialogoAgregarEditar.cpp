#include "DialogoAgregarEditar.h"
#include "Funcionalidades/system/system.h"
DialogoAgregarEditar::DialogoAgregarEditar(wxWindow *parent)  : MyDialogAgregarEditarLibro(parent) {

}
DialogoAgregarEditar::DialogoAgregarEditar(wxWindow *parent, Libro& actual)  : MyDialogAgregarEditarLibro(parent) {
	this->actual = actual;

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
		btnTag->Bind(wxEVT_BUTTON, &DialogoAgregarEditar::OnTagClick, this);
	}
	
	this->Layout(); 
}
/// 4. Implementación del evento común (declarar en el .h)
void DialogoAgregarEditar::OnTagClick(wxCommandEvent& event) {
	wxButton* btn = dynamic_cast<wxButton*>(event.GetEventObject());
	if (btn) {
		wxString tagSeleccionado = btn->GetLabel();
		/// Aquí llamas a tu evento/función del buscador pasándole 'tagSeleccionado'
	}
	EndModal(wxID_OK); /// Cierra el diálogo actual
}

void DialogoAgregarEditar::OnclikButtonClickEdicion( wxCommandEvent& event )  {
	
		
		System sistema;
		int ultimo = sistema.VerUltimo<Libro>(sistema.libros()) + 1;
		Libro Nuevo(ultimo,m_textCtrlEditarNombreLibro->GetValue().utf8_str());
		Nuevo.CambiarPath(sistema.noLibroImg().c_str());
		Nuevo.CambiarDescripcion(m_textCtrlEdicionDescipcion->GetValue().utf8_str());
		Nuevo.CambiarAutores(m_textCtrlEdicionAutor->GetValue().utf8_str());
		
		sistema.AlUltimo<Libro>(sistema.libros(),Nuevo);
		EndModal(wxID_OK);
	
}

DialogoAgregarEditar::~DialogoAgregarEditar() {
	
}

