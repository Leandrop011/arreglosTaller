#include <stdio.h>
#include "funciones.h"

int num[10], i, opc;
int *ptr = num;

int main () {
    
    printf("Por favor Ingrese los 10 Numeros: ");
    for ( i = 0; i < 10; i++)
    {
        printf("\n");
        scanf("%i", (ptr + i));
    }
    do
    {
        printf("\n==============MENU=============");
        printf("\n1. Sacar la Media de los 10 Numeros: ");
        printf("\n2. Sacar la Mediana de los 10 Numeros : ");
        printf("\n3. Sacar la Moda de los 10 Numeros: ");
        printf("\n4. Sacar Numero alto y Bajo: ");
        printf("\n5. Salir ");
        printf("\nPor favor Ingrese que desea hacer: ");
        scanf("%i", &opc);
        switch (opc)
        {
        case 1:
            sacarMedia(num);
        break;
        case 2:
           sacarMediana(num);
        break;
        case 3:
             sacarModa(num);
        break;
        case 4:
            sacarNumAltYnumBaj(num);
        break;
        case 5:
        break;
        default:
        printf("\nEsa Opcion en el Menu no se Enceuntra :(");
        break;
        }
    } while ( opc != 5);
    printf("\nSaliendo.....:)");
    
    return 0;
}