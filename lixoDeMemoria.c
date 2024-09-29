#include <stdio.h>
#include<windows.h>
int main() {
   while (1) {
   unsigned char bytes [10];
   Sleep(1000);
   bytes[0] = 0b00000000;

   for (int i =0; i < 10; i ++) {
      printf("[%2u] %3u", i, bytes[i]);
      printf("\n");
}
}
return 0;
   }