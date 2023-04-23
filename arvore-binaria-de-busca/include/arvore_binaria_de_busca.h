#include <stdio.h>
#include <stdlib.h> 
#include <stdbool.h> 


typedef struct no No;

// Binary search tree - BST
// Arvore_Binaria_De_Busca - ABB
typedef struct no ABB;

ABB **criar_ABB();
void destruir_ABB(ABB **ptr_raiz);

int adicionar_ABB(ABB **ptr_raiz); 
int remover_ABB(ABB **ptr_raiz); 

void percurso_pre_ordem_ABB(ABB **ptr_raiz);
void percurso_em_ordem_ABB(ABB **ptr_raiz);
void percurso_pos_ordem_ABB(ABB **ptr_raiz);

int verificar_esta_vazia_ABB(ABB **ptr_raiz);
int verificar_altura_ABB(ABB *ptr_raiz);
int consultar_quantidade_no_ABB(ABB **ptr_raiz);

int buscar_recursiva_ABB(ABB **ptr_raiz, int dado); 
int buscar_interativa_ABB(ABB **ptr_raiz, int dado); 
