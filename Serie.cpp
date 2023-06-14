#include <iostream>
#include <string>
#include "Serie.h"


using std::cout;
using std::endl;
using std::string;
using std::ostream;

Serie::Serie(){

}


void Serie::mostrarEpisodioSerie(string nom){
    nomserie = nom;

}

void Serie::mostrarPorGenero(string g){
    genero = g;
}

void Serie::mostrarPorCalificacion(float n){
    float calif = n;
}

void Serie::calificar(string nom, float cal){
    string nombre2=nom;
    float calif2 = cal;
}

void Serie::mostrarPeliculaCalificacion(float n){
    float pelcal = n;
}