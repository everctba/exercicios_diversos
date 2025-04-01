
#include<stdio.h>
#include<stdlib.h>
#include<stdlib.h>
#include<time.h>

#define TAM 10

//Ordena��o de vetores
int main(){
    srand(time(NULL));

    int i,j,aux,v[TAM];
    //Aliment ao vetor com valor aleat�rio
     for(i=0;i<TAM;i++){
        v[i] = rand() % 100;
     }
     //M�TODO BOLHA
    for(i=0;i<5;i++)
    {
       //printf("\nentrou for i");
        for(j=i+1;j<5;j++)
        {
        //printf("\nentrou for j");
        if(v[i]<v[j])
            {

             aux = v[i];
            v[i] = v[j];
            v[j] = aux;
            //printf("\n If j = %d", v[j]);
            }
        }

    }
     //Impress�o do vetor
     for(i=0;i<5;i++){
        printf("\nv[%d] = %d",i, v[i]);
     }
}
