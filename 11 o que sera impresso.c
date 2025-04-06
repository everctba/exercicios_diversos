#include<stdio.h>
#include<string.h>
int main()
{
    char t;
    char texto[15]= {"AEV LEUTTRNA"};
    int i;
    for (i=0; i<12; i=i+2)
    {
        t = texto[i];
        texto[i] = texto[i+1];
        texto[i+1] = t;
    }
    for (i=0; i<10; i=i+2)
    {
        t = texto[i];
        texto[i] = texto[i+3];
        texto[i+3] = t;
    }
    printf("\n%s",texto);
    return 0;
}
