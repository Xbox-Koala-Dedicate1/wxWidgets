#ifndef VENTANAPARABIBLIOTECARIO_H
#define VENTANAPARABIBLIOTECARIO_H
#include "wxfb_project.h"
#include "Funcionalidades/alumno/alumno.h"
#include "Funcionalidades/system/system.h"
#include "Funcionalidades/bibliotecario/bibliotecario.h"
#include "Funcionalidades/buscador/buscador.h"
#include <vector>
#include "ProyBaseBibliotecario.h"
using namespace std;


class VentanaParaBibliotecario : public MyFrameInicioCorrectoBibliotecario {
	
private:
	System *sistema; Buscador navega;
	vector<Alumno> vAlumno; vector<Bibliotecario> vBibliotecario;
	vector<Libro> vLibro;
	
	vector<Bibliotecario>vResultadoBibliotecario;
	vector<Alumno>vResultadoAlumno;
//	vector<Libro>vResultadoLibro;
	
protected:
	void onclickbutton_eliminar( wxCommandEvent& event )  override;
	void Onclick_Boton_Buscar_Frase( wxCommandEvent& event )  override;
	void OnButtonClickPrestarLibro( wxCommandEvent& event )  override;
	void OnButtonClickHistorialAlumno( wxCommandEvent& event )  override;
	void OnRadioButton_CambiaPestana(wxCommandEvent& event);
	void CargarListaAlumnos(wxListCtrl* lista);
	void CargarListaBibliotecario(wxListCtrl* lista);
	void MuestraListaResultadoBibliotecario(wxListCtrl* lista);
	void MuestraListaResultadoAlumno(wxListCtrl* lista);
	void MuestraListaResultadoLibro(wxListCtrl* lista);
public:
	VentanaParaBibliotecario(wxWindow *parent=NULL);
	~VentanaParaBibliotecario();
	
	
};

#endif

