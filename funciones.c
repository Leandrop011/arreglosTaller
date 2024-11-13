#include <stdio.h>
#include "funciones.h"
int repetido, moda, reps = 0;
void sacarMedia(int *ptr){
    float result, suma = 0;
    for ( int i = 0; i < 10; i++)
    {
        suma = suma + *(ptr + i);
    }
    result = suma / 10;
    printf("\n===============================");
    printf("\nLa Media o Promedio es: %.2f", result);
    printf("\n===============================");
}

void ordenar(int *ptr, int n) {
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (*(ptr + j) > *(ptr + j + 1)) {
                temp = *(ptr + j);
                *(ptr + j) = *(ptr + j + 1);
                *(ptr + j + 1) = temp;
            }
        }
    }
}
void sacarMediana(int *ptr, int n) {
  ordenar(ptr, 10);

  double mediana  = (*(ptr + n / 2 - 1) + *(ptr + n / 2)) / 2.0;

    printf("\n=============================");
    printf("\nLa Mediana es %.1f\n", mediana);
    printf("=============================\n");
}

void sacarModa(int *ptr){
    printf("\n=============================");
    for (int i = 0; i < 10; i++) {
        repetido = 0;
        for (int j = i + 1; j < 10; j++) {
            if (*(ptr + i) == *(ptr + j)) {
                repetido = repetido + 1;
            }
        }
        if (repetido > reps) {
            reps = repetido;
            moda = *(ptr + i);
        }
        
    }
    if (reps >= 1)
    {
         printf("\nLa Moda es  %i .\n", moda);
         printf("\n=============================");
    }else{
        printf("\n No hay moda");
    }
   
}

void sacarNumAltYnumBaj(int *ptr){
    float max = ptr[10], min = ptr[10];
    
    for (int i = 0; i < 10; i++)
    {
        if (*(ptr + i) > max)
    {
        max = *(ptr + i);
    }else if(*(ptr + i) < min)
    {
        min = *(ptr + i); 
    }
    }
    printf("\n============================");
    printf("\nEl numero mas Alto es: %.2f", max);
    printf("\nEl numero mas Bajo es: %.2f", min);
    printf("\n============================");
}