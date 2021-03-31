#include <stdio.h>

void fibonacci(int);

int main(void)
{
    int limite = 10;

    fibonacci(limite);
    return 0;
}

void fibonacci(int n){    
    static int n1=0,n2=1,n3;    
    if(n>0)
    {
        n3 = n1 + n2;    
        n1 = n2;    
        n2 = n3;    
        printf("Numero: %d \n",n3);    
        fibonacci(n-1);    
    }   
}