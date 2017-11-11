#include <iostream>
#include "Calle.h"

using namespace std;

class Mapa
{
    public:
        Mapa(int tam)
        {
        this->tam=tam;
        calles=new Calle[tam];
        }
        ~Mapa()
        {
        delete[] this->calles;
        }
        static Mapa* getInstancia(int tam)
        {
            if (instancia==0){
                instancia = new Mapa(tam);
                return instancia;
            }
            return instancia;
        }
        Calle* fabricaCalle(string nombre, int pos)
        {
            Calle* c=new Calle();
            c->setNombre(nombre);
            calles[pos]=*c;
            return c;
        }
        Calle *calles;
        int tam;
        static Mapa* instancia;
};

Mapa* Mapa::instancia=0;

int main()
{
//    Calle d(2,5);
//    d.setPosx(2);
//    d.setPosy(5);
//    cout<<d.getPosy()<<endl;
//    Mapa m(8);
//    Calle c;
//    c.setNombre("independencia");
////    cout<<c.getPosy()<<endl;
////    cout<<c.getPosx()<<endl;
//    Mapa* mapa;
//    mapa = Mapa::getInstancia(10);
//    mapa->calles[0]=c;
//    Mapa* mapa2;
//    mapa2 = Mapa::getInstancia(10);
//    cout<<mapa2->calles[0].getNombre()<<endl;
//    Calle* pcalle=mapa->fabricaCalle("Salaverry",1);
//    cout<<mapa2->calles[1].getNombre()<<endl;
//    delete pcalle;
    Calle calle3(2);
    if(true)
    {
        Calle calle2=calle3;
    }
    cout<<calle3.tamano<<endl;
    return 0;
}
