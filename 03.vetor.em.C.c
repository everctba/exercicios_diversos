#include<stdio.h>
int vect1[4]={12,13,14,15};

int main(){

    int i, num;

    int vect1[4];
    vect1[0]= 12;
    vect1[1]= 13;
    vect1[2]= 14;
    vect1[3]= 15;

    escreve();
    printf("Hello World!2");
    printf("\nDigite um número para tabuada: ");
    scanf("%d", &num);

    //Teste vetor
    printaVetor();
    //printf("\nteste vetor: %d",vect1[3]);

    for (i = 1; i <= 10; i++){
        printf("\n%d * &d = %d", num, i, (num*i));
    }
   return 0;
}

void escreve(){
    printf("foi \n");
    return 0;
}

int printaVetor(){
    printf("\nentrou na func printaVetor");
    int vect2[4];
    vect2[0]= 21;
    vect2[1]= 20;
    vect2[2]= 19;
    vect2[3]= 18;
    printf("\nteste vetor2: %d",vect2[3]);
    printf("\nteste vetor1: %d",vect1[3]);

    return 0;
}
