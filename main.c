#include <stdio.h>
#include "funciones.h"

int main () {
    int num[10], i, opc;
    printf("Por favor Ingrese los 10 Numeros: ");
    for ( i = 0; i < 10; i++)
    {
        printf("\n");
        scanf("%i", &num[i]);
    }
    
    do
    {
        printf("\n==============MENU=============");
        printf("\n1. Sacar la Media de los 10 Numeros: ");
        printf("\n2. Sacar la Mediana de los 10 Numeros : ");
        printf("\n3. Sacar la Moda de los 10 Numeros: ");
        printf("\n4. Salir ");
        printf("\nPor favor Ingrese que desea hacer: ");
        scanf("%i", &opc);
        switch (opc)
        {
        case 1:
            /* code */
        break;
        case 2:
            /* code */
        break;
        case 3:
            /* code */
        break;
        case 4:
            /* code */
        break;
        default:
            break;
        }
    } while ( opc != 5);
    
    
    return 0;
}