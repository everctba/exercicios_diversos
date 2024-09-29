#include <stdio.h>
#include<windows.h>
int main() {
   while (1) {
   unsigned char bytes [4] = {};
   
   bytes[0] = 0b00001110;
   bytes[1] = 14;
   bytes[2] = 0xE;

   for (int i =0; i < 4; i ++) {
      printf("[%2u] %2X", i, bytes[i]);
      printf("  - [%2u] %3u", i, bytes[i]);
      printf("\n");
     
}
 Sleep(5000);
}
return 0;
   }