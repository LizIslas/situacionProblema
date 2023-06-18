
#include <fstream>
#include <sstream>
#include <vector>
#include "Video.h"
#include "Pelicula.h"
#include "Episodio.h"
using namespace std;
using std::cin;

vector<string> separar(string linea);

int main()
{
    cout << endl;
    cout << "----------------Bienvenido al servicio de streaming--------------"<<endl;
    cout<<"Para iniciar inserte el archivo por favor :)" << endl;
    string base;
    cout << "Inserte archivo: ";
    cin >> base;
    cout << endl;
    vector <Video> videos;
    vector<Pelicula> peliculas;
    vector <Episodio> episodios;
    ifstream entrada;
    entrada.open(base);
    string linea;
    int numerolinea = 1;
    string dato1, dato2, dato3, dato4, dato5, dato6, dato7, dato8, dato9,dato10;
    float calificacion, duracion;
    int temporada, nepisodio;
    while (getline(entrada, linea))
    {
        // cout<<(numerolinea++) <<linea <<endl;
        vector<string> datos = separar(linea);
        separar(linea);
        if (numerolinea != 1)
        {
            if (datos.size() == 6)
            {
                dato1= datos[0];
                dato2= datos[1];
                dato3= datos[2];
                dato4= datos[3];
                dato5= datos[4];
                dato6= datos[5];
                calificacion= stof(dato5);
                duracion= stof (dato3);
                Pelicula* p= new Pelicula(dato1, dato2, dato4,calificacion,
                duracion, dato6);
                videos.push_back(*p);
                peliculas.push_back(*p);
            }
            else
            {
                dato1= datos[0];
                dato2= datos[1];
                dato3= datos[2];
                dato4= datos[3];
                dato5= datos[4];
                dato6= datos[5];
                dato7= datos[6];
                dato8= datos[7];
                dato9= datos[8];
                dato10= datos[9];
                calificacion= stof(dato5);
                duracion= stof (dato3);
                temporada= stoi(dato9);
                nepisodio= stoi(dato10);
                Episodio * ep= new Episodio(dato1, dato4,dato2,dato7, 
                dato8, dato4, calificacion,duracion, dato6, temporada,nepisodio);
                videos.push_back(*ep);
                episodios.push_back(*ep);
            }
        }
        numerolinea++;
    }
    entrada.close();
    int opcion;
    cout << "-------------------Menu-------------------" << endl;
    cout << "1) Calificar un video" << endl;
    cout << "2) Mmostrar todos los videos de cierta calificacion en adelante" << endl;
    cout << "3) Mostrar Episodios de una serie" << endl;
    cout << "4) Mostrar videos por genero" << endl;
    cout << "5) Mostrar Peliculas arriba de cierta calificacion" << endl;
    cout << "Elija una opcion: ";
    cin >> opcion;
    if (opcion == 1)
    {
        string titulo;
        float nuevaCalificacion;
        cout << "Ingrese el título del video: ";
        cin.ignore();
        getline(cin, titulo);
        cout << "Ingrese la nueva calificacion: ";
        cin >> nuevaCalificacion;

        // Buscar el video por título
        for (auto &video : videos)
        {
            if (video.getNombre() == titulo)
            {
                video.calificar(nuevaCalificacion, titulo);
            }
        }
    }
    else if (opcion == 2)
    {
        float calificacionMinima;
        cout << "Ingrese la calificacion minima: ";
        cin >> calificacionMinima;

        cout << "Videos con calificacion mayor o igual a " << calificacionMinima << ":" << endl;
        for (auto &video : videos)
        {
            if (video.getCalificacion() >= calificacionMinima)
            {
                video.imprimir();
            }
        }
    }
    else if (opcion == 3)
    {
        string nombreSerie;
        cout << "Ingrese el nombre de la serie: ";
        cin.ignore();
        getline(cin, nombreSerie);

        cout << "Episodios de la serie '" << nombreSerie << "':" << endl;
        for (auto &episodio : episodios)
        {
            if (episodio.getNombreSerie() == nombreSerie)
            {
                episodio.imprimir();
            }
        }
    }
    else if (opcion == 4)
    {
        string genero;
        cout << "Ingrese el genero: ";
        cin.ignore();
        getline(cin, genero);
        cout << "Videos del genero '" << genero << "':" << endl;
        for (auto &video : videos)
        {
            if (video.getGenero() == genero)
            {
                video.imprimir();
            }
        }
    }
    else if (opcion == 5)
    {
        float calificacionMinima;
        cout << "Ingrese la calificacion minima: ";
        cin >> calificacionMinima;

        cout << "Peliculas con calificacion mayor o igual a " << calificacionMinima << ":" << endl;
        for (auto &pelicula : peliculas)
        {
            if (pelicula.getCalificacion() >= calificacionMinima)
            {
                pelicula.imprimir();
            }
        }
    }
    return 0;
}

vector<string> separar(string linea)
{
    vector<string> tokens; // Componentes de la línea

    stringstream entrada(linea); // Flujo de datos
    string dato;
    int numeroTokens = 0;
    while (getline(entrada, dato, ','))
    {
        if (dato != "" && dato != "\n" && dato != "\r")
        {
            // cout<< dato <<endl;
            tokens.push_back(dato); // Guarda el vector
            numeroTokens++;
        }
    }
    // cout<< "Tokens: "<<numeroTokens <<endl <<endl;

    return tokens;
}