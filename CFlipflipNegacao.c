#include "stdio.h"
#include<windows.h>
#include <stdbool.h>

bool var = true;
int jogada = 1;
bool verdade = true;

int main() {

   while (jogada<50) { 
      
      //printf("Dentro do wile");

      if (var) {
         // printf("Valor verdade = ", &verdade );
         verdade = !verdade;
         //printf(&verdade );
      };
      if (verdade == true) {
         printf("VERDADE\n");
      }
      else{
         printf("FALSE\n");
      };
    
      Sleep(500);

      }


 return 0;
}