#include <stdio.h>
#include <math.h>

int cuadrado(int);
int cubo(int);
int par_impar(int);
int positivo_negativo(int);

int main(void)
{
    int numero = 0;

    printf("\nIngresa un valor numerico: \n>> ");
    scanf("%d", &numero);

    printf("\nEl cuadrado de %d es: '%d'\n", numero, cuadrado(numero));
    printf("\nEl cubo de %d es: '%d'\n", numero, cubo(numero));
    par_impar(numero);
    positivo_negativo(numero);

    return 0;
}


int cuadrado(int x)
{
    return x * x;
}

int cubo(int x)
{
    return x * x * x;
}

int par_impar(int x)
{
    // evalua el valor y determina el resultado que se mostrara por pantalla
    printf("\nEl numero %d es %s\n", x, (x % 2 == 0) ? "PAR" : "IMPAR");
}

int positivo_negativo(int x)
{
    // evalua el valor y determina el resultado que se mostrara por pantalla
    printf("\nEl numero %d es %s\n", x, (x >= 0) ? "POSITIVO" : "NEGATIVO");
}