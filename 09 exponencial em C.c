#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    int numero_digitado = 9;
    int numero_elevado;
    int resultado;

    printf("\nseu numero é? ");
    scanf("%d", &numero_digitado);
    numero_elevado = numero_digitado+1;
    printf("\nseu numero elevado a =  %d",numero_elevado);
    resultado = pow(numero_digitado,numero_elevado);
    printf("\nseu Resultado =  %d",resultado);



    return 0;
}
