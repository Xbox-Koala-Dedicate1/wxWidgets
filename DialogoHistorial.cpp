#include "DialogoHistorial.h"
#include <wx/msgdlg.h>
using namespace std;
DialogoHistorial::DialogoHistorial(wxWindow *parent, Libro& libroSeleccionado) : MyDialogHistorial(parent) {
	this-> libroSeleccionado = libroSeleccionado;
	
	m_staticPrestar_NombreAlumno_Valor->SetLabel(libroSeleccionado.VerNombre());
	m_staticPrestar_DniAlumno_Valor->SetLabel(to_string(libroSeleccionado.VerID()));
	
	
	
	
	///PrestamosAnteriores
	m_list_PrestamosAnteriores->InsertColumn(0, "ID", wxLIST_FORMAT_LEFT, 50);
	m_list_PrestamosAnteriores->InsertColumn(1, "Lector", wxLIST_FORMAT_LEFT, 200);
	m_list_PrestamosAnteriores->InsertColumn(2, "Fecha", wxLIST_FORMAT_LEFT, 200);
	
	m_list_PrestamosAnteriores->SetSingleStyle(wxLC_HRULES); // Líneas horizontales
	m_list_PrestamosAnteriores->SetSingleStyle(wxLC_VRULES); // Líneas verticaless
	CargarListaLibro(m_list_PrestamosAnteriores);
}
DialogoHistorial::DialogoHistorial(wxWindow *parent, Alumno& alumnoSeleccionado) : MyDialogHistorial(parent) {
	this-> alumnoSeleccionado = alumnoSeleccionado;
	
	m_staticPrestar_NombreAlumno_Valor->SetLabel(alumnoSeleccionado.VerNombre());
	m_staticPrestar_DniAlumno_Valor->SetLabel(to_string(alumnoSeleccionado.VerDNI()));
	
	
	
	
	///PrestamosAnteriores
	m_list_PrestamosAnteriores->InsertColumn(0, "ID", wxLIST_FORMAT_LEFT, 50);
	m_list_PrestamosAnteriores->InsertColumn(1, "Libro", wxLIST_FORMAT_LEFT, 200);
	m_list_PrestamosAnteriores->InsertColumn(2, "Fecha", wxLIST_FORMAT_LEFT, 200);
	
	m_list_PrestamosAnteriores->SetSingleStyle(wxLC_HRULES); // Líneas horizontales
	m_list_PrestamosAnteriores->SetSingleStyle(wxLC_VRULES); // Líneas verticaless
	CargarListaUsuario(m_list_PrestamosAnteriores);
}

DialogoHistorial::~DialogoHistorial() {
	
}

void DialogoHistorial::CargarListaLibro(wxListCtrl* lista){
	lista->DeleteAllItems();
	lista->Freeze();
	
	Historial h;
	vector<Registro>Ver_historial;
	Ver_historial = h.Mostrar_Historial(libroSeleccionado.VerID());
	if(Ver_historial.size()==0){
		wxMessageBox("No ha tenido lectores aun","Error",wxOK|wxICON_INFORMATION);
		return;
	}else{
		for(size_t i = 0; i < Ver_historial.size(); i++){
			long index = lista->InsertItem(i,wxString::Format("%d", Ver_historial[i].id_usuario));
			
			lista->SetItem(index, 1,wxString(Ver_historial[i].nombre_usuario));
			
			lista->SetItem(index, 2,wxString::Format("%d",Ver_historial[i].dia,"%d",Ver_historial[i].mes,"%d",Ver_historial[i].anio));
			
		}
	}
	lista->Thaw();
}
void DialogoHistorial::CargarListaUsuario(wxListCtrl* lista){
	lista->DeleteAllItems();
	lista->Freeze();
	
	Historial h;
	vector<Registro>Ver_historial;
	Ver_historial = h.Mostrar_Historial(alumnoSeleccionado.VerID());
	if(Ver_historial.size()==0){
		wxMessageBox("No ha tenido lecturas aun","Error",wxOK|wxICON_INFORMATION);
		return;
	}else{
		for(size_t i = 0; i < Ver_historial.size(); i++){
			long index = lista->InsertItem(i,wxString::Format("%d", Ver_historial[i].id_libro));
			
			lista->SetItem(index, 1,wxString(Ver_historial[i].nombre_libro));
			lista->SetItem(index, 2,wxString::Format("%d",Ver_historial[i].dia,"%d",Ver_historial[i].mes,"%d",Ver_historial[i].anio));
		}
	}
	lista->Thaw();
}

