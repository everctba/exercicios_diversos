#include <stdio.h>

int numeros[10];
int a;
int i=0;
int j=0;
int tam=0;
int total=0;
int media = 0;
int resultado = 0;
int temp;
int meioTamanho;
int parOuImpar;
int mediavetor() {
	
	tam = sizeof(numeros) / sizeof(numeros[0]);
	printf("Estou na funcão vetor media = %d\n", tam);
	for (i=0; i<10; i++){
   		total = total+numeros[i];
		resultado =total/ tam; 
		
	
	}
	printf("Total = %d\n", total);
	printf("media é = %d\n", resultado);
}

int medianadovetor() {
	printf("Estou na funcão DMEDIANA!\n");
	
	for (i=0; i<10; i++) {
//	    printf("Entrou no For\n");
		for (j=0; j<10-1; j++) {
//		    printf("J[i] = %4d ", numeros[j] ); 
//		    printf("J[i+1] = %4d  ", numeros[j+1] );
//		    printf("\n ");
//		    printf("Jatual = %4d ", j ); 
		    printf("\n ");
			if (numeros[j] > numeros[j+1]){
				temp = numeros[j];	
				numeros[j] = numeros[j+1];
				numeros[j+1] = temp;
			}
		
		
		}
			
	}
	printf("Resultado lista: \n");
	for (i=0; i<10; i++) 
	{
		printf("%4d\n", numeros[i]);
	}
	
	tam = sizeof(numeros) / sizeof(numeros[0]);
	meioTamanho = tam/2;
	
	parOuImpar =  meioTamanho % 2;
	printf("VALOR PAR OU IMPAR? = %4d\n", parOuImpar);	
	
	if (parOuImpar == 1){
	printf("Mediana = %4d\n", numeros[((meioTamanho-1) + meioTamanho)/2]);	
	}
	else{
		printf("Mediana = %4d\n", numeros[meioTamanho]);	
	}
	

		
	
	}
	




int main() {
	
	
	for (i=0; i<10; i++){
		printf("Digite 10 números = ");
//		printf("Enter first number: ");
//      	scanf("%d", &a);
		scanf("%d", &numeros[i]);
	
	}
	
	for (i=0; i<10; i++){
		
		printf("seu vetor [i] e =  %d \n", numeros[i]);
		
	}

//	mediavetor();
	medianadovetor();
	
	return 0;
}
// ler imput,



// calcular media e a mediana mediana achar ordenar e  achar os números do meio soma e divide por 2 se for par se for impar pega o número.
//moda é o número que mais aparece...
