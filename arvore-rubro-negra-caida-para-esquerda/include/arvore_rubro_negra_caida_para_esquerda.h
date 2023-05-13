#include <stdio.h>

// Left-Leaning Red–Black Tree (LLRB)
// Árvore Rubro Negra Caída Para Esquerda

// Red-Black Tree
// Arvore Rubro-Negra

typedef struct no No;
typedef enum cor_do_no Cor;


No **criar_LLRB();
void destruir_LLRB(No **ptr_ptr_no_raiz);

void adicionar_LLRB(No **ptr_no, int chave);

void remover_LLRB(No **ptr_no, int chave);

//caso encontre retorna o endereço de memória do No, caso contrário retorna NULL. 
No *buscar_LLRB(No *ptr_no, int chave); 

void imprime_LLRB(No *ptr_no, int nivel); 

void pre_ordem_LLRB(No *ptr_no);
void em_ordem_LLRB(No *ptr_no);
void pos_ordem_LLRB(No *ptr_no);

