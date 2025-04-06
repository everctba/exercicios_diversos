#include <stdio.h>

int main() {
    int i;

    printf("Tabela ASCII (Caracteres Imprimíveis):\n");
    printf("=======================================\n");
    printf("Código | Caractere\n");
    printf("-------|----------\n");

    // Loop pelos códigos ASCII de 32 (espaço) até 126 (~)
    for (i = 32; i <= 126; i++) {
        // Imprime o código decimal e o caractere correspondente
        printf("%d      | %c\n", i, (char)i);
    }

    printf("=======================================\n");

    return 0;
}