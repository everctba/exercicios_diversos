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
		printf("\nValor inclu�do: %d", cont);
	}
	else {
		printf("\nVetor Cheio");
	}
	getch();
}

void excluir (){
	
	system("cls");
	printf("=== EXCLUS�O ===\n");
	
	//aqui � pra fazer em casa: pegar o último elemento e colocar zero pra ficar "excluido a posi��o"
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
 	 		case 4: break; // sai do la�o, s� para n�o mostrar erro
 	 		default: 
 				printf("\n Digite um número válido de 1...4");
		  }
 	 	
	} while (op !=4);
 }
/*
%d = vetor
%p = � ponteiro
%d = � digito

getch(); pega um caractere digitado, mas da pra usar pra parar a tela.

pr� incremento e p�s incrmeento 
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
while (x<10) {				//usamos para quando n�o sabemos quantos passos vamos precisar
}								pode nao ser executado se a variavel n�o for verdadeira, pode ser executado uma vez apenas ou mais e uma vez.
								� necess�rio especificar uma saida ou o programa rodara at� a energia acaabar ou um pouse break pelo systema fechando o processo.
for (x<0; X<10; x++){ 		//usamos quando sabemos quantos passos ser�o necess�rios
}								for � composto de 3 elementos inicializa��o condi��o e passos.
								no pr�pio cabe�ario j� tem todas as informa��oes
do { 						//usamos para quando n�o sabemos quantos passos vamos precisar
{while (x<10);					como a condi��o est� no final do la�o, isso ganante que pelo menos uma vez ser� executado


// dentro do sitch case defaout significa que � a op��o que � representa que n�o teve nem um caso igual e a mensagem de padr�o generia entra nesse caso.
*/
