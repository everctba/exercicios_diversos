#include <stdio.h>
#define TAM 3

char vet[TAM];
char a1;
char a2;
char a3;
short  b;
int c;
long d;
float e ;
double f;
long double  g;
int main(void){
printf("char ......: %d bytes\n", sizeof(char));
printf("short .....: %d bytes\n", sizeof(short));
printf("int .......: %d bytes\n", sizeof(int));
printf("long ......: %d bytes\n", sizeof(long));
printf("float .....: %d bytes\n", sizeof(float));
printf("double ....: %d bytes\n", sizeof(double));
printf("long double: %d bytes\n", sizeof(long double));
printf("char1 .....: %d bytes\n", &a1);
printf("char2 .....: %d bytes\n", &a2);
printf("char3 .....: %d bytes\n", &a3);
printf("charvet0 ..: %d bytes\n", &vet[0]);
printf("charvet1...: %d bytes\n", &vet[1]);
printf("charvet2 ..: %d bytes\n", &vet[2]);
printf("p_charvet0 : %p bytes\n", &vet[0]);
printf("p_charvet1.: %p bytes\n", &vet[1]);
printf("p_charvet2 : %p bytes\n", &vet[2]);

printf("short .....: %p bytes\n", &b);
printf("int .......: %p bytes\n", &c);
printf("long ......: %p bytes\n", &d);
printf("float .....: %p bytes\n", &e);
printf("double ....: %p bytes\n", &f);
printf("long double: %p bytes\n", &g);


}