#include <stdio.h>
#include <stdlib.h> 
#include <stdbool.h> 


typedef struct no No;

No* criar_lista_ligada();
void destruir_lista_ligada(No **p);

int tamanho_lista_ligada(const No *p);
bool esta_cheio_lista_ligada(const No *p);

void imprimir_lista_ligada(No *p);

void adicionar_inicio_lista_ligada(No **p, int valor); 
void adicionar_fim_lista_ligada(No **p, int valor); 
void adicionar_ordenado_lista_ligada(No **p, int valor); 

void remover_inicio_lista_ligada(No *p); 
void remover_fim_lista_ligada(No *p); 
void remover_lista_ligada(No *p, int valor); 

int buscar_lista_ligada(No *p, int valor);
int buscar_posicao_lista_ligada(No *p, int posicao);
