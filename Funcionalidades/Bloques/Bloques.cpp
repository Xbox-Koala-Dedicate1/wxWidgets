#include "Bloques.h"
#include "../system/system.h"
#include "../login/login.h"


#include <vector>
#include <cstring>
using namespace std;

Bloques::Bloques(){
	actual.CargarDatos();
	UltimaDireccion= actual.VerUltimaDireccion();
	CantidadTags = actual.VerCantidadTags();
	cout<<"Construido con: "<<endl<<
		"UltimaDireccion: "<<UltimaDireccion<<endl<<
		"CantidadTags: "<<CantidadTags;
}

Bloques::~Bloques(){
	if (modificacion) { 
		actual.AsignarUltimaDireccion(UltimaDireccion);
		actual.AsignarCantidadTags(CantidadTags);
		actual.GuardarCambios();
	}}


	Bloque Bloques::VerContenido(string nombreArchivo,size_t NroBloque){
		ifstream archi(nombreArchivo,ios::binary);
		if(!archi)
			throw runtime_error("Error al Recuperar de " + nombreArchivo);
		
		Bloque aux;
		archi.seekg(sizeof(Bloque)*NroBloque);
		archi.read(reinterpret_cast<char*>(&(aux)),sizeof(aux));
		archi.close();
		return aux;
	}
	bool Bloques::Guardar(string nombreArhivo, Bloque &A_Guardar, size_t Pos)
	{
		fstream archi(nombreArhivo, ios::binary | ios::in | ios::out);
		
		if (!archi) {
			ofstream crear(nombreArhivo, ios::binary);
			/*crear.close();*/
			archi.open(nombreArhivo, ios::binary | ios::in | ios::out);
			
		}
		
		if (!archi){
			cerr<<"Error al guardar en " + nombreArhivo;
			return false;
		}
		archi.seekp(sizeof(Bloque) * Pos);
		archi.write(reinterpret_cast<const char *>(&(A_Guardar)), sizeof(Bloque));
		archi.close();
		return true;
	}
	
	
Tags Bloques::AgregarNuevoTag(string Nombre){
	modificacion = true;
	
	
	Tags nuevoTag;
	nuevoTag.IdTag = CantidadTags;
	++CantidadTags;
//	nuevoTag.existe=true;
	
	strncpy(nuevoTag.NombreTag, Nombre.c_str(), 49);
	nuevoTag.NombreTag[49] = '\0';
	//nuevoTag.InicioBloque = UltimaDireccion;
	UltimaDireccion += TamBloque;
	///Asignar Bloque
	Bloque bloqueNuevo;
	bloqueNuevo.CantidadElementos=0;
	bloqueNuevo.SiguienteBloque=0;
	Guardar(allTags_data,bloqueNuevo,nuevoTag.IdTag);
	return nuevoTag;
	
}

size_t Bloques::AgregarNuevoBloque(){
	modificacion = true;
	
	UltimaDireccion += TamBloque;

	Bloque bloqueNuevo;
	bloqueNuevo.CantidadElementos=0;
	bloqueNuevo.SiguienteBloque=-1;
	return UltimaDireccion;
}
	

bool Bloques::AgregarNuevoElemento(size_t IdTag, size_t idLibro){
	modificacion = true;
	
	Bloque aux = VerContenido(allTags_data,IdTag);
	

	aux.Elementos[aux.CantidadElementos]=idLibro;
	++aux.CantidadElementos;
	cout<<endl<<"Nueva cantidad de elementos: "<<aux.CantidadElementos;
	
	Guardar(allTags_data,aux,IdTag);
	
	return true;
}
vector<size_t> Bloques::LeerTodosLosElementos(size_t IdTag){
	Bloque aux = VerContenido(allTags_data,IdTag);
	vector<size_t> resultado;
	bool parar = false;
	while(!parar){
	
		for(size_t i = 0; i < aux.CantidadElementos; ++i){
			resultado.push_back(aux.Elementos[i]);
		}
		
		if(aux.SiguienteBloque!= 0){
			aux = VerContenido(allTags_data,aux.SiguienteBloque);
		}else{parar = true;}
	}
	return resultado;
}
