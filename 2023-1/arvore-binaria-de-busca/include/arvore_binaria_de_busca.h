#include <stdio.h>

// Binary search tree - BST
// Arvore_Binaria_De_Busca - ABB

typedef struct no No;

No **criar_ABB();
void destruir_ABB(No **ptr_ptr_no_raiz);

void adicionar_recursivo_ABB(No **ptr_no, int chave);
void adicionar_iterativo_ABB(No **ptr_no, int chave);

void remover_recursivo_ABB(No **ptr_no, int chave);
void remover_iterativo_ABB(No **ptr_no, int chave); 

//caso encontre retorna o endereço de memória do No, caso contrário retorna NULL. 
No *buscar_recursivo_ABB(No *ptr_no, int chave); 
No *buscar_iterativo_ABB(No *ptr_no, int chave); 

void pre_ordem_ABB(No *ptr_no);
void em_ordem_ABB(No *ptr_no);
void pos_ordem_ABB(No *ptr_no);

void imprime_ABB(No *ptr_no, int nivel);

