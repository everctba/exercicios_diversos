#include <stdio.h>
int valor_final;
int soma = 0;
int tamanho_final = 10;
int arrey[10] = {1, 4, 2, 3, 4, 5, 6, 9, 3, 2};

int func_some(int arr[], int tam, int soma)
{
   if (tam == 0)
   {
      return soma - 1;
   }
   else
   {
      soma = soma + arr[tam];
      tam = tam - 1;

      return func_some(arr, tam, soma);
   }
}

int main()
{

   // chama função de soma
   valor_final = func_some(arrey, tamanho_final, soma);

   printf("tamanho final = %d\n", valor_final);

   return 0;
}
