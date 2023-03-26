#include <stdio.h>
#include <stdlib.h> 
#include <stdbool.h> 


typedef struct no No;

No* criar_lista();
void destruir_lista(No **p);

int tamanho_lista(const No *p);

void imprimir_lista(No *p);

void adicionar_inicio_lista(No **p, int valor); 
void adicionar_fim_lista(No **p, int valor); 
void adicionar_ordenado_lista(No **p, int valor); 

void remover_inicio_lista(No **p); 
void remover_fim_lista(No **p); 
void remover_lista(No **p, int valor); 

int buscar_valor_lista(No *p, int valor);
int buscar_posicao_lista(No *p, int posicao);
