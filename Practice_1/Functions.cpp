#include "Functions.h"

int sum(int a,int b){return a+b;}
double sum(double c, double d){return c-d;}
void sum(std::string g, std::string f){
    std::string g1=g+f;
    cout<<g1<<endl;
}
int resta(int a,int b){return a+b;}
double resta(double c, double d){return c-d;}
//void resta(std::string g, std::string f){
//    std::string g1=g-f;
//    cout<<g1<<endl;
//}
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

void reads(){
    FILE*fp;
    char buff[255];

    fp = fopen("operaciones.txt","r");
    fscanf(fp,"%s",buff);

     printf("1: EL contenido es %s\n",buff);
    fgets(buff,255,(FILE*)fp);
     printf("2: El contenido es: %s\n",buff);

    fclose(fp);
    }
void writes(){
    FILE*fp;

    fp=fopen("respuesta.txt", "w+");
    fputs("Esto es un programa en c.", fp);
    fputs("Esto es una prueba de escribir texto en un archivo usando c.", fp);

    fclose(fp);
    }
//void rands(){
//    int number;
//    srand(time(NULL));
//    number = rand()%10+1;
//    printf("El numero generado es: %i\n\n",number);
//    if (number > 5)
//        writes();
//    else
//        reads();
//}
