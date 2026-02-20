#ifndef HISTORIAL_H
#define HISTORIAL_H
#include "../preConfiguracion/preConfiguracion.h"

#include "../libro/libro.h"
#include "../alumno/alumno.h"
#include "../system/system.h"

//prestados.bin ->registro de los prestamos

struct RegistroPrestamo {
	int dniAlumno; 
	size_t idLibro;
	char fechaPrestamo[20];
	char fechaDevolucion[20]; // La fecha límite que le ponemos al alumno o sino sancion 
	bool devuelto;            // false = Lo tiene el alumno, true = Ya lo devolvió
};

class Historial{
    System sistema;  
    int IdUsuario; //puede ser alumno o bibliotecario
    bool ingreso;
    public:
        Historial(int x){
        this->ingreso=false; 
		IdUsuario=x;
        }
		bool AgregarNuevoRegistro(int IdBibliotecario);//trabajo del bibliotecario
        
		bool EliminarRegistro(int IdRegistro);
		template<typename S>
		bool Verificar_Existencia_Binario(int Id,string nombreArchivo);
		template<typename S>
        void Ver_Registro(int actual,vector<S>& v,string nombreArchivo);

};
#endif
