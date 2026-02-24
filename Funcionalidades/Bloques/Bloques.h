#ifndef TAGS_H
#define TAGS_H
#include <iostream>
#include <cstring>
#include <vector>
#include "../persistencia/Persistencia.h"
using namespace std;
struct Tags{
	size_t IdTag;
	size_t VerID()const {return IdTag;}
	char NombreTag[50];
//	size_t InicioBloque;
	bool existe;
	void Existe(){existe = true;}
	void NoExiste(){existe = false;}
	bool Existencia(){return existe;}
};

struct Bloque{
	int CantidadElementos=0;
	int SiguienteBloque=0;
	int Elementos[1022];
};
class System;

class Bloques {
	System *sistema;
	size_t TamBloque= sizeof(Bloque);
	size_t UltimaDireccion = 0;
	size_t CantidadTags=0;
	string allTags_data= "./Recursos/Binarios/Tags/tags_data.bin";
	string allTags= "./Recursos/Binarios/Tags/tags.bin";
	Persistencia actual;
	bool modificacion = false;
public:
	Bloques();
	~Bloques();
	bool Guardar(string nombreArhivo, Bloque &A_Guardar, size_t Pos);
	Bloque VerContenido(string nombreArchivo,size_t NroBloque);
	Tags AgregarNuevoTag(string Nombre);
	size_t AgregarNuevoBloque();
	vector<size_t>LeerTodosLosElementos(size_t IdTag);
	bool AgregarNuevoElemento(size_t IdTag, size_t idLibro);
	string VerPathEtiquetas(){return allTags;}
	size_t CantTags(){return CantidadTags;}

};

#endif

