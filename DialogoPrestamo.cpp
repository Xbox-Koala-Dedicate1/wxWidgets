#include "DialogoPrestamo.h"
#include <wx/msgdlg.h>
#include <wx/variant.h>

// IMPORTANTE: Aquí llamamos a MyDialogPrestamo (tu ventana real)
DialogoPrestamo::DialogoPrestamo(wxWindow *parent, Alumno alumnoSeleccionado)
	: MyDialogPrestamo(parent), alumnoSeleccionado(alumnoSeleccionado) 
{
	// 1. Mostrar datos del alumno en los textos estáticos
	m_staticPrestar_NombreAlumno_Valor->SetLabel(wxString(this->alumnoSeleccionado.VerNombre()));
	m_staticPrestar_DniAlumno_Valor->SetLabel(wxString::Format("%d", this->alumnoSeleccionado.VerDNI()));
	
	// 2. Configurar Grilla (m_gridHistorial)
	if(m_gridHistorial->GetNumberCols() == 0) {
		m_gridHistorial->AppendCols(5);
		m_gridHistorial->SetColLabelValue(0, "ID");
		m_gridHistorial->SetColLabelValue(1, "Nombre Libro");
		m_gridHistorial->SetColLabelValue(2, "Fecha Préstamo");
		m_gridHistorial->SetColLabelValue(3, "Fecha Devolución");
		m_gridHistorial->SetColLabelValue(4, "Fecha Devuelto Alumno");
		
		m_gridHistorial->SetColSize(1, 200);
		m_gridHistorial->SetColSize(2, 120);
		m_gridHistorial->SetColSize(3, 120);
		m_gridHistorial->SetColSize(4, 150);
	}
	
	// 3. Configurar Lista de Resultados (m_listaResultadosLibros)
	m_listaResultadosLibros->AppendTextColumn("ID", wxDATAVIEW_CELL_INERT, 50);
	m_listaResultadosLibros->AppendTextColumn("Título", wxDATAVIEW_CELL_INERT, 250);
	m_listaResultadosLibros->AppendTextColumn("Disponible", wxDATAVIEW_CELL_INERT, 80);
	
	// 4. Vincular eventos manualmente a tus controles
	m_txtBuscarLibro->Bind(wxEVT_TEXT, &DialogoPrestamo::OnBuscarLibro, this);
	m_btnConfirmar->Bind(wxEVT_BUTTON, &DialogoPrestamo::OnConfirmarPrestamoClick, this);
	
	// Dejamos la grilla vacía por ahora
	CargarHistorialEnGrilla();
}

DialogoPrestamo::~DialogoPrestamo() {}

void DialogoPrestamo::CargarHistorialEnGrilla() {
	if (m_gridHistorial->GetNumberRows() > 0) {
		m_gridHistorial->DeleteRows(0, m_gridHistorial->GetNumberRows());
	}
	// Acá luego conectaremos con el archivo Historial.bin
}

void DialogoPrestamo::OnBuscarLibro(wxCommandEvent& event) {
	wxString textoBusqueda = m_txtBuscarLibro->GetValue().Lower();
	
	m_listaResultadosLibros->DeleteAllItems(); 
	m_librosEncontrados.clear();
	
	if (textoBusqueda.IsEmpty()) return;
	
	// ¡ACÁ ESTÁ LA CORRECCIÓN DE LOS 3 PARÁMETROS!
	std::vector<Libro> todosLosLibros;
	todosLosLibros.push_back(Libro(1, "El Quijote", "Cervantes"));
	todosLosLibros.push_back(Libro(2, "Calculo I - Stewart", "James Stewart"));
	
	for (Libro& libro : todosLosLibros) {
		wxString titulo = wxString(libro.VerNombre()).Lower();
		
		if (titulo.Contains(textoBusqueda)) {
			m_librosEncontrados.push_back(libro);
			
			wxVector<wxVariant> fila;
			fila.push_back(wxVariant(wxString::Format("%d", libro.VerID())));
			fila.push_back(wxVariant(wxString(libro.VerNombre())));
			fila.push_back(wxVariant(libro.EstadoDisponibilidad() ? "Sí" : "No"));
			
			m_listaResultadosLibros->AppendItem(fila);
		}
	}
}

void DialogoPrestamo::OnConfirmarPrestamoClick(wxCommandEvent& event) {
	int seleccionIndex = m_listaResultadosLibros->GetSelectedRow();
	
	if (seleccionIndex == wxNOT_FOUND) {
		wxMessageBox("Por favor selecciona un libro de la lista.", "Aviso");
		return;
	}
	
	Libro libroAPrestar = m_librosEncontrados[seleccionIndex];
	wxString msj = wxString::Format("¿Confirmar préstamo de '%s'?", wxString(libroAPrestar.VerNombre()));
	
	if (wxMessageBox(msj, "Confirmar", wxYES_NO) == wxYES) {
		wxMessageBox("¡El código funciona! Falta guardar en binario.");
	}
}
