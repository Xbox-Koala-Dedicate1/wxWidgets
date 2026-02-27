#ifndef HISTORIAL_H
#define HISTORIAL_H

#include <vector>
#include <string>
#include <fstream>
#include <cstring>
using namespace std;

struct Registro{
	size_t id_libro, id_usuario;
	char nombre_usuario[49], nombre_libro[50];
	int anio, mes, dia; // Estas son las fechas límite de devolución
	
	// NUEVAS VARIABLES: Fecha en la que inició el préstamo
	int anio_prestamo, mes_prestamo, dia_prestamo; 
};

class Historial{
public:
	Historial(){}
	vector<Registro> Mostrar_Historial(size_t id_usuario,string nombreArchivo="Recursos/Binarios/Historial.bin");
	vector<Registro> Mostrar_Historial_libro(size_t id_libro,string nombreArchivo="Recursos/Binarios/Historial.bin");
	
	// ACTUALIZADO: Le agregamos los parámetros de inicio (dia_pres, mes_pres, anio_pres)
	void Cargar_Historial(size_t idLibro, size_t idAlumno, string nom_usu, string nom_lib, int dia_dev, int mes_dev, int anio_dev, int dia_pres = 0, int mes_pres = 0, int anio_pres = 0, string nombreArchivo="Recursos/Binarios/Historial.bin" );

};

#endif
