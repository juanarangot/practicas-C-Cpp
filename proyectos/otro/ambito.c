#include <stdio.h>

int my_global = 150;    // variable global que va a tener acceso en todo el archivo

int main(void)
{
    int main_var = 80;
    int result = 0;

    result = my_global + main_var;
    printf("\nGLOBAL inicial: %d", my_global);
    printf("\nSUMA DE: %d + %d = %d\n", my_global, main_var, result);

    // Bloque de codigo #1 (tiene acceso a los valores globales y los contenidos en la funcion 'main')
    {
        printf("\n-----   BLOQUE #1   -----");
        int my_global = 500;    // se asigna un nuevo valor local a la variable global
                            // pero esta fuera del bloque de codigo tiene su valor inicial

        printf("\nVariable local del BLOQUE #1: %d\n", my_global);  // muestra el valor local ignorando el global

        // Bloque de codigo #2 (tiene acceso a los valores globales y dentro del bloque #1 )
        {
            printf("\n-----   BLOQUE #2   -----");
            int my_global = 50;
            printf("\nVariable local BLOQUE #2: %d\n", my_global);    // muestra el valor local ignorando el global
        }
    }
    printf("\nEl valor global de mi variable global es: %d\n", my_global);
    return 0;
}
