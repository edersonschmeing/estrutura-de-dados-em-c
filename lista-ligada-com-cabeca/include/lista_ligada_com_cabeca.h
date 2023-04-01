#include <stdio.h>
#include <stdlib.h> 
#include <stdbool.h> 


typedef struct no No;

typedef struct lista Lista;

Lista *criar_lista();
void destruir_lista(Lista **lista);

int tamanho_lista(Lista *lista);

void imprimir_lista(Lista *lista);

void adicionar_inicio_lista(Lista *lista, int valor);
void adicionar_fim_lista(Lista *lista, int valor);

bool remover_inicio_lista(Lista *lista); 
bool remover_fim_lista(Lista *lista); 
bool remover_valor_lista(Lista *lista, int valor); 

int buscar_valor_lista(Lista *lista, int valor);
int buscar_posicao_lista(Lista *lista, int posicao);

