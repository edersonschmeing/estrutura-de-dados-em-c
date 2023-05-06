#include "arvore_binaria_de_busca.h" 
#include <stdio.h>


struct no {
	int chave;
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

void imprime_no_ABB(int valor, int nivel) {
    
    for (int i = 0; i < nivel; i++)
        printf("-");
    printf("%2d\n", valor);
}

void imprime_ABB(No *ptr_no, int nivel) {
    
    if (ptr_no == NULL) 
        return;

    imprime_ABB(ptr_no->ptr_direita, nivel + 1);
    imprime_no_ABB(ptr_no->chave, nivel);
    imprime_ABB(ptr_no->ptr_esquerda, nivel + 1);
    
}

void em_ordem_ABB(No *ptr_no) { 
     
    if (ptr_no == NULL)
       return;
        
    em_ordem_ABB(ptr_no->ptr_esquerda);
    printf("%d -> ", ptr_no->chave);
    em_ordem_ABB(ptr_no->ptr_direita);
}

No *buscar_ABB(No *ptr_no, int chave){
    
    if (ptr_no == NULL || ptr_no->chave == chave)
    
        return ptr_no;
    
    if (chave < ptr_no->chave)
    
       return buscar_ABB(ptr_no->ptr_esquerda, chave); 
    
    else 
    
       return buscar_ABB(ptr_no->ptr_direita, chave);
  
}

void adicionar_ABB(No **ptr_no, int chave) { 

    if (*ptr_no == NULL) { 
        No *no_novo = (No*) malloc(sizeof(No));
        
        no_novo->ptr_esquerda = NULL;
        no_novo->ptr_esquerda = NULL;
        no_novo->chave = chave;

        *ptr_no = no_novo;      

    } else if (chave < (*ptr_no)->chave) {
        
        adicionar_ABB( &(*ptr_no)->ptr_esquerda, chave);
    
    } else {

        adicionar_ABB( &(*ptr_no)->ptr_direita, chave);
    }

}

void remover_ABB(No **ptr_no, int chave) { 

   // ---

} 

