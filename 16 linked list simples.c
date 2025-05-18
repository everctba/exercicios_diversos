#include <stdio.h>
#include <stdlib.h>

// Definição do nó
typedef struct No {
    int valor;
    struct No *proximo;
} No;

// Função para inserir no início
void inserir_no_inicio(No **lista, int num) {
    No *novo = (No *)malloc(sizeof(No));

    if (novo) {
        novo->valor = num;
        novo->proximo = *lista; // O novo nó aponta para o antigo primeiro nó
        *lista = novo; // Atualiza a cabeça da lista
    } else {
        printf("Erro ao alocar memória!\n");
    }
}
// prodecimento para inserir no final
void inserir_no_fim(No **lista, int num) {
    No *novo = (No *)malloc(sizeof(No));

    if (novo) {
        novo->valor = num;
        novo->proximo = NULL; // O novo nó será o último

        if (*lista == NULL) {
            // Se a lista estiver vazia, o novo nó se torna a cabeça
            *lista = novo;
        } else {
            // Percorre até o último nó
            No *temp = *lista;
            while (temp->proximo != NULL) {
                temp = temp->proximo;
            }
            temp->proximo = novo; // Liga o último nó ao novo nó
        }
    } else {
        printf("Erro ao alocar memória!\n");
    }
}
// Função para listar os elementos
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
