#include <stdio.h>

int fibonacci(int);

int main(void)
{
    int limite = 10;

    fibonacci(limite);
    return 0;
}

int fibonacci(int limit)
{
    int i, a, b, c = 0;
    for (i = 1; i <= limit; i++)
    {
        c = i / (1 - i - (i * i));

        printf("\nNumero %d", c);
    }
}