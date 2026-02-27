#include "Historial.h"
#include <cstdlib>
#include <vector>
#include "../system/system.h"
using namespace std;

vector<Registro>Historial:: Mostrar_Historial(size_t id_usuario, string nombreArchivo){
	System sistema;
	
	vector<Registro>vectorRegistro = sistema.VerContenido<Registro>(sistema.alumnos(),true);
	vector<Registro>r;
	Registro a;
	for(Registro& a:vectorRegistro )
	{
		if(a.id_usuario == id_usuario)
		{
			r.push_back(a);
		}
	}
	
	return r;
}
vector<Registro>Historial:: Mostrar_Historial_libro(size_t id_libro, string nombreArchivo){
	ifstream archi(nombreArchivo,ios::binary);
	if(!archi.is_open()){
		throw runtime_error("No se pudo abrir el archivo "+nombreArchivo);
	}
	
	vector<Registro>resultado;
	Registro a;
	while(archi.read(reinterpret_cast<char*>(&a), sizeof(Registro)))
	{
		if(a.id_libro == id_libro)
		{
			resultado.push_back(a);
		}
	}
	
	archi.close();
	return resultado;
}
// Cambia TODA la función Cargar_Historial por esta:
void Historial::Cargar_Historial(size_t idLibro, size_t idAlumno, string nom_usu, string nom_lib, int dia_dev, int mes_dev, int anio_dev, int dia_pres, int mes_pres, int anio_pres, string nombreArchivo ){
	Registro a;
	a.id_usuario=idAlumno; 
	a.id_libro=idLibro;
	
	strncpy(a.nombre_usuario,nom_usu.c_str(),48);
	a.nombre_usuario[48] = '\0';
	
	strncpy(a.nombre_libro,nom_lib.c_str(),49);
	a.nombre_libro[49] = '\0';
	
	a.dia = dia_dev; a.mes = mes_dev; a.anio = anio_dev;
	
	// Guardamos la fecha de inicio
	a.dia_prestamo = dia_pres; 
	a.mes_prestamo = mes_pres; 
	a.anio_prestamo = anio_pres;
	
	System sistema;
	// CORRECCIÓN DEL BUG: Usamos AlUltimo para que no te borre el historial anterior
	sistema.AlUltimo(nombreArchivo, a); 
}

 
