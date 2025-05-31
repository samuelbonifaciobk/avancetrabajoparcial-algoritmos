#pragma once
#include "Usuario.h"
#include "Pelicula.h"
#include <iostream>
#include <string>
#include <list>
#include <stack>
#include <vector>
using namespace std;
class SistemaNetlifx {
public:
	list<Usuario> usuarios;
	list<Pelicula> peliculas;

	void registrarUsuario(Usuario& usuario)
	{
		usuarios.push_back(usuario);
	}

	void agregarPelicula(Pelicula& pelicula)
	{
		peliculas.push_back(pelicula);
	}

	Pelicula* buscarPelicula(string titulo)
	{
		for (Pelicula& p : peliculas)
		{
			if (p.titulo == titulo)
			{
				return &p;
			}
		}
		return 0;
	}
};	