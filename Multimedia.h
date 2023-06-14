#ifndef _MULTIMEDIA_H
#define _MULTIMEDIA_H
#include <iostream>
#include <string>

class Multimedia{
    public:
        //Se pasa el parametro g(genero)
       virtual void MostrarPorGenero(string g) = 0;
        //Se pasa el parametro n(calificaion en entero)
       virtual void MostrarPorCalificacion(int n) = 0;
        //Se pasa el parametro n(calificaion en entero)
       virtual void MostrarPeliculaCalificacion(int n) = 0;
        //Se pasa el parametro de nombre de la serie
       virtual void MostrarEpisodioSerie(string nom) = 0;
        //Se pasa el nombre del video y la calificación
       virtual void Calificar(string nom, int cal) = 0;
};
#endif