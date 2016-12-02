#ifndef MEDICAMENTOS_H
#define MEDICAMENTOS_H

#include <string>
using std::string;

class Medicamentos{
	private:
		string nombre;
		double dosis;
	
	public:
		Medicamentos(string nombre, double dosis);
		~Medicamentos();
		
		string getNombre();
		double getDosis();
		
		void setNombre(string nombre);
		void setDosis(double dosis);
};

#endif
