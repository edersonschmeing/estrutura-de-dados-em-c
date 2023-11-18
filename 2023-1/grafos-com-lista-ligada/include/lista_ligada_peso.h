#include <stdio.h>
#include <stdlib.h> 
#include <stdbool.h> 


typedef struct no No;

typedef struct lista Lista;

Lista *criar_lista();
void destruir_lista(Lista **ptr_ptr_lista);

int tamanho_lista(Lista *ptr_lista);

void imprimir_lista(Lista *ptr_lista);

void inserir_lista(Lista *ptr_lista, int valor, float peso);

void remover_valor_lista(Lista *ptr_lista, int valor); 

int buscar_valor_lista(Lista *ptr_lista, int valor);

