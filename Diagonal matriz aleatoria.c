
#include<stdio.h>
#include<stdlib.h>
#include<stdlib.h>
#include<time.h>

#define TAM 10

//Matriz
int main(){
    //srand(time(NULL));
    char caracter = 254;
    int i,j,mat[5][5], matlimpa[5][5];
    //Alimenta amatrix
     for(i=0;i<5;i++)
     {
       for(j=0;j<5;j++)
       {
        mat[i][j] = rand() %9;
        printf("%1d ", mat[i][j]);


         if (i==j){
            matlimpa[i][j] = mat[i][j];
            //printf("%2d ", mat[i][j]);
         }
         else {
             matlimpa[i][j] = 0;
         }

       }
       printf("\n");

     }

     printf("\n");

     for(i=0;i<5;i++)
     {
       for(j=0;j<5;j++)
       {
           if(i==j){
            printf("%1d ", mat[i][j]);
           }
            else{
                printf("  ");
            }
       }
        printf("\n");
     }



return 0;
}
