#include <stdio.h>
#include <stdlib.h> 
#include <stdbool.h> 


typedef struct no No;

typedef struct fila Fila;

Fila *criar_fila();
void destruir_fila(Fila **ptr_ptr_fila);

int tamanho_fila(Fila *ptr_fila);

void imprimir_fila(Fila *ptr_fila);

void adicionar_fila(Fila *ptr_fila, int valor);

bool remover_fila(Fila *ptr_fila); 

int buscar_valor_fila(Fila *ptr_fila, int valor);

