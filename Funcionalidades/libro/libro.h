#ifndef LIBRO_H
#define LIBRO_H
#include <cstring>
#include <iostream>

using namespace std;

class Libro
{
	bool existe;
	size_t id;
	char nombre[50];
	char descripcion[100];
	char autores[100];
	char path[100];
	int diasRestantes;
	bool disponible; // Quitamos la inicializaci?n aqu? para hacerlo en el constructor
	bool caduco;
	
public:
	
	Libro()
	{
		id = -1;
		disponible = true;
		diasRestantes = 0;
		existe= true;
	};
	
	Libro(size_t id, const char* nombre)
	{
		this->id = id;
		strncpy(this->nombre, nombre, 49);
		this->nombre[49] = '\0';
		this->disponible = true; // Por defecto disponible
		this->caduco = false;
		this->diasRestantes = 0;
		existe = true;
		
	}
	
	size_t VerID() const;
	const char* VerNombre() const;
	void CambiarNombre(const char* NuevoNombre);
	
	const char* VerDescripcion() const;
	void CambiarDescripcion(const char* NuevoNombre);
	
	const char* VerAutores() const;
	void CambiarAutores(const char* NuevoNombre);
	
	
	const char* VerPath() const;
	void CambiarPath(const char* NuevoNombre);
	
	// M?todos corregidos
	bool EstadoDisponibilidad() const; 
	void SetDisponible(bool d); // Nuevo m?todo necesario para PrestarLibros
	
	void CambiarEstado(bool estado); // 1 expirado, 0 no expirado
	void RestarDia(); 
	void DiasRestantes(int dias);
	void Existe(){existe = true;}
	void NoExiste(){existe = false;}
	bool Existencia(){return existe;}
	
	bool operator==(const Libro& otro) const;
};
#endif
