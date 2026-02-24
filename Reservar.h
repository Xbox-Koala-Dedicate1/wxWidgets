#ifndef RESERVAR_H
#define RESERVAR_H
#include <iostream>
using namespace std;
class Reservar {
	size_t id;
	char nombre[50];
	bool existe;
	
	public:
	Reservar();
	const char *VerNombre() const;
	size_t VerID()const {return id;}
	void Existe(){existe = true;}
	void NoExiste(){existe = false;}
	bool Existencia(){return existe;}	
};

#endif

