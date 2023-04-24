#include <stdio.h>
#include <stdlib.h> 
#include <stdbool.h> 


// Binary search tree - BST
// Arvore_Binaria_De_Busca - ABB


typedef struct no No;

typedef struct no *No_Raiz;

No_Raiz *criar_ABB();
void destruir_ABB(No_Raiz *ptr_no_raiz);

int adicionar_ABB(No_Raiz *ptr_no_raiz); 
int remover_ABB(No_Raiz *ptr_no_raiz); 

void percurso_pre_ordem_ABB(No_Raiz *ptr_no_raiz);
void percurso_em_ordem_ABB(No_Raiz *ptr_no_raiz);
void percurso_pos_ordem_ABB(No_Raiz *ptr_no_raiz);

int verificar_esta_vazia_ABB(No_Raiz *ptr_no_raiz);
int verificar_altura_ABB(No_Raiz *ptr_no_raiz);
int consultar_quantidade_no_ABB(No_Raiz *ptr_no_raiz);

int buscar_recursiva_ABB(No_Raiz *ptr_no_raiz, int dado); 
int buscar_interativa_ABB(No_Raiz *ptr_no_raiz, int dado); 
