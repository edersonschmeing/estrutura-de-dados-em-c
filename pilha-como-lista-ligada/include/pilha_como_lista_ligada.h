#include <stdio.h>
#include <stdlib.h> 
#include <stdbool.h> 


typedef struct no No;

No* criar_pilha();
void destruir_pilha(No **ptr_ptr_no);

int tamanho_pilha(const No *ptr_no);

void imprimir_pilha(No *ptr_no);

void empilhar_pilha(No **ptr_ptr_no, int valor); 

bool desemplilhar_pilha(No **ptr_ptr_no); // 0 não removeu e 1 removeu

int buscar_valor_pilha(No *ptr_no, int valor);
