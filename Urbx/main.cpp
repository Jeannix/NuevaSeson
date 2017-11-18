#include <iostream>
#include "urbxyz.h"
using namespace std;

class Calle
{
    public:
        Calle(){nombre="";}
        Calle(string nombre){this->nombre=nombre;}
        string getNombre(){return this->nombre;}
        string tipo;
//        T getT(){return this->tipo;}
        void setNombre(string nombre){this->nombre=nombre; cout<<this->nombre<<endl;}
        string nombre;

//        T tipo;
};
template <typename T>
class Lote
{
    friend class Calle;
    friend class Urbanizacion;
    public:
        Lote(){numero=0;}
        Lote(int numero){this->numero=numero;}
        string getDireccion(/*Calle c, Urbanizacion d*/){
            ///cout<<"Lote numero: "<<numero<<endl;
            ///c.setNombre("Calle ");
            ///d.setnombre("Urbanizacion ")
            return "";}
        T lugar;
        int numero;
};
template<>
class Lote<Calle>
{
    public:
    string nro;
    Calle lugar;
    string getDireccion()
    {
        return lugar.tipo + " " + lugar.nombre + " " + nro;
    }
};
template<>
class Lote<Urbanizacion>
{
    public:
    string nro;
    Urbanizacion lugar;
    string getDireccion()
    {
        return lugar.nombre + " " + nro;
    }
};
int main()
{
    Calle c;
    c.tipo = "Av.";
    c.nombre = "Salaverry";
    Lote<Calle> l;
    l.lugar=c;
    l.nro="300";
    Urbanizacion f;
    f.nombre="Las Manzanas";
    Lote<Urbanizacion> x;
    x.lugar=f;
    x.nro="4";
    cout<<l.getDireccion()<<endl;
    cout<<x.getDireccion()<<endl;
}
