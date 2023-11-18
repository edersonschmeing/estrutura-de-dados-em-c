#include <stdio.h>
#include <stdlib.h> 
#include <stdbool.h> 

typedef struct item Item;

typedef struct no No;

No* criar_lista_ligada();
void destruir_lista_ligada(No *ptr_no);

No* adicionar_lista_ligada(No *ptr_ptr_no, char *chave, int valor); 
No* remover_lista_ligada(No *ptr_ptr_no, char *chave); // 0 não removeu e 1 removeu

int buscar_valor_lista_ligada(No *ptr_no, char *chave);

void imprimir_lista_ligada(No *ptr_no);
