#include <iostream>

using namespace std;
class Posicion
{
public:
    int x, y;
    Posicion(){
        x=0;
        y=0;
    }
    Posicion(int x1, int y1){
        x=x1;
        y1=y;
    }
    Posicion(Posicion &p){
        x=p.x;
        y=p.y;
    }
};

class Pieza
{
protected:
    Posicion pos;
private:
    const string nombre_p;
    string color;
public:
    Pieza():nombre_p(){}
    Pieza(string nombre):nombre_p(nombre){
        color="Blanca";
    }
    static int piezasActivas;
    const string getNombre(){return nombre_p;}
    Posicion getPosicion(){
        return pos;
    }
    void setPosicion(Posicion pos_1){
        pos.x=pos_1.x;
        pos.y=pos_1.y;
    }
    virtual void avanzarPieza(){
        cout<<"Avanzar Pieza"<<endl;
        pos.x++;
    }
};
int Pieza::piezasActivas=0;

class Peon:public Pieza
{
public:
    Peon():Pieza(){}
    Peon(string nombre):Pieza(nombre){}
    void avanzarPieza(){
        cout<<"Avanzar Peon"<<endl;
        pos.y++;
    }
};

class Caballo:private Pieza
{
    Caballo():Pieza(){}
    Caballo(string nombre):Pieza(nombre){}
    void avanzarPieza(){
        cout<<"Avanzar Caballo"<<endl;
        pos.x+=2;
        pos.y+=1;
    }

};

class Torre:private Pieza
{
    Torre():Pieza(){}
    Torre(string nombre):Pieza(nombre){}
    void avanzarPieza(bool m,int x){
        cout<<"Avanzar Torre"<<endl;
        if (m==0){
            pos.x+=x;
        }
        else
            pos.y+=x;
    }
};

class Arfil:private Pieza
{
    Arfil():Pieza(){}
    Arfil(string nombre):Pieza(nombre){}
    void avanzaPieza(bool m,int x){
        cout<<"Avanzar Arfil"<<endl;
        if (m==0){
             pos.x+=x;
             pos.y+=x;
        }
        else
            pos.x-=x;
            pos.y-=x;
    }
};

int main()
{
    Posicion p_B(1,1);
    Peon per;
    per.setPosicion(p_B);
    Pieza::piezasActivas++;
    Pieza p;
    p.piezasActivas++;
    cout << Pieza::piezasActivas << endl;
    return 0;
}
