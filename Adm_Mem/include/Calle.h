#ifndef CALLE_H
#define CALLE_H
#include <string>
#include <iostream>
using namespace std;

class Calle
{
    public:
        string* lotes;
        int tamano;
        Calle(int tam=0);
        Calle(int x, int y);
        Calle(int x, int y, string nombre);

        int getPosy();
        int getPosx();
        string getNombre();
        void setPosy(int posy);
        void setPosx(int posx);
        void setNombre(string nombre);
    protected:
        int posy;
        int posx;
        string nombre;
};

#endif // CALLE_H
