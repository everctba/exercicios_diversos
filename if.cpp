#include <stdio.h>

int main()
{

   int num;

   int var = 0;
   if (var==0){
       printf("valor 0");
       var=var+1;
   }
   else {
       printf("valor nao é zero");
       var=var -1;
   }

   scanf("%d", &num); 
   return 0;
}
