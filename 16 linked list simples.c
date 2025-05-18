#include <stdio.h>
#include <stdlib.h>

// Defini��o do n�
typedef struct No {
    int valor;
    struct No *proximo;
} No;

// Fun��o para inserir no in�cio
void inserir_no_inicio(No **lista, int num) {
    No *novo = (No *)malloc(sizeof(No));

    if (novo) {
        novo->valor = num;
        novo->proximo = *lista; // O novo n� aponta para o antigo primeiro n�
        *lista = novo; // Atualiza a cabe�a da lista
    } else {
        printf("Erro ao alocar mem�ria!\n");
    }
}
// prodecimento para inserir no final
void inserir_no_fim(No **lista, int num) {
    No *novo = (No *)malloc(sizeof(No));

    if (novo) {
        novo->valor = num;
        novo->proximo = NULL; // O novo n� ser� o �ltimo

        if (*lista == NULL) {
            // Se a lista estiver vazia, o novo n� se torna a cabe�a
            *lista = novo;
        } else {
            // Percorre at� o �ltimo n�
            No *temp = *lista;
            while (temp->proximo != NULL) {
                temp = temp->proximo;
            }
            temp->proximo = novo; // Liga o �ltimo n� ao novo n�
        }
    } else {
        printf("Erro ao alocar mem�ria!\n");
    }
}
// Fun��o para listar os elementos
void listar(No *lista) {
    No *temp = lista;
    while (temp != NULL) {
        printf("%d -> ", temp->valor);
        temp = temp->proximo;
    }
    printf("NULL\n");
}


int main() {
    No *lista = NULL;

    inserir_no_inicio(&lista, 10);
    inserir_no_inicio(&lista, 20);
    inserir_no_fim(&lista, 70);
    inserir_no_inicio(&lista, 30);

    printf("Elementos da lista:\n");
    listar(lista);

    return 0;
}
