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
    bool comprobar_equipo=0;
private:
    const string nombre_p;
    string color_p;
public:
    Pieza():nombre_p(){}
    Pieza(string nombre):nombre_p(nombre){}
    Pieza(string nombre,string color):nombre_p(nombre),color_p(color){}
    static int piezasActivas;
    const string getNombre(){return nombre_p;}
    Posicion getPosicion(){
        return pos;
    }
    void setPosicion(Posicion pos_1){
        pos.x=pos_1.x;
        pos.y=pos_1.y;
    }
    void setPosicion(int x1, int y1){
        pos.x=x1;
        pos.y=y1;
    }
    virtual char dibujarPieza(){
        return '-';
    }
    void borrarPieza(){
        cout<<" ";
    }
    virtual void avanzarPieza(){
        borrarPieza();
        cout<<"Avanzar Pieza"<<endl;
        pos.x++;
        dibujarPieza();
    }
    void equipo(Pieza p1, Pieza p2){
        if (p1.color_p!=p2.color_p)
            comprobar_equipo=0;
    }
    void comerPieza(Pieza p1, Pieza p2){
        if (comprobar_equipo==0&((p1.pos.x==p2.pos.x)&(p1.pos.y==p2.pos.y)))
            p2.borrarPieza();
    }
};
int Pieza::piezasActivas=0;

class Peon:public Pieza
{
public:
    Peon():Pieza(){}
    Peon(string nombre):Pieza(nombre){}
    Peon(string nombre,string color):Pieza(nombre,color){}
    void avanzarPieza(){
        cout<<"Avanzar Peon"<<endl;
        pos.y++;
    }
    char dibujarPieza(){
        return 'X';
    }
};

class Caballo:private Pieza
{
    Caballo():Pieza(){}
    Caballo(string nombre):Pieza(nombre){}
    Caballo(string nombre,string color):Pieza(nombre,color){}
    void avanzarPieza(){
        cout<<"Avanzar Caballo"<<endl;
        pos.x+=2;
        pos.y+=1;
    }
    char dibujarPieza(){
        return 'L';
    }

};

class Torre:private Pieza
{
    Torre():Pieza(){}
    Torre(string nombre):Pieza(nombre){}
    Torre(string nombre,string color):Pieza(nombre,color){}
    void avanzarPieza(bool m,int x){
        cout<<"Avanzar Torre"<<endl;
        if (m==0){
            pos.x+=x;
        }
        else
            pos.y+=x;
    }
    char dibujarPieza(){
        return 'T';
    }
};

class Arfil:private Pieza
{
    Arfil():Pieza(){}
    Arfil(string nombre):Pieza(nombre){}
    Arfil(string nombre,string color):Pieza(nombre,color){}
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
    char dibujarPieza(){
        return 'A';
    }
};

class Tablero:public Pieza{
    public:
    Pieza mat[8][8];
    Tablero(){
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                mat[i][j].setPosicion(i,j);
            }
        }
    }
    void imprimirmat(){
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
//            if(i%2==0)
//            cout<<" ";
//            else
//                cout<<"| ";
            cout<<mat[i][j].dibujarPieza();
        }
    cout<<endl;
        }
    }
    void imprimirmat(Peon peones){
        cout<<mat[1][1].dibujarPieza();
        cout<<peones.dibujarPieza();
    }
    void avanzarPieza(Posicion po){
        po=pos;
        Pieza p("pepe","Blanco");
        Pieza *pp=&p;
        p.dibujarPieza();
        pp->avanzarPieza();
        p.dibujarPieza();
    }
};

int main()
{
    Posicion p_B(1,1);
    Peon per;
    per.setPosicion(p_B);
    Pieza::piezasActivas++;
    Tablero T;
    Peon peones;
    T.imprimirmat();
    T.imprimirmat(peones);
    T.avanzarPieza(p_B);
    T.imprimirmat(peones);
    T.imprimirmat();
    cout << Pieza::piezasActivas << endl;
    return 0;
}
