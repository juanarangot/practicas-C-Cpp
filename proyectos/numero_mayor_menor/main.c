#include <stdio.h>
#include "funciones.h"
// se incluye 'funciones.h' donde se encuentra las declaraciones o el prototipo 
// de las funciones del programa

int main(void)
{
    int a , b , c = 0;
    int may, men = 0;

    printf("\nIngresa el valor de A: \n>> ");
    scanf("%d", &a);

    printf("\nIngresa el valor de B: \n>> ");
    scanf("%d", &b);

    printf("\nIngresa el valor de C: \n>> ");
    scanf("%d", &c);

    may = mayor(a , b);
    may = mayor(may, c);
    //ejecucion de las fucniones y asignacion del respectivo valor
    men = menor(a, b);
    men = menor(men, c);

    printf("\nEl numero MAYOR de los 3 valores ingresados fue: %d \n", may);

    printf("\nEl numero MENOR de los 3 valores ingresados fue: %d \n", men);

    return 0;
}
// Este es el archivo principal que va a ser fusionado con 'funciones.c' en el cual se definieron las 
// funciones previas para ser usadas en el programa

// Para fusionar y enlazar los archivos en un mismo ejecutable, se usa el comando 'cc'
// de la siguiente forma: 'cc archivo.c archivo2.c -o ejecutable.exe' (y se genera un ejecutable con ambos archivos)