#include "Pelicula.h"
#include "Episodio.h"
#include <iostream>
#include <string>
using namespace std;


int main(){
    Pelicula* pelicula = new Pelicula(120.8,"Sirenita 2023","Fantasia",5.5,120.5,"2023");
    Pelicula* pelicula2 = new Pelicula(121.8,"Spiderman","Fantasia",8,120.5,"2023");
    Pelicula* pelicula3 = new Pelicula(122.8,"Origen","Fantasia",8,120.5,"2023");
    Pelicula* pelicula4 = new Pelicula(121.8,"Memento","Fantasia",6.0,20.5,"2023");
    pelicula2 -> calificar(9.0,"Spiderman");
    
    

    return 0;
}