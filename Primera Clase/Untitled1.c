#include <stdio.h>
#include "Untitled1.h"

void hello(const char* nombre){
    printf("Hello, %s!\n",nombre);
}
int main(void)
{
    printf("Hello World\n");
    printf("Dos mas dos es %d\n",4);
    printf("Dos mas dos es %f\n",4.0);
    hello("Jean");
    return 0;
}
