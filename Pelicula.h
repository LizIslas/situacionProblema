/* Creacion de pelicula
Lizbeth Islas Becerril
*/

#ifndef PELICULA_H
#define PELICULA_H
#include "Video.h"
#include <string>
#include <vector>
using namespace std;
using std:: string;
class Pelicula: public Video {
    public:
    //void calificar (float calificar, string titulo);
    Pelicula();
    Pelicula(string ID,string nombre,string genero,float 
    calificacion,float duracion,
    string fecha);   
    void imprimir();
};
#endif