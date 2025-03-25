#include<stdio.h>
#include<stdlib.h>

//vetor para receber valores aleatorios
int main(){

    int v[10];
    int i, num;

    for (i=0; i<10; i++){
        num = rand();
        num = num % 100; //aqui vc pega o resto e faz com que o numero aleatório retorne apenas um valor com no máximo 100 infos.
        v[i] = num;
        printf("\nv[%d]...: %d", i, v[i]);
    }

return 0;
}

// multiplica * -1 pra inverter sinal, ai vc pode deixar um usuário negativo, tirar a posição dele e depois multiplicar po -1 e gfazer com que ele volte pra posição que estava !!!

