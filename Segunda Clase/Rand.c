#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int number;
    srand(time(NULL));
    number = rand()%10+1;
    printf("El numero generado es: %i\n\n",number);
//    if (number > 5)
//        printf("Estas aprobado\n");
//    else
//        printf("Estas desaprobado\n");
    int cont=0;
    char input[123];
    printf("Ingrese un valor, este sera comparado al numero generado: ");
    fgets(input,123,stdin);
    int num=atoi(input);
    while (num != number){
            cont=cont+1;
            printf("Numero Equivocado, sigue intentando:\n");
            fgets(input,132,stdin);
            num=atoi(input);
            if (cont>=3)
            {
                printf("Perdiste! \n");
                break;
            }
    } printf("Ganaste! \n");
    return 0;
}
