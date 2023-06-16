#include<string>
#include<iostream>
#include <vector>

#include"Episodio.h"

#ifndef SERIE_H
#define SERIE_H

using std::string;
using std::vector;

class Serie
{
    private:
        string id, nomserie,genero;
        vector <Episodio*> episodios;
    public:
        Serie();
        void mostrarEpisodioSerie(string nom);
        void mostrarPorGenero(string g);
        void mostrarPorCalificacion(float n);
        void calificar(string nom, float cal);
        void mostrarPeliculaCalificacion(float n);


};

#endif