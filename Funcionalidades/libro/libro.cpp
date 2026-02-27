#include "libro.h"
size_t Libro::VerID() const  
{
	return id;
}
const char* Libro::VerNombre() const{
	return this->nombre;
}
const char* Libro::VerDescripcion() const{
	return this->descripcion;
}
const char* Libro::VerAutores() const{
	return this->autores;
}
const char* Libro::VerPath() const{
	return this->path;
}

// Corrección: Ahora retorna el atributo de la clase
bool Libro::EstadoDisponibilidad() const {
	return this->disponible;
}

// Nuevo método para cambiar la disponibilidad desde Bibliotecario
void Libro::SetDisponible(bool d) {
	this->disponible = d;
}


void Libro::CambiarEstado(bool estado)
{
	if (estado)
		caduco = true;
	else
		caduco = false;
}

void Libro::RestarDia()
{
	//Llega hasta 0 dias, cuando se sobrepasa, caduca la devolucion
	//Ya no restar dias (antes de llamar)
	//sino antes preguntar si esta caducada la devolucion
	//Caducado -> Notificacion/Vector caducados
	//Luego al devolver primero buscar en ese vector diria, sino está
	//ahí, marcarlo como devuelto (reset estados)
	
	if(diasRestantes>=0)
		diasRestantes--;
	else
		CambiarEstado(1);
}

void Libro::DiasRestantes(int dias){
	diasRestantes = dias;
}

void Libro::CambiarNombre(const char *NuevoNombre){
	strncpy(this->nombre, NuevoNombre,49);
	this->nombre[49]='\0';
}
void Libro::CambiarDescripcion(const char *NuevoNombre){
	strncpy(this->descripcion, NuevoNombre,49);
	this->descripcion[99]='\0';
}
void Libro::CambiarAutores(const char *NuevoNombre){
	strncpy(this->autores, NuevoNombre,49);
	this->autores[99]='\0';
}

void Libro::CambiarPath(const char *NuevoNombre){
	strncpy(this->path, NuevoNombre,99);
	this->path[99]='\0';
}


bool Libro::operator==(const Libro& otro) const {
	// Comparamos si los IDs son iguales.
	// Si tus variables se llaman diferente, c?mbialas aqu?.
	return this->id == otro.id; 
}


