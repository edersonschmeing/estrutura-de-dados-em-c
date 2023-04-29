#include <stdio.h>
#include <stdlib.h> 
#include <stdbool.h> 

typedef struct no No;

No* criar_fila();
void destruir_fila(No **ptr_ptr_no) ;

int quantidade_elemento_da_fila(No *ptr_no);
int primeiro_elemento_da_fila(const No *ptr_no);
int ultimo_elemento_da_fila(const No *ptr_no);

void imprimir_elementos_da_fila(No *ptr_no);

void adicionar_elemento_na_fila(No **ptr_ptr_no, int valor); 

void remover_elemento_da_fila(No **ptr_ptr_nono); 


