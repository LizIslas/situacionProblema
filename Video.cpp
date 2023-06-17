/* Creacion de superclase video -metodos
Lizbeth Islas Becerril
*/
#include "Video.h"
 #include <string>
#include <iostream>
using namespace std;

Video :: Video(){

}

Video :: Video(float ID, string nombre, float calificacion, float duracion, string fecha, string genero){
    this -> ID= ID;
    this -> calificacion= calificacion;
    this ->  duracion = duracion;
    this -> fecha= fecha;
    this -> genero = genero;
    this -> nombre = nombre;

}
void Video :: calificar (float calificar, string titulo){
    cout << "calificar: " << endl;
    /*if (titulo == nombre)
    {
        calificacion=calificar;
        imprimir();
    }*/
    calificacion=calificar;
    imprimir();

}
void Video::verVideoCalif (float calificacion){
    cout << "muestra la calificacion mayor o igual a : " << calificacion << endl;
    if (calificacion <= calificacion)
    {
        imprimir();
    }
    else{
        cout << "esa es la calificacion máxima" << endl;
    }
}
void Video:: verVideoGenero (string genero){
    if (genero== genero){
        imprimir ();
    }
    else{
        cout << "No hay ese genero :(" << endl;
    }
}
void Video:: verPeliculaCalif (float calificacion){
    cout << "Mostrar calificacione sde pelicula: "<< calificacion << endl;
    if (calificacion= calificacion){
        imprimir ();
    }
    else{
        cout << "calificaion invalida" << endl;
    }
}
void Video:: verEp (string serie){
}

void Video::imprimir(){
    cout <<"ID: "<< ID << endl;
    cout <<"Calificacion: " << calificacion << endl;
    cout << "DUracion :" <<duracion << endl;
    cout << "Fecha: " << fecha << endl;


}