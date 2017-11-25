#include <iostream>
#include <set>
#include <fstream>
#include <stdexcept>

using namespace std;
enum tipoCalle {AVENIDA,CALLE,PASAJE,GIRON,CARRETERA};
class Punto
{
private:
    int x,y;
    friend class Calle;
public:
    Punto(){x=0;y=0;}
    Punto(int x,int y){this->x=x;this->y=y;}
    friend ostream& operator<<(ostream& os, const Punto c){os << c.x << ',' << c.y;return os;}
};
class Calle
{
public:
    tipoCalle tipo;
    Calle(){}
    Calle(Punto punto1, Punto punto2){this->punto1=punto1;this->punto2=punto2;}
    void _setnombre(string nombre){this->nombre=nombre;}
    void _setdistrito(string distrito){this->distrito=distrito;}
    void _setpunto1(Punto p){this->punto1=p;}
    void _setpunto2(Punto p){this->punto2=p;}
    string get_nombre(){return this->nombre;}
    string get_distrito(){return this->distrito;}
    Punto get_punto1(){return this->punto1;}
    Punto get_punto2(){return this->punto2;}
    bool operator ==(const Calle c){if(this->distrito==c.distrito&&this->nombre==c.nombre&&this->punto1.x==c.punto1.x&&this->punto1.y==c.punto1.y&&this->punto2.x==c.punto2.x&&this->punto2.y==c.punto2.y)return true;}
    bool operator !=(const Calle c){if(this->distrito!=c.distrito||this->nombre!=c.nombre||this->punto1.x!=c.punto1.x||this->punto1.y!=c.punto1.y||this->punto2.x!=c.punto2.x||this->punto2.y!=c.punto2.y)return true;}
    bool operator <(const Calle& c)const{return true;}
    friend ostream& operator<<(ostream& os, const Calle c){os << c.nombre << '-' << '>' << c.distrito << " Y sus Puntos son: " << c.punto1 << '/' << c.punto2; return os;}
private:
    Punto punto1;
    Punto punto2;
    string nombre;
    string distrito;
};
class Distrito
{
public:
    Distrito(){}
    Calle getCalle(string nombre){set<Calle>::iterator it;for(it=calles.begin();it!=calles.end()){if ((*it)==nombre)return Calle;}}
    string nombre;
    void _addcalle(Calle c){calles.insert(c);}
    void _imprimirCalles(){set<Calle>::iterator it;for(it=calles.begin();it!=calles.end();it++)cout<<(*it)<<endl;}
    void _guardar_distrito(char* archivo){ofstream destino(archivo);destino<<this->nombre<<endl;set<Calle>::iterator it;for(it=calles.begin();it!=calles.end();it++)destino<<(*it)<<endl;}
    void _recuperar_distrito(char* archivo){ifstream origen(archivo);string nombreDistrito; while(! origen.eof() ){std::getline(origen, nombreDistrito);cout<<nombreDistrito<<endl;}}

private:
    set<Calle> calles;
};
int main()
{
    Punto p1(0,0);
    Punto p2(2,1);
    Punto _a(12,13);
    Punto _b(31,21);
    Calle c;
    c._setnombre("EE U_U");
    c._setdistrito("Jose Luis");
    c._setpunto1(p1);
    c._setpunto2(p2);
    c.tipo=CALLE;
    Calle e;
    e._setnombre("Dolores");
    e._setdistrito("Jose Luis");
    e._setpunto1(_a);
    e._setpunto2(_b);
    e.tipo=AVENIDA;
    if(c==e){cout<<"Las Calles son iguales"<<endl;}
        else
        {cout<<"Las Calles son diferentes"<<endl;}
    cout<<c<<endl;
    cout<<e<<endl;
    Distrito x;
    x.nombre = "Cercado";
    x._addcalle(c);
    x._addcalle(e);
    x._imprimirCalles();
//    try
//    {
//        cout<<x.getCalle("Dolores");
//    }
//    catch(std::runtime_error &error){
//        cerr<<"Calle inexistente"<<endl;
//    }
//    x._guardar_distrito("D:\\Downloads.txt");
//    x._recuperar_distrito("D:\\Downloads.txt");
    return 0;
}
