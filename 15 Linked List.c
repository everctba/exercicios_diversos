#include <stdio.h>
#include <stdlib.h>

typedef struct no
{

    int valor;
    struct no *proximo;

} No;

// procedimento para inserir no inicio
void inserir_no_inicio(No **lista, int num )
{
    No *novo = malloc(sizeof(No));

    if(novo)
    {
        novo->valor = num;
        novo->proximo = *lista;
        *lista = novo;
    }
    else
        printf("Erro ao alocar memoria\n");
}
//procedimento par ainserir no fim
void inserir_no_fim(No **lista, int num)
{
    No *aux, *novo = malloc(sizeof(No));

    if(novo)
    {
        novo->valor = num;
        novo->proximo = NULL;
        // é o primeiro?
        if(*lista == NULL)
        {
            *lista = novo;
        }
        else
        {
            aux = *lista;
            while(aux->proximo)  //enquanto for diferente de nulo retorna trude
            {
                aux = aux->proximo;
            }
            aux->proximo = novo;

        }

    }
    else printf("erro ao alocar memoria\n");

}
// procedimento para inserir no meio
void inserir_no_meio(No **lista, int num, int anterior)
{

    No *aux, *novo = malloc(sizeof(No));

    if(novo)
    {
        novo->valor = num;
        //é o primeiro?
        if(*lista == NULL)
        {
            novo->proximo = NULL;
            *lista = novo;

        }
        else
        {
            aux = *lista;
            while(aux->valor != anterior && aux->proximo)
            {
                aux = aux->proximo;
            }
            novo->proximo = aux->proximo;
            aux->proximo = novo;
        }

    }
    else
    {
        printf("Erro ao alocar memoria\n");
    }

}


void imprimir(No *no)
{
    printf("\n\t Lista: ");
    while(no)
    {
        printf("%d ", no->valor);
        no = no->proximo;
    }
    printf("\n\n");
}
int main ()
{

    int opcao, valor, anterior;
    No *lista = NULL;

    do
    {
        printf("\n\t0 - Sair\n\t1 - Inserir Inicio\n\t2 - Inserir Final\n\t3 - Inserir Meio\n\t4 - Imprimir");
        scanf("%d",&opcao);
        switch(opcao)
        {
        case 1:
            printf("Digite um valor: ");
            scanf("%d", &valor);
            inserir_no_inicio(&lista,valor);
            break;
        case 2:
            printf("Digite um valor: ");
            scanf("%d", &valor);
            inserir_no_fim(&lista,valor);
            break;
        case 3:
            printf("Digite um valor e o valor de referencia: ");
            scanf("%d%d", &valor, &anterior);
            inserir_no_meio(&lista, valor, anterior);
            break;
        case 4:
            imprimir(lista);
            break;
        default:
            if(opcao != 0)
                printf("Opcao invalida!\n");


        }


    }
    while(opcao != 0);




    return 0;
}

//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#include<conio.h>
//
///*
//   & - devolve endereço de memória
//   * - devolve o conteudo do endereço apontado por ele
//*/
//
//struct No{
//	int cod;
//	char nome[30];
//	struct No *prox; // ponteiro para o próximo elemento
//};
//
//// variaves globais
//struct No *raiz, *paux;
//int codigo;
//
//// prototipos das funcoes
//void incluir();
//void excluir();
//void listar();
//void incluir_no_final();
//
//int main(){
//	int op;
//	codigo = 1; // vari�vel global que inicializamos com 1;
//	raiz = NULL; //aqui tive que deixar a raiz vazia pra comparar nsaber se a lista está vazia no primeiro item.
//    printf("\n raiz inicial = %p\n",raiz);
//	do{
//		system("cls"); // limpa a tela conio.h
//		printf("--- MENU PRINCIPAL ---");
//		printf("\n 1.incluir");
//		printf("\n 2.excluir");
//		printf("\n 3.listar");
//		printf("\n 4.incluir no final");
//		printf("\n 9.sair");
//		printf("\n\nDigite uma opcao...: ");
//		scanf("%d", &op);
//
//        switch(op) {
//            case 1: incluir(); break;
//            case 2: excluir(); break;
//            case 3: listar();  break;
//            case 4: incluir_no_final();  break;
//            case 9: break; //não mostra msg de erro
//            default: printf("\nOpcao invalidade.");
//        };
//        getch(); //para a tela
//	}while(op != 4);
//}
//
//
//
//// corpo da funcao incluir
//void incluir(){
//	system("cls");
//	struct No *pnovo;
//	printf("+-------------------------------+\n");
//	printf(" | FUNÇAO DE INCLUSAO |\n");
//	printf("+-------------------------------+\n");
//
//	pnovo = (struct No*)malloc(sizeof(struct No));
//	pnovo->cod = codigo;
//	printf("\nDIgite o nome...: ");
//	scanf("%s", &pnovo->nome);
//
//	//inclusão no inicio da lista
////	if (raiz == NULL) {
//        pnovo->prox = raiz;
//        raiz = pnovo;
//        codigo++;
//        printf("\nElemento incluído com sucesso!! :)");
////        getch();
//        printf("\n raizincluir = %p\n",raiz);
//
//
//
//}
//
//
//void incluir_no_final(){
//	system("cls");
//	struct No *pnovo;
//	printf("+-------------------------------+\n");
//	printf(" | FUNÇAO DE INCLui no final |\n");
//	printf("+-------------------------------+\n");
//
//	pnovo = (struct No*)malloc(sizeof(struct No));
//	pnovo->cod = codigo;
//	printf("\nDigite o nome...: ");
//	scanf("%s", &pnovo->nome);
//
//    paux = raiz; //comeca do comeco da lista
//	//inclusão no inicio da lista
////  while(pnovo->cod != 1) {
//        pnovo->cod = prox->cod;
//    if (raiz) { // Se estiver no primeiro item
//        raiz = pnovo; //indica a lista pro primeiro item
//    }
//    if (paux == NULL){
////        free(paux);
//        raiz = pnovo;
//        codigo++;
//
//
//        printf("\nElemento incluído no final com sucesso!! :)");
////        getch();
//
//        }
//
//}
//
//
//void excluir(){
//    system("cls");
//
//	printf("+-------------------------------+\n");
//	printf("         |  EXCLUSAO |           \n");
//	printf("+-------------------------------+\n");
//	//Exclusão no inicio da lista
//	if(raiz == NULL){
//        printf("\nLista Vazia");
//
//	}else{
//        paux = raiz; //atualiza pra posição primeira da lista
//        raiz = paux->prox;
//        free(paux); // libera a memória
//        printf("Elemento exluído com sucesso!! :)");
//
//	}
//	getch(); // pra parar a tela
//
//
//}
//
//void listar(){
//    system("cls");
//
//	printf("+-------------------------------+\n");
//	printf("         |  LISTAGEM |           \n");
//	printf("+-------------------------------+\n");
//
//	paux = raiz; //comeca do comeco da lista
//	if (paux == NULL) {
//        printf("Lista Vazia\n");
//	}else {
//        while (paux != NULL){
//            //aaqui ele fica lendo todos os elementos como se fosse um for mas como vc nao sabe o tamanho ai usa um while
//
//            printf("\n Endereco: %p", paux);
//            printf("\n cod.....: %d", paux->cod);
//            printf("\n nome....: %s", paux->nome);
//            printf("\n prox....: %p", paux->prox);
//            printf("\n-------------------------");
//            paux = paux->prox;
//
//        }
//        printf("\n FIM DA LISTA \n");
//	}
//}
