
#include<stdio.h>
#include<string.h>

int main() {
    int tamanho, i;
    char nome[30];
    char *p; //ponteiro para caractere.

    printf("\nDigite o nome...> ");
    scanf("%s",&nome); //AQUI EU TINHA ERRADO o % por &
    //gets(nome); // ou pode ser lido com gets
    // printf("\nNome: %c\n ", nome);
    tamanho = strlen(nome);
    //printf("\ntamanho: %d\n ",  tamanho);
    //strlen - tring length - devolve a qtde de caracteres
    printf("\nO nome.. %s, com %d caractere", nome, tamanho);

    //usando ponteiro para imprimir o texto
    p = &nome;
    while (*p != '\0') {
        printf("\nletra: %c, posicao: %p", *p, p);
        p++;


    }
    //outra forma de percorrer o nom
    //como é um vetor de caracteres
    for (int i=0; i<tamanho; i++){
        printf("\n %c ", nome[i]);
    }

    return 0;
}
