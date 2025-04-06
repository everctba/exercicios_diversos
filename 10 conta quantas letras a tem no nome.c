#include<stdio.h>
#include<string.h>

#include<math.h>
int main()
{
    int valor;
    int i = 0;
    int quantidade_de_a = 0;
    char nome[30];

    printf("\nDigite o nome = ");
    scanf("%s", nome);
    printf("\nNome digitado = %s",nome );
    valor = sizeof(nome);
    printf("\nVALOR = %d",valor );

    for(i=0;nome[i]!='\0';i++) {
//        printf("\naaaaaaaame[i]");
        printf("\n%c",nome[i]);

        if(nome[i]=='a'){
//             printf("\nEntrou no A");
            quantidade_de_a = quantidade_de_a+1;
        }
    }
     printf("\n quantidade de A = %d",quantidade_de_a);
//    for (i==0;i<=valor;i++){
//        printf("\n%c",nome[i]);
//        i++;
//    }
    return 0;
}
