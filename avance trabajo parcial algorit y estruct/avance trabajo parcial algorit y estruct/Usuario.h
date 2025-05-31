#pragma once
#include "Pelicula.h"
#include "ListaDeReproduccion.h"
#include <iostream>
#include <stack>

using namespace std;
class Usuario {
private:
public:
	string nombre;
	string email;
	ListaDeReproduccion listaActual;
	stack<Pelicula> historialVisualizacion;

	Usuario(string nombre, string email) : nombre(nombre), email(email), listaActual("Mi Lista") {}

	void agregarPeliculaLista(Pelicula& pelicula)
	{
		listaActual.agregarPelicula(pelicula);
	}

	void verPelicula(Pelicula& pelicula)
	{
		historialVisualizacion.push(pelicula);
		cout << "Pelicula: " << pelicula.titulo << endl;
	}
};