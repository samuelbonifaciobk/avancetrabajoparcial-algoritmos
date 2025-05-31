#pragma once
#include <list>
#include "Pelicula.h"
class ListaDeReproduccion {
public:
	string nombre;
	list<Pelicula> peliculas;

	ListaDeReproduccion(string nombre) : nombre(nombre) {}

	void agregarPelicula(Pelicula& pelicula)
	{
		peliculas.push_back(pelicula);
	}

	void eliminarPelicula(Pelicula& pelicula) {}

	void mostrarLista()
	{
		// cout << "Lista de Reproduccion: " << nombre << endl;
		for (Pelicula& p : peliculas)
		{
			p.mostrarInformacion();
		}
	}
};