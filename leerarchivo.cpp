/*
Lizbeth Islas Becerril
Leer archivo de texto c++
*/
#include <iostream>
#include <fstream>
#include <vector>
#include <sstream> // para stringstream
using namespace std;
vector <string> separar (string linea);

int main(int argc, char const *argv[]){
    ifstream entrada;
    entrada.open( "DatosPeliculas.csv");
    
    string linea;
    int numeroLinea =1;

    while (getline(entrada,linea)){
        // se haceun contador  Numerodelina ++ va recorriendo las lineas
        // ++ operador de post incremento, primero usa el valor que tenga la variable y ya despues lo incrementa
        //cout <<(numeroLinea++)<<endl; //no cerrar el archivo dentro del ciclo por que si no solo lee la primera linea
        //cout<<"liz es una dramática";
       
        numeroLinea++;
        separar(linea);
        if (numeroLinea ==5)
        {
            break;
        }

    }

    entrada.close ();
    return 0;
}

vector <string> separar (string linea)
{
    vector <string> tokens;
    stringstream entrada (linea); //flujo de datos a partir de una condicion
    string dato;
    int numeroTokens= 0;
    while (getline(entrada, dato, ',')) 
    {
    
        if(dato != "" && dato != "/n" && dato != "\r")
        {
            //cout << dato<< numeroTokens << endl;
            tokens.push_back(dato); //Guarda en el vector
            numeroTokens++;
        }
        if( dato!= "")
        {
            cout<< dato<<numeroTokens<< endl;
            numeroTokens ++;
        }
        

    }
    return tokens;
    //cout << "tokens:" <<numeroTokens<< endl << endl;
}