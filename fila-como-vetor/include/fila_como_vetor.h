#include <stdio.h>
#include <stdlib.h> 
#include <stdbool.h> 


typedef struct fila Fila;

Fila* criar_fila(int tamanho);
void destruir_fila(Fila **pilha);

void adicionar_fila(Fila *fila, int valor);

void remover_fila(Fila *fila);

int tamanho_fila(const Fila *fila);
int quantidade_fila(const Fila *fila);
int busca_fila(Fila *fila, int valor); 

void imprimir_fila(const Fila  *fila);

