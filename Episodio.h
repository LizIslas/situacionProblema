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
    string nombreEp;
    string IdSerie;
    int numEpisodio;
    vector <float> calificaciones;
    public:
    Episodio();
    Episodio(string IdSerie, string generoSerie,string nombre,
    string ID, string nombreEp, string genero, float calificacion, 
    float duracion, 
    string fecha,int temp,int numEpisodio);
    void imprimir();
    string getNombreSerie ();
    void calcularPromedios(string nombre);
};


#endif