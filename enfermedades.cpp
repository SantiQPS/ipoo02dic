#include "enfermedades.h"

Enfermedades::Enfermedades(string nombre, string desccripcion){
	this->nombre = nombre;
	this->descripcion = descripcion;
	}
Enfermedades::~Enfermedades(){}

string Enfermedades::getNombre(){
	return nombre;
	}
string Enfermedades::getDescripcion(){
	return descripcion;
	}
void Enfermedades::setNombre(string nombre){
	this->nombre = nombre;
	}
void Enfermedades::setDescripcion(string descripcion){
	this->descripcion = descripcion;
	}
