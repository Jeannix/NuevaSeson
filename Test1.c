#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void reads(){
    FILE*fp;
    char buff[255];

    fp = fopen("archivo.txt","r");
    fscanf(fp,"%s",buff);
     printf("1: EL contenido es %s\n",buff);

    //fputs();
    fgets(buff,255,(FILE*)fp);
     printf("2: El contenido es: %s\n",buff);

    fclose(fp);
    }
void writes(){

   FILE *fp;

   fp = fopen("archivo.txt", "w+");

   fputs("Esto es un programa en c.", fp);
   fputs("Esto es una prueba de escribir texto en un archivo usando c.", fp);

   fclose(fp);

}
void rands(){
    int number;
    srand(time(NULL));
    number = rand()%10+1;
    printf("El numero generado es: %i\n\n",number);
    if (number > 5)
        writes();
    else
        reads();
}
int main()
{
    rands();
    return 0;
}
