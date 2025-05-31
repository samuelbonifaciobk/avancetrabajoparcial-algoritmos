#pragma once
#include <iostream>
#include <string>
using namespace std;
class Pelicula {
private:
	
public:
	string titulo;
	string genero;
	string director;
	int duracion;

	Pelicula(string titulo, string genero, int duracion, 
		string director, float calificacion): titulo(titulo), genero(genero), duracion(duracion)  {}

	~Pelicula() {}
	void mostrarInformacion() 
	{
		cout << "Titulo: " << titulo << endl;
		cout << "Genero: " << genero << endl;
		cout << "Duracion: " << duracion << " minutos" << endl;
	}
};