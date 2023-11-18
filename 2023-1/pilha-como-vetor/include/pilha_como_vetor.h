#include <stdio.h>
#include <stdlib.h> 
#include <stdbool.h> 


typedef struct pilha Pilha;

Pilha* criar_pilha(int tamanho);
void destruir_pilha(Pilha **pilha);

void empilhar_pilha(Pilha *pilha, int valor);

void desempilhar_pilha(Pilha *pilha);

int tamanho_pilha(const Pilha *pilha);
int quantidade_pilha(const Pilha *pilha);

void imprimir_pilha(const Pilha  *pilha);

