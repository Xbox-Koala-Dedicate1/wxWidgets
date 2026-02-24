#include "DialogoHistorial.h"
using namespace std;
DialogoHistorial::DialogoHistorial(wxWindow *parent, Alumno alumnoSeleccionado) : MyDialogHistorial(parent) {
	this-> alumnoSeleccionado = alumnoSeleccionado;
	
	m_staticPrestar_NombreAlumno_Valor->SetLabel(alumnoSeleccionado.VerNombre());
	m_staticPrestar_DniAlumno_Valor->SetLabel(to_string(alumnoSeleccionado.VerDNI()));
	
	
	
	
	///PrestamosAnteriores
	m_list_PrestamosAnteriores->InsertColumn(0, "ID", wxLIST_FORMAT_LEFT, 50);
	m_list_PrestamosAnteriores->InsertColumn(1, "Libro", wxLIST_FORMAT_LEFT, 200);
	
	m_list_PrestamosAnteriores->SetSingleStyle(wxLC_HRULES); // Líneas horizontales
	m_list_PrestamosAnteriores->SetSingleStyle(wxLC_VRULES); // Líneas verticaless
	CargarLista(m_list_PrestamosAnteriores);
}

DialogoHistorial::~DialogoHistorial() {
	
}

void DialogoHistorial::CargarLista(wxListCtrl* lista){
	//Limpiamos la tabla
	lista->DeleteAllItems();
	
	//
	lista->Freeze();
	
	string test = "EjemploNombreAlumno";
	int dni = 3242352; 
	for(int i=0;i<100;i++) { 
		///Llenamos con ID
		long index = lista -> InsertItem(i, wxString::Format("%d",((i+1)*2)));
		
		///CargarNombreDelAlumno
		lista-> SetItem(index, 1, test );
	}
	///Mostrar todo de golpe
	lista->Thaw();
	
}

