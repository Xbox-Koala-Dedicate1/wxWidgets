#ifndef DIALOGOPRESTAMO_H
#define DIALOGOPRESTAMO_H

#include "Ventanas.h" // Archivo base generado por wxFormBuilder
#include "Funcionalidades/alumno/alumno.h"
#include "Funcionalidades/libro/libro.h"
#include "Funcionalidades/Historial/Historial.h"
#include <vector>

class DialogoPrestamo : public DialogoPrestamoBase { // Ajusta el nombre de la clase base si difiere
private:
	Alumno alumnoActual;
	std::vector<Libro> librosDisponibles; // Almacena temporalmente los libros mostrados en pantalla
	Libro libroSeleccionado;
	
public:
	// Modificamos el constructor para recibir el alumno seleccionado previamente
	DialogoPrestamo(wxWindow* parent, const Alumno& alumno);
	
protected:
	// Métodos virtuales generados por wxFormBuilder que debes sobreescribir
	void OnBuscarLibroTextoCambia(wxCommandEvent& event) override;
	void OnConfirmarPrestamoClick(wxCommandEvent& event) override;
	
	// Método de ayuda
	void RefrescarListaLibros(const wxString& filtroTexto = "");
};

#endif

