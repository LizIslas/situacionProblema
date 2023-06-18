/* Creacion de metodos episodio
Lizbeth Islas Becerril
*/
#include "Episodio.h"
#include <iostream>
#include <string>
using namespace std;

Episodio :: Episodio(){

}

Episodio :: Episodio(string IdSerie, string nombreSerie, string generoSerie,string ID, string nombre, string genero, float calificacion, float duracion,
string fecha,int temp,int numEpisodio):Video(ID,nombre,calificacion,duracion,fecha, genero){
    this -> nombre=nombre;
    this -> temp = temp;
    this -> numEpisodio = numEpisodio;
}

void Episodio::imprimir()
{
    cout << "--- SERIE---" <<endl <<endl;
    cout<< " - Nombre de la serie: " <<nombreSerie <<endl;
    cout << " - Nombre del episodio: " <<nombre <<endl;
    cout << " - Episodio: " <<numEpisodio <<endl;
    cout << " - Temporada: " <<temp <<endl;
    cout << " - Género: " <<genero <<endl;
    cout << " - Duración: " <<duracion <<endl;
    cout <<" - Calificación: "<< duracion <<endl;
    cout << " - Fecha de estreno: " << fecha <<endl;
    cout << "................" <<endl;
}
string Episodio::getNombreSerie (){
    return nombreSerie;
    
}
