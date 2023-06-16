#ifndef CATALOGO_H
#define CATALOGO_H

#include "Multimedia.h"
#include "Serie.h"
#include "Pelicula.h"
#include <vector>
#include <string>

using std::string;
using std::vector;

class Catalogo {
    private:
        vector<Multimedia*> multimediaList;

    public:
        Catalogo();
        ~Catalogo();

        void CargarVideos(const string& archivo);
        void MostrarPorCalificacion(float n) const;
        void MostrarPorGenero(const string& g) const;
        void MostrarEpisodioSerie(const string& nom) const;
        void MostrarPeliculaCalificacionMayorA(float n) const;
        void Calificar(const string& nom, float cal);
};

#endif  // CATALOGO_H
