#include "medicamentos.h"

Medicamentos::Medicamentos(string nombre, double dosis){
	this->nombre = nombre;
	this->dosis = dosis;
}
Medicamentos::~Medicamentos(){}

string Medicamentos::getNombre(){
	return nombre;
}

double Medicamentos::getDosis(){
	return dosis;
}

void Medicamentos::setNombre(string nombre){
	this->nombre = nombre;
}

void Medicamentos::setDosis(double dosis){
	this->dosis  = dosis;
}

