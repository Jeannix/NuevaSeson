#include <iostream>
#include <string>

using namespace std;
class Posicion{
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
    void printP(){
        cout<<x<<y<<endl;
    }
};
class Dama{
private:
    bool flag;
    Posicion pos;
    string color;
public:
    Dama(){
        flag=0;
        color="Negra";
    }
    Dama(Posicion p, string c2){
        pos=p;
        color=c2;
    }
    Dama(Dama &x){
        flag=x.flag;
        pos=x.pos;
        color=x.color;
    }
    int setPosx(int x2){pos.x=x2;return pos.x;}
    int setPosy(int y2){pos.y=y2;return pos.y;}
    string setColor(string color1){color=color1;return color;}
    void printCol(){
        cout<<color<<endl;
    }
    int getPosx(){return pos.x;}
    int getPosy(){return pos.y;}
    void changeP(int a_1,int b_1){
        pos.x+=a_1;
        pos.y+=b_1;
    }
};
class Tablero{
private:
    //int **mat,N_c,N_f;
    Dama damas[8][8];
public:
    Tablero(){

    }
};
int main()
{
    Tablero tab;
    Dama D;
    D.printCol();
    cout << D.getPosx() << endl;
    cout << D.getPosy() << endl;
    return 0;
}
