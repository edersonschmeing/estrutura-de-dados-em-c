#include "lista_duplamente_ligada.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct no
{
    int dados;
    No *ptr_no_proximo;
    No *ptr_no_anterior;
};

struct lista
{
    int tamanho;
    No *ptr_no_cabeca;
    No *ptr_no_cauda; // com ponteiro cauda/fim é um deque.
};

Lista *criar_lista()
{

    Lista *prt_lista = (Lista *)malloc(sizeof(Lista));
    prt_lista->tamanho = 0;
    prt_lista->ptr_no_cabeca = NULL;
    prt_lista->ptr_no_cauda = NULL;

    return prt_lista;
}

void destruir_lista(Lista **ptr_ptr_lista)
{

    // implementação utilizando a cabeça, pode ser feito utilizando a cauda.

    Lista *ptr_lista = (*ptr_ptr_lista);

    if (ptr_lista != NULL)
    { // lista não esta vazia

        No *ptr_no_atual = ptr_lista->ptr_no_cabeca;

        No *ptr_no_auxiliar;
        while (ptr_no_atual != ptr_lista->ptr_no_cauda)
        {

            ptr_no_auxiliar = ptr_no_atual;
            ptr_no_atual = ptr_no_atual->ptr_no_proximo;

            free(ptr_no_auxiliar);
        }
        free(ptr_no_atual);

        free(ptr_lista);
        *ptr_ptr_lista = NULL;
    }
}

int tamanho_lista(Lista *ptr_lista)
{

    // TODO: Implemente esta função.

    return 0;
}

void imprimir_cabeca_lista(Lista *ptr_lista)
{

    No *ptr_no_atual = ptr_lista->ptr_no_cabeca;
    printf("Lista Cabeça -> ");
    while (ptr_no_atual != NULL)
    {
        printf("%d -> ", ptr_no_atual->dados);
        ptr_no_atual = ptr_no_atual->ptr_no_proximo;
    }
    printf(" NULL \n");
}

void imprimir_cauda_lista(Lista *ptr_lista)
{

    No *ptr_no_atual = ptr_lista->ptr_no_cauda;
    printf("Lista Cauda -> ");
    while (ptr_no_atual != NULL)
    {
        printf("%d -> ", ptr_no_atual->dados);
        ptr_no_atual = ptr_no_atual->ptr_no_anterior;
    }
    printf(" NULL \n");
}

void adicionar_cabeca_lista(Lista *ptr_lista, int valor)
{

    No *ptr_no_novo = (No *)malloc(sizeof(No));

    if (ptr_no_novo == NULL)
    {
        perror("malloc");
        exit(EXIT_FAILURE);
    }

    ptr_no_novo->dados = valor;
    ptr_no_novo->ptr_no_anterior = NULL;
    ptr_no_novo->ptr_no_proximo = NULL;

    if (ptr_lista->ptr_no_cabeca == NULL)
    {

        ptr_lista->ptr_no_cabeca = ptr_no_novo;

        ptr_lista->ptr_no_cauda = ptr_no_novo;
    }
    else
    {
        ptr_no_novo->ptr_no_proximo = ptr_lista->ptr_no_cabeca;

        ptr_lista->ptr_no_cabeca->ptr_no_anterior = ptr_no_novo;

        ptr_lista->ptr_no_cabeca = ptr_no_novo;
    }
    ptr_lista->tamanho = ptr_lista->tamanho + 1;
}

void adicionar_cauda_lista(Lista *ptr_lista, int valor)
{

    // TODO: Implemente esta função.
}

void adicionar_posicao_lista(Lista *ptr_lista, int posicao)
{

    // TODO: Implemente esta função.
}

bool remover_inicio_lista(Lista *ptr_lista)
{

    // TODO: Implemente esta função.
    return true;
}

bool remover_fim_lista(Lista *ptr_lista)
{

    // TODO: Implemente esta função.
    return true;
}
bool remover_valor_lista(Lista *ptr_lista, int valor)
{

    // TODO: Implemente esta função.
    return true;
}

int buscar_valor_lista(Lista *ptr_lista, int valor)
{

    // TODO: Implemente esta função.
    return -1;
}

int buscar_posicao_lista(Lista *ptr_lista, int posicao)
{

    // TODO: Implemente esta função.
    return -1;
}
