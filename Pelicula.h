/* Creacion de superclase video
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
    private:
    vector <Pelicula*> Peliculas;
    public:
    //void calificar (float calificar, string titulo);
    void verEp(string serie);
    void verVideoCalif(float calificacion);        
    void verVideoGenero(string genero);
    void verPeliculaCalif(float calificacion);
    void agregarPelicula(Pelicula* pelicula);
    Pelicula();
    Pelicula(float ID,string nombre,string genero,float calificacion,float duracion,
    string fecha);
   


};
#endif