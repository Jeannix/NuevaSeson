#include "urbxyz.h"

Urbanizacion::Urbanizacion()
{
    nombre="";
}

Urbanizacion::Urbanizacion(string nombre)
{
    this->nombre=nombre;
}
string Urbanizacion::getnombre(){return this->nombre;}
void Urbanizacion::setnombre(string nombre){this->nombre=nombre;cout<<this->nombre<<endl;}
