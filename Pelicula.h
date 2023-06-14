#ifndef _PELICULA_H
#define _PELICULA_H
#include <iostream>
#include <string>
#include "Multimedia.h"

using std::string;

class Pelicula: public Multimedia{
    private:
        string 
enero;
    
    public:
        //Se pasa el parametro g(genero)
        void MostrarPorGenero(string g);
        //Se pasa el parametro n(calificaion en entero)
        void MostrarPorCalificacion(int n);
        //Se pasa el parametro n(calificaion en entero)
        void MostrarPeliculaCalificacion(int n);
        //Se pasa el parametro de nombre de la serie
        void MostrarEpisodioSerie(string nom);
        //Se pasa el nombre del video y la calificación
        void Calificar(string nom, int cal);
};
#endif