#include<stdio.h>
#include<stdlib.h>

//vetor para receber valores aleatorios
int main(){

    int v[10];
    int i, num;

    for (i=0; i<10; i++){
        num = rand();
        num = num % 100; //aqui vc pega o resto e faz com que o numero aleat�rio retorne apenas um valor com no m�ximo 100 infos.
        v[i] = num;
        printf("\nv[%d]...: %d", i, v[i]);
    }

return 0;
}

// multiplica * -1 pra inverter sinal, ai vc pode deixar um usu�rio negativo, tirar a posi��o dele e depois multiplicar po -1 e gfazer com que ele volte pra posi��o que estava !!!

