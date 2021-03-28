#include <stdio.h>
#include "funciones.h"
// se incluye 'funciones.h' donde se encuentra la declaracion o el prototipo 
// de las funciones del programa

int main(void)
{
    int a , b , c = 0;
    int may = 0;

    printf("\nIngresa el valor de A: \n>> ");
    scanf("%d", &a);

    printf("\nIngresa el valor de B: \n>> ");
    scanf("%d", &b);

    printf("\nIngresa el valor de C: \n>> ");
    scanf("%d", &c);

    may = mayor(a , b);
    may = mayor(may, c);

    printf("\nEl numero mayor de los 3 valores ingresados fue: %d \n", may);

    return 0;
}
// Este es el archivo principal que va a ser fusionado con 'funciones.c' en el cual se definieron las 
// funciones previas para ser usadas en el programa