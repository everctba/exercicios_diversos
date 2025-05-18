#include <stdio.h>


int func_a();
int main (){
    int numero_a = 8;
    int *ptr_do_numero = &numero_a;
    int o_numero = 0;
    printf("numero A pre = %d\n", numero_a);
    printf("Ponteitor do A  = %d\n", *ptr_do_numero);
    printf("Endereço do A  = %d\n", &numero_a);
    o_numero = func_a(numero_a,ptr_do_numero );

    printf("Numero da Funcao = %d\n", o_numero);
    printf("numor A pos por variavel = %d\n", numero_a);
    printf("numor A pos por ponteiro = %d\n", *ptr_do_numero);

    return 0;
}

int func_a(int nunnun, int *ptr)
{
        *ptr = nunnun+1;
//    nunnun = nunnun+1;

    return ptr;
}
