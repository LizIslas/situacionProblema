#include "Pelicula.h"

#include <iostream>
#include <string>
using namespace std;

Pelicula :: Pelicula(){

}

Pelicula :: Pelicula(float ID,string nombre,string genero,float calificacion,float duracion,
string fecha):Video(ID,nombre,calificacion,duracion,fecha, genero){
    this-> ID= ID;
    this -> genero =genero;
    this ->calificacion = calificacion;
    this -> duracion= duracion;
    this -> fecha= fecha;

}

void Pelicula :: agregarPelicula(Pelicula* pelicula){
    Peliculas.push_back(pelicula);
}



void Pelicula :: verVideoCalif(float calificacion){
    }

void Pelicula :: verVideoGenero(string genero){
    
}

void Pelicula :: verPeliculaCalif(float calificacion){
    
}

void Pelicula :: verEp(string serie){

}