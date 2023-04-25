#include <stdio.h>
#include <stdlib.h> 
#include <stdbool.h> 

typedef struct no No;

No* criar_lista();
void destruir_lista_ligada(No **ptr_ptr_no) ;

int tamanho_lista(const No *ptr_no);

void imprimir_lista(No *ptr_no);

void adicionar_inicio_lista(No **ptr_ptr_no, int valor); 
void adicionar_fim_lista(No **ptr_ptr_no, int valor); 

void remover_inicio_lista(No **ptr_ptr_no);
void remover_fim_lista(No **ptr_ptr_nono); 


