#include "stdio.h"
#define TAM 5
int main() {
   int num;
	int temp = 0;
	int i = 0;
	int j = 0;
	int lista [TAM] = {50,20,60,30,10};
// 	lista[0] = 50;
// 	lista[1] = 20;
// 	lista[2] = 60;
// 	lista[3] = 30;
// 	lista[4] = 10;
		
	printf("Resultado lista ORIGINAL: \n ");
	for (i=0; i<5; i++) 
	{
		printf("%4d", lista[i]);
	}
	printf("\n");
	
	for (i=0; i<5; i++) {
	    printf("Entrou no i; %d\n",i);
		for (j=0; j<5-1; j++) {
		    printf("J[i] = %4d ", lista[j] ); 
		    printf("J[i+1] = %4d  ", lista[j+1] );
		    printf("\n ");
		    printf("Jatual = %4d ", j ); 
		    printf("\n ");
			if (lista[j] < lista[j+1]){
				temp = lista[j];	
				lista[j] = lista[j+1];
				lista[j+1] = temp;
			}
		
		
		}
			
	}
	printf("Resultado lista:  ");
	for (i=0; i<5; i++) 
	{
		printf("%4d", lista[i]);
	}
	
	scanf("%d", &num);
	return 0;
}