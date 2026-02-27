#ifndef SYSTEM_H  // 1. Si no est? definido PERSONA_H
#define SYSTEM_H
#include "../preConfiguracion/preConfiguracion.h"

#include <fstream>
#include <cstring>
class Libro;
class Alumno;
class Bibliotecario;
class Bloque;

using namespace std;
//template<typename K>

struct Cabecera{
	char nombre[50], path[50];
};
struct Libros_en_Prestamo
{
	size_t id_Libro, id_Prestamo, id_Alumno;
	size_t dia_Devolucion, mes_Devolucion, anio_Devolucion;
	size_t dia_Prestamo, mes_Prestamo, anio_Prestamo; // <-- Tienen que estar aquí
};

struct Tags;
struct Bloque;
class System{
	string pathalumnos ="Recursos/Binarios/alumnos.bin";
	string pathprestamos ="Recursos/Binarios/LibrosPrestamosActivos.bin";
	string pathlibros = "Recursos/Binarios/libros.bin";
	string pathreservar = "Recursos/Binarios/reservar.bin";
	string pathbibliotecarios = "Recursos/Binarios/bibliotecarios.bin";
	string pathetiquetas = "Recursos/Binarios/Tags/Tags.bin";
	
	
	string pathLibroNotFount ="Recursos/img/not_found.jpg";
public:
	System(){};
	template<typename T>
	bool Guardar(string nombreArhivo, vector<T> &A_Guardar, bool sobreEscribir=false);
	
	bool Guardar(string nombreArhivo, Bloque &A_Guardar, size_t Pos);
	//Falta codear Eliminar, tempalte
	template<typename T>
	bool Eliminar(size_t id, vector<T>&v);
	vector<Tags> etiquetas(const string& path);
	bool actualizar_disponibilidad( string nombreArchivo, int id);
	
	/// Cambiar a solo leer N cosas
	template <typename T>
	int VerUltimo(string nombreArchivo);
	template <typename T> 
	vector<T> VerContenido(string nombreArchivo, bool crear);
	Bloque VerContenido(string nombreArchivo,size_t NroBloque);
	template <typename T>
	vector<T> LeerDelBin(vector<size_t> &IdARecuperar, string nombreArchivo);
	template <typename T>
	bool EscribirEnBin(vector<size_t> &IdARecuperar, vector<T>&elementos, string nombreArchivo);
	string alumnos(){return pathalumnos;}
	string libros(){return pathlibros;}
	string noLibroImg(){return pathLibroNotFount;}
	string reservar(){return pathreservar;}
	string bibliotecarios(){return pathbibliotecarios;}
	string etiquetas(){return pathetiquetas;}
	
	template<typename S>
		int Verificar_Existencia_Vector(int dni, vector<S>&v);
	template<typename S>
	bool Verificar_Existencia_Binario(int Id,string nombreArchivo);
	
	///Cabeceras para libros
	vector<Cabecera> CargarDesdeTxt(string nombreArchivo);
	
	template<typename T>
	bool AlUltimo(string nombreArchivo, T elemento);
	
};

#include "../libro/libro.h"
#include "../alumno/alumno.h"
#include "../bibliotecario/bibliotecario.h"
#include "../Bloques/Bloques.h"





template <typename T>  ///Cambiar a Guardar al final
bool System::Guardar(string nombreArhivo, vector<T> &A_Guardar, bool sobreEscribir)
{
	ofstream archi;
	if(sobreEscribir){
		archi.open(nombreArhivo, ios::binary);
	}else{
		archi.open(nombreArhivo, ios::binary|ios::app);
	}
	if (!archi){
		cerr<<"Error al guardar en " + nombreArhivo;
		return false;
	}
	
	for (size_t i = 0; i < A_Guardar.size(); ++i)
	{
		//cout<<endl<<"En guardar :"<<aux.VerNombre()<<endl;
		archi.write(reinterpret_cast<const char *>(&(A_Guardar[i])), sizeof(A_Guardar[i]));
	}
	archi.close();
	return true;
}



template <typename T>
bool System::Eliminar(size_t id, vector<T>&v){
	typename vector<T>::iterator itBorrar = find_if(v.begin(),v.end(),[id](const T& a){
		return a.VerID() == id;
	});
	if(itBorrar!=v.end()){
		itBorrar->NoExiste();
		return true;//borrado
	}else{
		return false;//no se encontro xD
	}
}

template <typename T> ///Cambiar a solo leer N cosas
vector<T> System::VerContenido(string nombreArchivo,bool crear){
	ifstream archi(nombreArchivo,ios::binary);
	if(crear){
		//nada
	}
	else{
		if(!archi)
			throw runtime_error("Error al Recuperar de " + nombreArchivo);
	}
	vector<T>Resultado;
	T aux;
	while(archi.read(reinterpret_cast<char*>(&(aux)),sizeof(aux))){
		Resultado.push_back(aux);
	}
	archi.close();
	return Resultado;
}




template <typename T>
vector<T> System::LeerDelBin(vector<size_t> &IdARecuperar, string nombreArchivo)
{  
	vector<T> resultado;
	int ultimo = VerUltimo<T>(nombreArchivo);
	
	if (ultimo < 0 || IdARecuperar.empty()) return resultado;
	
	ifstream archi(nombreArchivo, ios::binary);
	if (!archi)
		throw runtime_error("Error al Recuperar de " + nombreArchivo);
	
	T aux;
	for (size_t i = 0; i < IdARecuperar.size(); ++i)
	{
		// size_t siempre es >= 0. Comparamos con ultimo de forma segura.
		if (IdARecuperar[i] <= static_cast<size_t>(ultimo)) {
			archi.seekg(IdARecuperar[i] * sizeof(T)); 
			archi.read(reinterpret_cast<char*>(&aux), sizeof(T));
			resultado.push_back(aux);
		}
	}
	archi.close();
	return resultado;
}

template <typename T>
bool System::EscribirEnBin(vector<size_t> &IdARecuperar, vector<T>& elementos, string nombreArchivo)
{ 
	if (IdARecuperar.empty() || IdARecuperar.size() != elementos.size()) return false;
	
	ofstream archi(nombreArchivo, ios::binary | ios::in | ios::out);
	if (!archi) return false;
	
	for (size_t i = 0; i < IdARecuperar.size(); ++i)
	{
		archi.seekp(IdARecuperar[i] * sizeof(T)); 
		archi.write(reinterpret_cast<const char *>(&elementos[i]), sizeof(T));
		
	} 
	archi.close();  
	return true;	
}
template<typename T>
int System::VerUltimo(string nombreArchivo){
	
	ifstream archi(nombreArchivo,ios::binary|ios::ate);
	if(archi.tellg()<=0){
		archi.close();
		return -1;
	}
	if(!archi)
	   throw runtime_error("error al abrir para VerUltimo-> "+nombreArchivo);
	int resultado;
	int tam = static_cast<int>(sizeof(T));///Antes desfases por esto
	///Size_of convierte a size_t, el cual solo tiene positivos, por ello
	///no podiamos retroceder antes
	archi.seekg(-tam,ios::end);
	T aux;
	archi.read(reinterpret_cast<char*>(&aux),sizeof(aux));
	resultado = aux.VerID();
	archi.close();
	return resultado;
}


template<typename S >
int System::Verificar_Existencia_Vector(int dni,vector<S>&v){
	
	auto encontrar = find_if(v.begin(), v.end(), [dni](const S& x) {
		return x.VerDNI() == dni;
	});
	if(encontrar !=v.end())
		return (encontrar-v.begin());
	
	return -1;
}

template< typename S>
bool Verificar_Existencia_Binario(int Id,string nombreArchivo){
	//Buscar si Alumno/Bibliotecario/Libro por ID si existe
	ifstream archi(nombreArchivo, ios::binary| ios::ate);
	if(!archi)
		throw runtime_error("no se pudo abrir el archivo, "+nombreArchivo);
	
	S aux;
	archi.read(reinterpret_cast<char*>(&aux),sizeof(aux));
	if(aux.VerID()==Id){
		archi.close();
		return true;
	}
	archi.close();
	return false;
}
	
	template<typename T>
		bool System::AlUltimo(string nombreArchivo, T elemento){
		ofstream archi(nombreArchivo, ios::binary | ios::app);
		
		if(!archi){
			archi.clear(); // <-- Limpia el estado de error antes del nuevo open
			archi.open(nombreArchivo, ios::binary);
		}
		
		if(!archi){
			throw runtime_error("error al abrir para VerUltimo-> " + nombreArchivo);
		}
		
		archi.write(reinterpret_cast<const char*>(&elemento), sizeof(elemento));
		archi.close();
		return true;
	}
	
	
	
#endif // 3. Fin de la condici?n
	
