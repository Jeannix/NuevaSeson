#include "Functions_C.h"

void comparar(string var, double b,double c){
   if(var =="sum"){
       double sol=sum(b,c);
       cout<<"suma"<<endl;
   }
   if(var =="resta"){
       double sol=resta(b,c);
       cout<<"resta"<<endl;
   }
}
