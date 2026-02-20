#include "VentanaParaAlumno.h"
#include "DialogoPrestamo.h"
#include "DialogoHistorial.h"
#include "DialogoAgregar.h"
#include "Dialogo_Eliminar.h"


using namespace std;

VentanaParaAlumno::VentanaParaAlumno(wxWindow *parent) : MyFrameInicioCorrectoAlumno(parent) {
	///Para crear columnas a la Tabla, en diseñador no encontre opcion
	
	
	///LIBRO
	
	m_list_InfoLibros->InsertColumn(0, "ID", wxLIST_FORMAT_LEFT, 50);
	m_list_InfoLibros->InsertColumn(1, "Nombre", wxLIST_FORMAT_LEFT, 200);
	m_list_InfoLibros->InsertColumn(2, "Estado", wxLIST_FORMAT_LEFT, 100);
	
	m_list_InfoLibros->SetSingleStyle(wxLC_HRULES); // Líneas horizontales
	m_list_InfoLibros->SetSingleStyle(wxLC_VRULES); // Líneas verticaless
	
	///Etiquetas
	
	m_list_Etiquetas->InsertColumn(0, "ID", wxLIST_FORMAT_LEFT, 50);
	m_list_Etiquetas->InsertColumn(1, "Nombre", wxLIST_FORMAT_LEFT, 200);
	m_list_Etiquetas->InsertColumn(2, "Renovar", wxLIST_FORMAT_LEFT, 200);
	
	m_list_Etiquetas->SetSingleStyle(wxLC_HRULES); // Líneas horizontales
	m_list_Etiquetas->SetSingleStyle(wxLC_VRULES); // Líneas verticaless
	
	
	///AlUMNO
	m_list_Alumnos->InsertColumn(0, "ID", wxLIST_FORMAT_LEFT, 50);
	m_list_Alumnos->InsertColumn(1, "Nombre", wxLIST_FORMAT_LEFT, 200);
	m_list_Alumnos->InsertColumn(2, "Estado", wxLIST_FORMAT_LEFT, 100);
	
	
	m_list_Alumnos->SetSingleStyle(wxLC_HRULES); // Líneas horizontales
	m_list_Alumnos->SetSingleStyle(wxLC_VRULES); // Líneas verticaless
	
	///BIBLIOTECARIO
	m_list_Bibliotecarios->InsertColumn(0, "ID", wxLIST_FORMAT_LEFT, 50);
	m_list_Bibliotecarios->InsertColumn(1, "Nombre", wxLIST_FORMAT_LEFT, 200);
	m_list_Bibliotecarios->InsertColumn(2, "DNI", wxLIST_FORMAT_LEFT, 100);
	
	m_list_Bibliotecarios->SetSingleStyle(wxLC_HRULES); // Líneas horizontales
	m_list_Bibliotecarios->SetSingleStyle(wxLC_VRULES); // Líneas verticaless
	
}


VentanaParaAlumno::~VentanaParaAlumno() {	
}
void VentanaParaAlumno::CargarListaAlumnos(wxListCtrl* lista){
	//Limpiamos la tabla
	lista->DeleteAllItems();
	
	//
	lista->Freeze();
	vAlumno = sistema.VerContenido<Alumno>(sistema.pathAlumnos(),true);
	for(int i=0;i<vAlumno.size();i++) { 
		///Llenamos con ID
		long index = lista -> InsertItem(i, wxString::Format("%d",vAlumno[i].VerID()));
		
		///CargarNombreDelAlumno
		
		lista-> SetItem(index, 1, vAlumno[i].VerNombre() );
		
		///CargamosDni
		lista-> SetItem(index,2, wxString::Format("%d", vAlumno[i].VerDNI()) );		
	}
	///Mostrar todo de golpe
	lista->Thaw();	
}


void VentanaParaAlumno::CargarListaBibliotecario(wxListCtrl* lista){
	//Limpiamos la tabla
	lista->DeleteAllItems();
	
	//
	lista->Freeze();
	vBibliotecario = sistema.VerContenido<Bibliotecario>(sistema.pathBibliotecarios(),true);
	for(int i=0;i<vBibliotecario.size();i++) { 
		///Llenamos con ID
		long index = lista -> InsertItem(i, wxString::Format("%d",vBibliotecario[i].VerID()));
		
		///CargarNombreDelAlumno
		
		lista-> SetItem(index, 1, vBibliotecario[i].VerNombre() );
		
		///CargamosDni
		lista-> SetItem(index,2, wxString::Format("%d", vBibliotecario[i].VerDNI()) );		
	}
	///Mostrar todo de golpe
	lista->Thaw();
	
}
void VentanaParaAlumno::CargarListaInfoLibros(wxListCtrl* lista){
	//Limpiamos la tabla
	lista->DeleteAllItems();
	
	//
	lista->Freeze();
	vLibros = sistema.VerContenido<Libro>(sistema.pathLibros(),true);
	for(int i=0;i<vLibros.size();i++) { 
		///Llenamos con ID
		long index = lista -> InsertItem(i, wxString::Format("%d",vLibros[i].VerID()));
		
		///CargarNombreDelAlumno
		
		lista-> SetItem(index, 1, vLibros[i].VerNombre() );
	
		lista-> SetItem(index,2, wxString::Format("%d", vLibros[i].EstadoDisponibilidad()) );		
	}
	///Mostrar todo de golpe
	lista->Thaw();
	
}
void VentanaParaAlumno::CargarListaEtiquetas(wxListCtrl* lista){
	//Limpiamos la tabla
	lista->DeleteAllItems();
	//¿¿
	lista->Freeze();
	tagsActuales = sistema.VerContenido<Tags>(allTags.VerPathEtiquetas(),true);
	for(int i=0;i<tagsActuales.size();i++) { 
		
		/// ID
		long index = lista -> InsertItem(i, wxString::Format("%d",tagsActuales[i].IdTag));
		///Nombre	
		lista-> SetItem(index, 1, tagsActuales[i].NombreTag );
		
		lista-> SetItem(index,2, wxString::Format("%d",tagsActuales[i].Existencia()) );			
		
	}
	///Mostrar todo de golpe
	lista->Thaw();
	
}

void VentanaParaAlumno::OnRadioButton_CambiaPestana(wxCommandEvent& event){
	if(m_radio_Libros->GetValue()){
		m_Bibliotecario_frameActual->SetSelection(0);
	}
	if(m_radio_InfoLibros->GetValue()){
		m_Bibliotecario_frameActual->SetSelection(1);
		CargarListaInfoLibros(m_list_InfoLibros);
	}
	if(m_radio_Etiquetas->GetValue()){
		m_Bibliotecario_frameActual->SetSelection(2);
		CargarListaEtiquetas(m_list_Etiquetas);
	}
	else if(m_radio_Alumnos->GetValue()){
		m_Bibliotecario_frameActual->SetSelection(3);
		CargarListaAlumnos(m_list_Alumnos);
	}				
	else if(m_radio_Bibliotecarios->GetValue()){
		m_Bibliotecario_frameActual->SetSelection(4);
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
	DialogoAgregar *nueva= new DialogoAgregar(this,&sistema,sistema.VerPathEtiquetas());
	if (nueva->ShowModal() == wxID_OK){
		CargarListaEtiquetas(m_list_Etiquetas);
	}
	
}


void VentanaParaAlumno::OnButtonClickEliminar( wxCommandEvent& event )  {
	long id = m_list_Etiquetas->GetNextItem(-1,wxLIST_NEXT_ALL, wxLIST_STATE_SELECTED);
	if(id != -1){
		if(id >= 0 and id <= tagsActuales.size()){
			Dialogo_Eliminar *nueva= new Dialogo_Eliminar(this,id,sistema.VerPathEtiquetas(),1,tagsActuales[id].NombreTag);
			if (nueva->ShowModal() == wxID_OK){
				CargarListaEtiquetas(m_list_Etiquetas);
			}
		}
	}
}

