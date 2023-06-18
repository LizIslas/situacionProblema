/* Creacion de metodos episodio
Lizbeth Islas Becerril
*/
#include "Episodio.h"
#include <iostream>
#include <string>
using namespace std;

Episodio :: Episodio(){

}

Episodio::Episodio(string IdSerie, string generoSerie, string nombre, 
string ID, string nombreEp, string genero, float calificacion, float duracion, 
string fecha, int temp, int numEpisodio): Video(ID, nombre, calificacion, duracion, fecha, genero)
{
    this->nombreEp= nombreEp;
    this->IdSerie= IdSerie;
    this->temp= temp;
    this->numEpisodio= numEpisodio;
}

void Episodio::imprimir()
{
    cout << "--- SERIE---" <<endl <<endl;
    cout<< " - Nombre de la serie: " <<nombre <<endl;
    cout << " - Nombre del episodio: " <<nombreEp <<endl;
    cout << " - Episodio: " <<numEpisodio <<endl;
    cout << " - Temporada: " <<temp <<endl;
    cout << " - Género: " <<genero <<endl;
    cout << " - Duración: " <<duracion <<endl;
    cout <<" - Calificación: "<< calificacion <<endl;
    cout << " - Fecha de estreno: " << fecha <<endl;
    cout << "................" <<endl;
}
string Episodio::getNombreSerie (){
    return nombre;
    
}

void Episodio :: calcularPromedios(string nombre){
   if (nombre != nombreEp)
    {
        cout << "No se encontró la serie '" << nombre << "'" << endl;
        return;
    }

    if (calificaciones.empty())
    {
        cout << "No hay episodios calificados en la serie '" << nombreEp << "'" << endl;
        return;
    }

    float sumaCalificaciones = 0.0;
    for (float calificacion : calificaciones)
    {
        sumaCalificaciones += calificacion;
    }

    float promedio = sumaCalificaciones / calificaciones.size();

    cout << "El promedio de calificación de los episodios de la serie '" << nombreEp << "' es: " << promedio << endl;

}