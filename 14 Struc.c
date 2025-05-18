#include <stdio.h>

struct Struct_1 {
    int x;
    int y;
};
//struct Struct_1;

typedef struct{
   int x;
   int y;

}Struct_2;
int main (){

    //declarar a Struct com um apelido pra pode rusa-la
   struct Struct_1 p_1;
   Struct_2 p_2;
    //define o valor das posições da Struct
    p_1.x = 6;
    p_1.y = 8;
    printf("Struct 1 x = %d\n", p_1.x);
    printf("Struct 1 x = %d\n", p_1.y);

    //define o valor da typedef
     p_2.x = 3;
     p_2.y = 4;
     printf("Typedef 1 x = %d\n", p_2.x);
     printf("Typedef 1 x = %d\n", p_2.y);
return 0;
}
