
#include<stdio.h>
#include<stdlib.h>
#include<stdlib.h>
#include<time.h>

#define TAM 10

//Matriz
int main(){
    srand(time(NULL));
    int i,j,mat[3][4];
    //Alimenta amatrix
     for(i=0;i<3;i++)
     {
       for(j=0;j<4;j++)
       {
         mat[i][j] = rand() %100;
         printf("%2d ", mat[i][j]);

       }
       printf("\n");
     }
return 0;
}
