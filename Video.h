/* Creacion de superclase video
Lizbeth Islas Becerril
*/

#ifndef VIDEO_H
#define VIDEO_H
#include <string>
using namespace std;

 class Video{

    protected:
    string ID;
    string nombre;
    float calificacion;
    float duracion;
    string fecha;
    string genero;

    public:
    Video ();
    Video(string ID,string nombre, float calificacion, float duracion, string fecha, string genero);
   void calificar (float calificar, string titulo);
   void verVideoCalif(float calificacion);        
   void verVideoGenero(string genero);
    virtual void imprimir();
    string getNombre();
    string getGenero();
    float getCalificacion();

 };

#endif  