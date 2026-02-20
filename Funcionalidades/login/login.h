#ifndef LOGIN_H
#define LOGIN_H
#include "../preConfiguracion/preConfiguracion.h"
#include "../bibliotecario/bibliotecario.h"
#include "../alumno/alumno.h"

class System; 

// Declara las funciones, pero no las variables globales
int BuscarDniEnBibliotecarios(int dni, vector<Bibliotecario>& v);
int BuscarDniEnAlumnos(int dni, vector<Alumno>& v);
Bibliotecario ObjetoCorrespondienteBibliotecario(int posBibliotecario, vector<Bibliotecario>& v);
Alumno ObjetoCorrespondienteAlumno(int posAlumno, vector<Alumno>& v);

#endif
