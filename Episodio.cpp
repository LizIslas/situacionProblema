/* Creacion de metodos episodio
Lizbeth Islas Becerril
*/
#include "Episodio.h"
#include <iostream>
#include <string>
using namespace std;

Episodio :: Episodio(){

}

Episodio :: Episodio(float ID, string nombre, string genero, float calificacion, float duracion,
string fecha,int temp,int numEpisodio):Video(ID,nombre,calificacion,duracion,fecha, genero){
    this -> nombre=nombre;
    this -> temp = temp;
    this -> numEpisodio = numEpisodio;
}

void Episodio :: calificar(float calificar, string titulo){
    for(int i=0;i<Series.size();i++){
        Series[i] -> calificar(calificar,titulo);
    }

}

void Episodio :: verVideoCalif(float calificacion){
    for(int i=0;i<Series.size();i++){
        Series[i] -> verVideoCalif(calificacion);
    }
}

void Episodio :: verVideoGenero(string genero){
    for(int i=0;i<Series.size();i++){
        Series[i] -> verVideoGenero(genero);
    }
}

void Episodio :: verPeliculaCalif(float calificacion){
    for(int i=0;i<Series.size();i++){
        Episodio *ap = dynamic_cast <Episodio*> (Series[i]);
        if(ap !=0){
            ap -> verPeliculaCalif(calificacion);                                                                                                                                                            
        }
        
    }
}

void Episodio :: verEp(string serie){

}
