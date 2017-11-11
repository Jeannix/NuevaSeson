#include "Calle.h"

Calle::Calle(int tam)
{
    posx=0;
    posy=0;
    nombre="";
    this->tamano=tam;

}
Calle::Calle(int x, int y)
{
    posx=x;
    posy=y;
    nombre="";
}
Calle::Calle(int x, int y, string nombre)
{
    posx=x;
    posy=y;
    this->nombre=nombre;
}
int Calle::getPosx(){return this->posx;}
int Calle::getPosy(){return this->posy;}
string Calle::getNombre(){return this->nombre;}
void Calle::setPosx(int posx){this->posx=posx; cout<<this->posx<<endl;}
void Calle::setPosy(int posy){this->posy=posy; cout<<this->posy<<endl;}
void Calle::setNombre(string nombre){this->nombre=nombre; cout<<this->nombre<<endl;}
