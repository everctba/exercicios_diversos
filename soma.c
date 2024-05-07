#include <stdio.h>
int resultado;
int a = 10;
int b = 5;

int soma (int a, int b) {
    int soma = 0;
    soma = a + b;
    return (soma);
}

int main()
{
    
    resultado = soma(a,b);
    printf("soma = %d", resultado);

    return 0;
}
