/*
Lizbeth Islas Becerril
Clase episodio
*/
#ifndef EPISODIO_H
#define EPISODIO_H
#include "Video.h"
#include <string>
#include <vector>
#include <iostream>
using namespace std;

class Episodio:public Video{
    private:
    int temp;
    string nombreSerie;
    string generoSerie;
    string IdSerie;
    vector <Episodio*> Series;
    int numEpisodio;
    public:
    Episodio();
    Episodio(float ID, string nombre, string genero, float calificacion, float duracion, 
    string fecha,int temp,int numEpisodio);
    void calificar (float calificar, string titulo);
    void verEp(string serie);
    void verVideoCalif(float calificacion);        
    void verVideoGenero(string genero);
    void verPeliculaCalif(float calificacion);
    
};


#endif