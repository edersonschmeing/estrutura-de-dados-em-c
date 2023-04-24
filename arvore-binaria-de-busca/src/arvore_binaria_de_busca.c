#include "arvore_binaria_de_busca.h" 
#include <stdio.h>


struct no {
	int dado;
    No *ptr_esquerda;
    No *ptr_direita;
};


No_Raiz *criar_ABB() { 

    No_Raiz *ptr_raiz = (No_Raiz*) malloc(sizeof(No_Raiz));
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


void destruir_ABB(No_Raiz *ptr_ptr_no_raiz) { 

    if (ptr_ptr_no_raiz == NULL)
        return;

    destruir_no_ABB(*ptr_ptr_no_raiz);
    free(ptr_ptr_no_raiz);

}
