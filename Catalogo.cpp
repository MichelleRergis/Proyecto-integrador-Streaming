#include "Catalogo.h"
#include "Multimedia.h"

#include <fstream>
#include <string>
#include <iostream>
#include <sstream>

using std::getline;
using std::cout;

Catalogo::Catalogo() {}

Catalogo::~Catalogo() {
    for (Multimedia* multimedia : multimediaList) {
        delete multimedia;
    }
    multimediaList.clear();
}

void Catalogo::CargarVideos(const std::string& archivo) {
    std::ifstream file(archivo);
    if (!file.is_open()) {
        std::cout << "Error al abrir el archivo." << std::endl;
        return;
    }

    std::string line;
    std::getline(file, line); // Leer la línea de encabezado y descartarla

    while (std::getline(file, line)) {
        std::stringstream ss(line);
        std::string id, nombre, genero, fechaEstreno;
        float calificacion;
        double duracion;

        // Parsear los valores de cada campo
        std::getline(ss, id, ',');
        std::getline(ss, nombre, ',');
        std::getline(ss, genero, ',');
        ss >> calificacion;
        ss.ignore(); // Ignorar la coma después de calificacion
        ss >> duracion;
        ss.ignore(); // Ignorar la coma después de duracion
        std::getline(ss, fechaEstreno, ',');

        Multimedia* multimedia = new Multimedia(id, nombre, genero, calificacion, duracion, fechaEstreno);
        multimediaList.push_back(multimedia);
    }

    file.close();
}

void Catalogo::MostrarPorCalificacion(float n) const {
    for (const Multimedia* multimedia : multimediaList) {
        if (multimedia->GetCalificacion() > n) {
            multimedia->MostrarInformacion();
        }
    }
}

void Catalogo::MostrarPorGenero(const std::string& g) const {
    for (const Multimedia* multimedia : multimediaList) {
        if (multimedia->GetGenero() == g) {
            multimedia->MostrarInformacion();
        }
    }
}

void Catalogo::MostrarEpisodioSerie(const std::string& nom) const {
    for (const Multimedia* multimedia : multimediaList) {
        const Serie* serie = dynamic_cast<const Serie*>(multimedia);
        if (serie != nullptr) {
            serie->MostrarEpisodioSerie(nom);
        }
    }
}

void Catalogo::MostrarPeliculaCalificacionMayorA(float n) const {
    for (const Multimedia* multimedia : multimediaList) {
        const Pelicula* pelicula = dynamic_cast<const Pelicula*>(multimedia);
        if (pelicula != nullptr && pelicula->GetCalificacion() > n) {
            pelicula->MostrarInformacion();
        }
    }
}

void Catalogo::Calificar(const std::string& nom, float cal) {
    for (Multimedia* multimedia : multimediaList) {
        if (multimedia->GetNombre() == nom) {
            multimedia->Calificar(cal);
            break;
        }
    }
}
