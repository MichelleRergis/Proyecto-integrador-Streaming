#include<string>
#include<iostream>
#include <vector>

#ifdef SERIE_H
#define SERIE_H

using std::string;

class Serie
{
    private:
        string id, nomserie,genero;
        vector <episodio*> episodios;
    public:
        Serie();
        void mostrarEpisodioSerie(string nom);
        void mostrarPorGenero(string g);
        void mostrarPorCalificacion(float n);
        void calificar(string nom, float cal);
        void mostrarPeliculaCalificacion(float n);


}

#endif