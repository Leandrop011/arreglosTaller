#include <stdio.h>
#include "funciones.h"
int main () {
    int num[10], i;
    printf("Por favor Ingrese los 10 Numeros: ");
    for ( i = 0; i < 10; i++)
    {
        printf("\n");
        scanf("%i", &num[i]);
    }
    
    return 0;
}