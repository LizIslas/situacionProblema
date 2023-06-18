/*
Creacion cpp de pelicula
Lizbeth Islas Becerril*/
#include "Pelicula.h"
#include <iostream>
using namespace std;

Pelicula::Pelicula()
{
}

Pelicula::Pelicula(string ID, string nombre, string genero, 
float calificacion, float duracion, string fecha): Video(ID, nombre, calificacion, duracion,
fecha, genero)
{
}

void Pelicula::imprimir()
{
    cout << "--- PELICULA---" <<endl <<endl;
    cout<< " - Nombre: " <<nombre <<endl;
    cout << " - Género: " <<genero <<endl;
    cout << " - Duración: " <<duracion <<endl;
    cout <<" - Calificación: "<< duracion <<endl;
    cout << " - Fecha de estreno: " << fecha <<endl;
    cout << "................" <<endl;
}
