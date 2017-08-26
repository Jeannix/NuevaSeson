#include <stdio.h>

int main()
{
    FILE*fp;
    char buff[255];

    fp = fopen("archivo.txt","r");
    fscanf(fp,"%s",buff);
     printf("1: EL contenido es %s\n",buff);

    //fputs();
    fgets(buff,255,(FILE*)fp);
     printf("2: El contenido es: %s\n",buff);

    fclose(fp);

    return 0;
}
