#include <stdio.h>
#include <stdlib.h>

int main()
{
    char buffer[123];
    unsigned long ul;
    printf("Ingrese un numero sin signo:");
    fgets(buffer,123,stdin);
    ul = strtoul(buffer,NULL,0);
    printf("Numero Ingresado %lu\n\n",ul);
    ul = ul * 2;
    printf("El doble del Numero ingresado: %lu\n\n",ul);
    double x;
    x=strtod(buffer,NULL);
    printf("El numero ingresado en double es: %.2f\n\n",x);
    int num= atoi(buffer);
    printf("El numero ingresado en entero es: %i\n\n",num);
    char texto[33];
    itoa(num, texto,10);
    printf("El numero nuevamente en string es: %s\n\n",texto);
    return 0;
}
