#include "VentanaParaAlumno.h"
#include "DialogoReservar.h"
#include "DialogoPrestamo.h"
#include "DialogoHistorial.h"
#include "DialogoAgregar.h"
#include "Dialogo_Eliminar.h"
#include "Funcionalidades/system/system.h"
#include "Funcionalidades/bibliotecario/bibliotecario.h"
#include "DialogoAgregarPersona.h"
#include "DialogoVerLibro.h"
#include <wx/dcmemory.h>
#include <wx/wrapsizer.h>
#include "DialogoAgregarEditar.h"
using namespace std;

VentanaParaAlumno::VentanaParaAlumno(wxWindow *parent) : MyFrameInicioCorrectoAlumno(parent) {
	sistema = new System();
	this->Maximize(true);
	
	m_list_InfoLibros->InsertColumn(0, "ID", wxLIST_FORMAT_LEFT, 50);
	m_list_InfoLibros->InsertColumn(1, "Nombre", wxLIST_FORMAT_LEFT, 200);
	m_list_InfoLibros->InsertColumn(2, "Estado", wxLIST_FORMAT_LEFT, 100);
	m_list_InfoLibros->InsertColumn(3, "Descripcion", wxLIST_FORMAT_LEFT, 100);
	m_list_InfoLibros->InsertColumn(4, "Autores", wxLIST_FORMAT_LEFT, 100);
	m_list_InfoLibros->InsertColumn(5, "Etiquetas", wxLIST_FORMAT_LEFT, 100);
	
	m_list_InfoLibros->SetSingleStyle(wxLC_HRULES); 
	m_list_InfoLibros->SetSingleStyle(wxLC_VRULES); 
	
	m_list_Reservas->InsertColumn(0, "ID", wxLIST_FORMAT_LEFT, 50);
	m_list_Reservas->InsertColumn(1, "Nombre", wxLIST_FORMAT_LEFT, 200);
	m_list_Reservas->InsertColumn(2, "Estado", wxLIST_FORMAT_LEFT, 200);
	
	m_list_Etiquetas->InsertColumn(0, "ID", wxLIST_FORMAT_LEFT, 50);
	m_list_Etiquetas->InsertColumn(1, "Nombre", wxLIST_FORMAT_LEFT, 200);
	m_list_Etiquetas->InsertColumn(2, "Estado", wxLIST_FORMAT_LEFT, 200);
	m_list_Etiquetas->SetSingleStyle(wxLC_HRULES); 
	m_list_Etiquetas->SetSingleStyle(wxLC_VRULES); 
	
	m_list_Alumnos->InsertColumn(0, "ID", wxLIST_FORMAT_LEFT, 50);
	m_list_Alumnos->InsertColumn(1, "Nombre", wxLIST_FORMAT_LEFT, 200);
	m_list_Alumnos->InsertColumn(2, "Dni", wxLIST_FORMAT_LEFT, 100);
	m_list_Alumnos->InsertColumn(3, "Estado", wxLIST_FORMAT_LEFT, 100);
	m_list_Alumnos->SetSingleStyle(wxLC_HRULES); 
	m_list_Alumnos->SetSingleStyle(wxLC_VRULES); 
	
	m_list_Bibliotecarios->InsertColumn(0, "ID", wxLIST_FORMAT_LEFT, 50);
	m_list_Bibliotecarios->InsertColumn(1, "Nombre", wxLIST_FORMAT_LEFT, 200);
	m_list_Bibliotecarios->InsertColumn(2, "Dni", wxLIST_FORMAT_LEFT, 100);
	m_list_Bibliotecarios->InsertColumn(3, "Estado", wxLIST_FORMAT_LEFT, 100);
	m_list_Bibliotecarios->SetSingleStyle(wxLC_HRULES); 
	m_list_Bibliotecarios->SetSingleStyle(wxLC_VRULES); 
	
	m_panel_Bibliotecario_Libros->Bind(wxEVT_SIZE, [this](wxSizeEvent& evento) {
		evento.Skip();
		m_panel_Bibliotecario_Libros->Layout();
		if (m_panel_Bibliotecario_Libros->GetSizer()) {
			m_panel_Bibliotecario_Libros->SetVirtualSize(m_panel_Bibliotecario_Libros->GetSizer()->CalcMin());
		}
	});
	MostrarLibros();
}

void VentanaParaAlumno::MostrarLibros(){
	m_panel_Bibliotecario_Libros->DestroyChildren(); 
	
	vLibros = sistema->VerContenido<Libro>(sistema->libros(), true);
	wxWrapSizer* sizerGrilla = new wxWrapSizer(wxHORIZONTAL);
	
	for (size_t i = 0; i < vLibros.size(); i++) {
		wxBoxSizer* sizerLibroIndividual = new wxBoxSizer(wxVERTICAL);
		
		wxString nombreStr = wxString::FromUTF8(vLibros[i].VerNombre());
		wxString rutaStr = wxString::FromUTF8(vLibros[i].VerPath());
		
		wxStaticText* textoTitulo = new wxStaticText(m_panel_Bibliotecario_Libros, wxID_ANY, nombreStr);
		wxFont fuenteTitulo = textoTitulo->GetFont();
		fuenteTitulo.SetWeight(wxFONTWEIGHT_BOLD);
		textoTitulo->SetFont(fuenteTitulo);
		
		wxBitmap bitmapPortada;
		wxImage image;
		
		if (!wxFileName::Exists(rutaStr)) {
			rutaStr = wxString::FromUTF8(sistema->noLibroImg().c_str());
		}
		
		if (image.LoadFile(rutaStr, wxBITMAP_TYPE_ANY)) {
			int anchoDeseado = 150;
			int altoCalculado = image.GetHeight() * anchoDeseado / image.GetWidth();
			image.Rescale(anchoDeseado, altoCalculado, wxIMAGE_QUALITY_HIGH);
			bitmapPortada = wxBitmap(image);
		} else {
			bitmapPortada.Create(150, 200);
			wxMemoryDC dc(bitmapPortada);
			dc.SetBackground(*wxWHITE_BRUSH);
			dc.Clear();
			dc.SetTextForeground(*wxRED);
			dc.DrawText("Sin Portada", 40, 90);
			dc.SelectObject(wxNullBitmap);
		}
		
		int idImagen = 2000 + i;
		wxStaticBitmap* imagenPortada = new wxStaticBitmap(m_panel_Bibliotecario_Libros, idImagen, bitmapPortada);
		
		imagenPortada->SetCursor(wxCursor(wxCURSOR_HAND));
		imagenPortada->Bind(wxEVT_LEFT_DOWN, &VentanaParaAlumno::OnLeftUpVerLibro, this);
		
		sizerLibroIndividual->Add(textoTitulo, 0, wxALL | wxALIGN_CENTER_HORIZONTAL, 5);
		sizerLibroIndividual->Add(imagenPortada, 0, wxALL | wxALIGN_CENTER_HORIZONTAL, 5);
		
		sizerGrilla->Add(sizerLibroIndividual, 0, wxALL, 15);
	}
	
	m_panel_Bibliotecario_Libros->SetSizer(sizerGrilla);
	m_panel_Bibliotecario_Libros->Layout();
	m_panel_Bibliotecario_Libros->SetScrollRate(0, 20);
	
	m_panel_Bibliotecario_Libros->SetVirtualSize(sizerGrilla->CalcMin());
}
void VentanaParaAlumno::OnLeftUpVerLibro(wxMouseEvent& event) {
	int indiceVector = event.GetId() - 2000; // Restamos 2000 para recuperar el índice (0, 1, 2...)
	
	if (indiceVector >= 0 && indiceVector < vLibros.size()) {
		
		DialogoVerLibro *nueva = new DialogoVerLibro(this, vLibros[indiceVector]);
		if (nueva->ShowModal() == wxID_OK){
			MostrarLibros();
		}
		nueva->Destroy();
	}
}
VentanaParaAlumno::~VentanaParaAlumno() {	
	if (sistema) {
		delete sistema;
		sistema = nullptr;
	}
}
void VentanaParaAlumno::CargarListaAlumnos(wxListCtrl* lista){
	//Limpiamos la tabla
	lista->DeleteAllItems();
	
	//
	lista->Freeze();
	vAlumno = sistema->VerContenido<Alumno>(sistema->alumnos(),true);
	for(int i=0;i<vAlumno.size();i++) { 
		///Llenamos con ID
		long index = lista->InsertItem(i, wxString::Format("%d", (int)vAlumno[i].VerID()));
		
		///CargarNombreDelAlumno
		lista->SetItem(index, 1, vAlumno[i].VerNombre() );
		
		///CargamosDni (Envuelto en wxString por seguridad)
		lista->SetItem(index, 2, wxString(to_string(vAlumno[i].VerDNI())));
		lista->SetItem(index, 3, wxString::Format("%d", (int)vAlumno[i].Existencia()) );				
		
	}
	///Mostrar todo de golpe
	lista->Thaw();	
}


void VentanaParaAlumno::CargarListaBibliotecario(wxListCtrl* lista){
	//Limpiamos la tabla
	lista->DeleteAllItems();
	
	//
	lista->Freeze();
	vBibliotecario = sistema->VerContenido<Bibliotecario>(sistema->bibliotecarios(),true);
	for(int i=0;i<vBibliotecario.size();i++) { 
		///Llenamos con ID (Casteado a int)
		long index = lista->InsertItem(i, wxString::Format("%d", (int)vBibliotecario[i].VerID()));
		
		///CargarNombreDelAlumno
		lista->SetItem(index, 1, vBibliotecario[i].VerNombre() );
		
		///CargamosDni (Envuelto en wxString)
		lista->SetItem(index, 2, wxString(to_string(vBibliotecario[i].VerDNI())));	
		lista->SetItem(index, 3, wxString::Format("%d", (int)vBibliotecario[i].Existencia()) );				
	}
	///Mostrar todo de golpe
	lista->Thaw();
}
void VentanaParaAlumno::CargarListaInfoLibros(wxListCtrl* lista){
	//Limpiamos la tabla
	lista->DeleteAllItems();
	
	//
	lista->Freeze();
	vLibros = sistema->VerContenido<Libro>(sistema->libros(),true);
	for(int i=0;i<vLibros.size();i++) { 
		///Llenamos con ID (Casteado a int)
		long index = lista->InsertItem(i, wxString::Format("%d", (int)vLibros[i].VerID()));
		
		///CargarNombreDelAlumno
		lista->SetItem(index, 1, vLibros[i].VerNombre() );
		
		///Antes estadoDisponibibldad (Casteado a int)
		lista->SetItem(index, 2, wxString::Format("%d", (int)vLibros[i].Existencia()) );		
		
		lista->SetItem(index, 3, vLibros[i].VerDescripcion() );
		
		lista->SetItem(index, 4, vLibros[i].VerAutores() );
		
		///lista->SetItem(index, 5, vLibros[i].VerEtiquetas() );
		
	}
	///Mostrar todo de golpe
	lista->Thaw();
}
void VentanaParaAlumno::CargarListaReservar(wxListCtrl* lista){
	//Limpiamos la tabla
	lista->DeleteAllItems();
	
	//
	lista->Freeze();
	
	vReservas = sistema->VerContenido<Reservar>(sistema->reservar(),true);
	for(int i=0;i<vReservas.size();i++) { 
		
		/// ID (Casteado a int)
		long index = lista->InsertItem(i, wxString::Format("%d", (size_t)vReservas[i].VerID()));
		
		///Nombre	
		lista->SetItem(index, 1, vReservas[i].VerNombre() );
		
		///Existencia (Casteado a int)
		lista->SetItem(index, 2, wxString::Format("%d", (int)vReservas[i].Existencia()) );			}
	///Mostrar todo de golpe
	lista->Thaw();
}

void VentanaParaAlumno::CargarListaEtiquetas(wxListCtrl* lista){
	//Limpiamos la tabla
	lista->DeleteAllItems();
	//¿¿
	lista->Freeze();
	tagsActuales = sistema->VerContenido<Tags>(sistema->etiquetas(),true);
	for(int i=0;i<tagsActuales.size();i++) { 
		
		/// ID (Casteado a int)
		long index = lista->InsertItem(i, wxString::Format("%d", (int)tagsActuales[i].IdTag));
		
		///Nombre	
		lista->SetItem(index, 1, tagsActuales[i].NombreTag );
		
		///Existencia (Casteado a int)
		lista->SetItem(index, 2, wxString::Format("%d", (int)tagsActuales[i].Existencia()) );			
	}
	///Mostrar todo de golpe
	lista->Thaw();
}

void VentanaParaAlumno::OnRadioButton_CambiaPestana(wxCommandEvent& event){
	if(m_radio_Libros->GetValue()){
		MostrarLibros();
		m_Bibliotecario_frameActual->SetSelection(0);
		
	}
	if(m_radio_InfoLibros->GetValue()){
		m_Bibliotecario_frameActual->SetSelection(1);
		CargarListaInfoLibros(m_list_InfoLibros);
	}
	if(m_radio_Reservar->GetValue()){
		m_Bibliotecario_frameActual->SetSelection(2);
		CargarListaReservar(m_list_Reservas);
	}
	if(m_radio_Etiquetas->GetValue()){
		m_Bibliotecario_frameActual->SetSelection(3);
		CargarListaEtiquetas(m_list_Etiquetas);
	}
	else if(m_radio_Alumnos->GetValue()){
		m_Bibliotecario_frameActual->SetSelection(4);
		CargarListaAlumnos(m_list_Alumnos);
	}				
	else if(m_radio_Bibliotecarios->GetValue()){
		m_Bibliotecario_frameActual->SetSelection(5);
		CargarListaBibliotecario(m_list_Bibliotecarios);
	}
	
	this->Layout();  ///Actualizamos al frame actual
}



void VentanaParaAlumno::OnButtonClickPrestarLibro( wxCommandEvent& event )  {
	long id = m_list_Alumnos->GetNextItem(-1,wxLIST_NEXT_ALL, wxLIST_STATE_SELECTED);
	if(id != -1){
		if(id >= 0 and id <= vAlumno.size()){
			
			DialogoPrestamo *nueva= new DialogoPrestamo(this,vAlumno[id]);
			nueva->ShowModal();
		}
	}
}

void VentanaParaAlumno::OnButtonClickHistorialLibro( wxCommandEvent& event )  {
	long id = m_list_InfoLibros->GetNextItem(-1,wxLIST_NEXT_ALL, wxLIST_STATE_SELECTED);
	if(id != -1){
		if(id >= 0 and id <= vLibros.size()){
			
			DialogoHistorial *nueva= new DialogoHistorial(this,vLibros[id]);
			nueva->ShowModal();
		}
	}
}
void VentanaParaAlumno::OnButtonClickHistorialAlumno( wxCommandEvent& event )  {
	long id = m_list_Alumnos->GetNextItem(-1,wxLIST_NEXT_ALL, wxLIST_STATE_SELECTED);
	if(id != -1){
		if(id >= 0 and id <= vAlumno.size()){
			
			DialogoHistorial *nueva= new DialogoHistorial(this,vAlumno[id]);
			nueva->ShowModal();
		}
	}
}

void VentanaParaAlumno::Onclick_Boton_Buscar_Frase( wxCommandEvent& event )  {
	
}

void VentanaParaAlumno::onclickbutton_eliminar( wxCommandEvent& event )  {
	event.Skip();
}

void VentanaParaAlumno::OnButtonClickAgregar( wxCommandEvent& event )  {
	int tipo=0;
	if(m_radio_InfoLibros->GetValue()){
		tipo=0;
		DialogoAgregarEditar *nueva= new DialogoAgregarEditar(this);
		if (nueva->ShowModal() == wxID_OK){
			CargarListaInfoLibros(m_list_InfoLibros);
		}
	}
	if(m_radio_Etiquetas->GetValue()){
		tipo=1;
		DialogoAgregar *nueva= new DialogoAgregar(this,sistema,admin,tipo,sistema->etiquetas());
		if (nueva->ShowModal() == wxID_OK){
			CargarListaEtiquetas(m_list_Etiquetas);
		}
	}
	else if(m_radio_Alumnos->GetValue()){
		tipo=0;
		DialogoAgregarPersona *nueva= new DialogoAgregarPersona(this,sistema,admin,tipo,sistema->alumnos());
		if (nueva->ShowModal() == wxID_OK){
			CargarListaAlumnos(m_list_Alumnos);
		}
		
	}				
	else if(m_radio_Bibliotecarios->GetValue()){
		tipo=1;
		DialogoAgregarPersona *nueva= new DialogoAgregarPersona(this,sistema,admin,tipo,sistema->bibliotecarios());
		if (nueva->ShowModal() == wxID_OK){
			CargarListaBibliotecario(m_list_Bibliotecarios);
		}
	}
}


void VentanaParaAlumno::OnButtonClickEliminar( wxCommandEvent& event )  {
	long id;
	if(m_radio_InfoLibros->GetValue()){
		id = m_list_InfoLibros->GetNextItem(-1,wxLIST_NEXT_ALL, wxLIST_STATE_SELECTED);
		
		if(id != -1){
			if(id >= 0 and id <= vLibros.size()){
				Dialogo_Eliminar *nueva= new Dialogo_Eliminar(this,id,sistema,sistema->libros(),0,vLibros[id].VerNombre());
				if (nueva->ShowModal() == wxID_OK){
					CargarListaInfoLibros(m_list_InfoLibros);
				}
			}
		}
	}
	else if(m_radio_Reservar->GetValue()){
		id = m_list_Reservas->GetNextItem(-1,wxLIST_NEXT_ALL, wxLIST_STATE_SELECTED);
		
		if(id != -1){
			if(id >= 0 and id <= vReservas.size()){
				Dialogo_Eliminar *nueva= new Dialogo_Eliminar(this,id,sistema,sistema->reservar(),1,vReservas[id].VerNombre());
				if (nueva->ShowModal() == wxID_OK){
					CargarListaReservar(m_list_Reservas);
				}
			}
		}
	}
	else if(m_radio_Etiquetas->GetValue()){  // <-- Agregado el 'else' aquí
		id = m_list_Etiquetas->GetNextItem(-1,wxLIST_NEXT_ALL, wxLIST_STATE_SELECTED);
		
		if(id != -1){
			if(id >= 0 and id <= tagsActuales.size()){
				Dialogo_Eliminar *nueva= new Dialogo_Eliminar(this,id,sistema,sistema->etiquetas(),2,tagsActuales[id].NombreTag);
				if (nueva->ShowModal() == wxID_OK){
					CargarListaEtiquetas(m_list_Etiquetas);
				}
			}
		}
	}
	else if(m_radio_Alumnos->GetValue()){
		id = m_list_Alumnos->GetNextItem(-1,wxLIST_NEXT_ALL, wxLIST_STATE_SELECTED);
		if(id != -1){
			if(id >= 0 and id <= vAlumno.size()){
				Dialogo_Eliminar *nueva= new Dialogo_Eliminar(this,id,sistema,sistema->alumnos(),3,vAlumno[id].VerNombre());
				if (nueva->ShowModal() == wxID_OK){
					CargarListaAlumnos(m_list_Alumnos);
				}
			}
		}
	}				
	else if(m_radio_Bibliotecarios->GetValue()){
		id = m_list_Bibliotecarios->GetNextItem(-1,wxLIST_NEXT_ALL, wxLIST_STATE_SELECTED);
		
		if(id != -1){
			if(id >= 0 and id <= vBibliotecario.size()){
				Dialogo_Eliminar *nueva= new Dialogo_Eliminar(this,id,sistema,sistema->bibliotecarios(),4,vBibliotecario[id].VerNombre());
				if (nueva->ShowModal() == wxID_OK){
					CargarListaBibliotecario(m_list_Bibliotecarios);
				}
			}
		}
	}
} 

void VentanaParaAlumno::OnButtonClickDevolucionLibro( wxCommandEvent& event )  {
	long id = m_list_Alumnos->GetNextItem(-1,wxLIST_NEXT_ALL, wxLIST_STATE_SELECTED);
	if(id != -1){
		if(id >= 0 and id <= vAlumno.size()){
			
			DialogoPrestamo *nueva= new DialogoPrestamo(this,vAlumno[id]);
			nueva->ShowModal();
		}
	}
}

