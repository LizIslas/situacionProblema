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
    string IdSerie;
    int numEpisodio;
    public:
    Episodio();
    Episodio(string IdSerie, string generoSerie,string nombreSerie,
    string ID, string nombre, string genero, float calificacion, 
    float duracion, 
    string fecha,int temp,int numEpisodio);
    void imprimir();
    string getNombreSerie ();
};


#endif