#include "Functions_S.h"

ofstream myfile;
int sum(int a,int b)
{
    int res=a+b;
    myfile.open("soluciones.txt");
    myfile<<res<<endl;
    myfile.close();
}
double sum(double c, double d){return c-d;}
void sum(std::string g,std::string f){
    g+=f;
    cout << g << endl;
}
int resta(int a,int b){return a+b;}
double resta(double c, double d){return c-d;}
//void resta(std::string g, std::string f){
//    std::string g1=g-f;
//    cout<<g1<<endl;
//}
void print(int a[][4]){
   for(int i=0;i<4;++i){
       for(int j;j<4;++j){
           cout<<a[i][j];
       }
       cout<<endl;
   }
}
void sumdemat(int a[][4],int b[][4]){
    for(int i=0;i<4;++i){
        for(int j=0;i<4;++j){
            a[i][j]+=b[i][j];
        }
    }
    print(a);
}
void restdemat( int a[][4],int b[][4]){
    for(int i=0;i<4;++i){
        for(int j=0;i<4;++j){
            a[i][j]-=b[i][j];
        }
    }
    print(a);
}

void multdemat(int a[][4],int b[][4]){
    int c[4][4];
     for (int i=1;i<4;i++){
        for (int j=1;j<4;j++){
            for (int k=1;k<4;k++){
                c[i][j]+=a[i][k]*b[k][j];
            }
       }
    }
    print(c);
}

void potenciademat(int a[][4],int potenci){
    for(int i=0;i<2;++i){
        for(int j=0;j<potenci;++j){
            a[i][i]*=a[i][i];
        }
    }

}
template <typename T, typename T2>
T recur(T a, T2 b){
    if(b==1)
        return a;
    if(b==0)
        return 1;
    else
        return a*(recur(a,b-1));
}

int AND(int op1, int op2){return op1&op2;}
int OR(int op1, int op2){return op1|op2;}
int XOR(int op1, int op2){return op1^op2;}
int NOT(int op1){return ~op1;}

void leer(){
    string line;
    bool comprobar=false;
    while(comprobar==false){
        ifstream mylife ("operaciones.txt");
        if(mylife.is_open())
        {
            while(getline(mylife,line))
            {
                cout << line << '\n';
            }
            mylife.close();
            system("pause");
            system("cls");
        }
}
}
void escribir(){
    ofstream myfile;
    myfile.open("operaciones.txt");
    myfile << "suma(6,1)";
    myfile.close();
}
