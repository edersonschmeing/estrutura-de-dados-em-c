#include <stdio.h>
#include <stdlib.h> 
#include <stdbool.h> 


typedef struct no No;

typedef struct lista Lista;


typedef struct no No;

typedef struct lista Lista;

Lista *criar_lista();
void destruir_lista(Lista **ptr_ptr_lista);

int tamanho_lista(Lista *ptr_lista);

void imprimir_lista(Lista *ptr_lista);

void adicionar_cabeca_lista(Lista *ptr_lista, int valor);
void adicionar_cauda_lista(Lista *ptr_lista, int valor);
void adicionar_posicao_lista(Lista *ptr_lista, int posicao);

bool remover_inicio_lista(Lista *ptr_lista); 
bool remover_fim_lista(Lista *ptr_lista); 
bool remover_valor_lista(Lista *ptr_lista, int valor); 

int buscar_valor_lista(Lista *ptr_lista, int valor);
int buscar_posicao_lista(Lista *ptr_lista, int posicao);
