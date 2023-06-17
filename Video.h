/* Creacion de superclase video
Lizbeth Islas Becerril
*/
/*
Lizbeth Islas Becerril
Creacion clase padre
*/
#ifndef VIDEO_H
#define VIDEO_H
#include <string>
using namespace std;

 class Video{

    protected:
    float ID;
    string nombre;
    float calificacion;
    float duracion;
    string fecha;
    string genero;

    public:
    Video ();
    Video(float ID,string nombre, float calificacion, float duracion, string fecha, string genero);
    virtual void calificar (float calificar, string titulo);
    virtual void verEp(string serie);
    virtual void verVideoCalif(float calificacion);        
    virtual void verVideoGenero(string genero);
    virtual void verPeliculaCalif(float calificacion);
    virtual void imprimir();


 };

#endif  