#ifndef URBXYZ_H
#define URBXYZ_H
#include <iostream>
#include <string>
using namespace std;

class Urbanizacion
{
    public:
        Urbanizacion();
        Urbanizacion(string nombre);
        string getnombre();
        void setnombre(string nombre);
        string nombre;
};

#endif // URBXYZ_H
