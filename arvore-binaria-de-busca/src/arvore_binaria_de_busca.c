#include "arvore_binaria_de_busca.h" 
#include <stdio.h>


struct no {
	int dado;
    No *ptr_esquerda;
    No *ptr_direita;
};

ABB **criar_ABB() { 

    ABB **ptr_raiz = (ABB**) malloc(sizeof(ABB*));
    if (ptr_raiz != NULL) 
        *ptr_raiz = NULL; 
   
    return ptr_raiz;

}

void destruir_no_ABB(No *ptr_no) { 

    if (ptr_no == NULL)
        return; 

    destruir_no_ABB(ptr_no->ptr_esquerda);
    destruir_no_ABB(ptr_no->ptr_direita);
    free(ptr_no);
    ptr_no = NULL;

}

void destruir_ABB(ABB **ptr_raiz) { 

    if (ptr_raiz == NULL)
        return;

    destruir_no_ABB(*ptr_raiz);
    free(ptr_raiz);

}
