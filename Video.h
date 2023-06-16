#include<string>
#include<iostream>


#ifndef VIDEO_H
#define VIDEO_H

using std::string;


class Video
{
    private:
        string id;
        string nombre;
        double duracion;
        float calificacion;
        string fechaEstreno;
    
    public:

        Video();

};

#endif