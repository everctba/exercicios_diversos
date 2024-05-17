#include<stdio.h>
#include<windows.h>
int jogada = 0;
char player_atual;
char key = 'A';
char a = 65, b = 66, c = 67, d = 68;

char nomePlayer[] = "player1";
int main() {


 
while (jogada<50) { 

   


   jogada = jogada +1;

   if (jogada%3 == 0) {
      nomePlayer[6] = '1';
      player_atual = a;

   }
    if (jogada%3 == 1) {
      nomePlayer[6] = '2';
      player_atual = b;
   }
    if (jogada%3 == 2) {
      nomePlayer[6] = '3';
      player_atual = c;
   }
   // versão de string
   printf("\n %s ", nomePlayer);

   //Versão de caracters
   printf("Player Atual = %c\n",player_atual );

   Sleep(500);

   printf("Jogada Atual = %d\n",jogada );

}
 printf("TERMINOU!\n" );







   return 0;
}