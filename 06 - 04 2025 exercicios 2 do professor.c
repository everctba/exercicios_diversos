#include<stdio.h>
#include<string.h>

int main(){
int i, j, k, n;
n = 5;
i = 1;

while (i <= n){
   j = 1;
   while (j <= i){
      k = j*i;
      printf(" %d",k);
   j = j + 1;
   }
   printf("\n");
   i = i + 1;
   }

return 0;
}
