#include<locale.h>
#include<stdlib.h>
#include<stdio.h>

#define TAM 10
#define FALSE 0
#define TRUE 1

#include<conio.h>
int vet[TAM];

int cont;

void inicializavetor() {
	for(int i=0; i<TAM; i++){
		vet[i] = 0;
	}
}


void listar() {
	system("cls");
	printf("=== LITAGEM ===\n");
	for (short i=0; i<TAM; i++) {
		printf("\nvet[%d]..%p: %d", i , &vet[i], vet[i]);
	}
	printf("\n\n");
	getch();	
}

void incluir() {
	system("cls");
	int flag, i;
	printf("=== INCLUSÃO ===\n");
	
	flag = FALSE;
	for (i=0; i<TAM && flag == FALSE; i++){
		if (vet[i] == 0){
			flag = TRUE;
		}
	}
	
	if (flag == TRUE) {
		i--;
		vet[i] = ++cont;
		printf("\nValor incluído: %d", cont);
	}
	else {
		printf("\nVetor Cheio");
	}
	getch();
}

void excluir (){
	
	system("cls");
	printf("=== EXCLUSÃO ===\n");
	
	//aqui é pra fazer em casa: pegar o último elemento e colocar zero pra ficar "excluido a posição"
	getch();
}

 int main () {
 	
 	setlocale(LC_ALL, "Portuguese");
 	int op;
 	inicializavetor();
 	 
 	 do{
 	 	system("cls");
 	 	printf("\n1. Incluir");
 	 	printf("\n2. Excluir");
 	 	printf("\n3. Listar");
 	 	printf("\n4. Sair");
 	 	printf("\nDigite uma opção...:");
 	 	scanf("%d", &op);
 	 	switch(op){
 	 		case 1: incluir();
 	 			break;
 	 		case 2: excluir();
 	 			break;
 	 		case 3: listar();
 	 			break;
 	 		case 4: break; // sai do laço, só para não mostrar erro
 	 		default: 
 				printf("\n Digite um número válido de 1...4");
		  }
 	 	
	} while (op !=4);
 }
/*
%d = vetor
%p = é ponteiro
%d = é digito

getch(); pega um caractere digitado, mas da pra usar pra parar a tela.

pré incremento e pós incrmeento 
a = 10
b = a++
 --- a = 11
 --- b = 10 
-------
 a = 10 
 b = ++a
--- a = 11
--- b = 11

vai cair na prova...
while (x<10) {				//usamos para quando não sabemos quantos passos vamos precisar
}								pode nao ser executado se a variavel não for verdadeira, pode ser executado uma vez apenas ou mais e uma vez.
								é necessário especificar uma saida ou o programa rodara até a energia acaabar ou um pouse break pelo systema fechando o processo.
for (x<0; X<10; x++){ 		//usamos quando sabemos quantos passos serão necessários
}								for é composto de 3 elementos inicialização condição e passos.
								no própio cabeçario já tem todas as informaçãoes
do { 						//usamos para quando não sabemos quantos passos vamos precisar
{while (x<10);					como a condição está no final do laço, isso ganante que pelo menos uma vez será executado


// dentro do sitch case defaout significa que é a opção que é representa que não teve nem um caso igual e a mensagem de padrão generia entra nesse caso.
*/
