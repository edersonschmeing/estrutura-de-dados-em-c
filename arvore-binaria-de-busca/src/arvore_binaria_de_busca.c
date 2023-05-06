#include <stdio.h>
#include <stdlib.h> 
#include "arvore_binaria_de_busca.h" 

struct no {
	int chave;
    No *ptr_esquerda;
    No *ptr_direita;
};

No **criar_ABB() { 

    No **ptr_raiz = (No**) malloc(sizeof(No*));
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

void destruir_ABB(No **ptr_ptr_no_raiz) { 

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

No *buscar_recursivo_ABB(No *ptr_no, int chave){
    
    if (ptr_no == NULL || ptr_no->chave == chave)
        return ptr_no;
    
    if (chave < ptr_no->chave)
       return buscar_recursivo_ABB(ptr_no->ptr_esquerda, chave); 
    
    else 
       return buscar_recursivo_ABB(ptr_no->ptr_direita, chave);
  
}

No *buscar_interativo_ABB(No *ptr_no, int chave) {

    if (ptr_no == NULL) 
        return NULL;
    
    No *prt_no_atual = ptr_no; //raiz 
        
    while (prt_no_atual != NULL) {
        
        if (chave == prt_no_atual->chave) 
            return ptr_no;

        if (chave < prt_no_atual->chave) 
           prt_no_atual = prt_no_atual->ptr_esquerda;      
        
        else

           prt_no_atual = prt_no_atual->ptr_direita;      

    }
    return NULL; // não encontrou a chave.

}


void adicionar_recursivo_ABB(No **ptr_no, int chave) { 

    if (*ptr_no == NULL) { 
        No *no_novo = (No*) malloc(sizeof(No));
        
        no_novo->ptr_esquerda = NULL;
        no_novo->ptr_direita = NULL;
        no_novo->chave = chave;

        *ptr_no = no_novo;      

    } else if (chave < (*ptr_no)->chave) {
        
        adicionar_recursivo_ABB( &(*ptr_no)->ptr_esquerda, chave);
    
    } else if (chave > (*ptr_no)->chave) {

        adicionar_recursivo_ABB( &(*ptr_no)->ptr_direita, chave);
    } 
    //caso base else chave já existe. 

}

void adicionar_interativo_ABB(No **ptr_no, int chave) { 
    
    if (ptr_no == NULL)
       return; 
    
    No *ptr_no_novo = (No*) malloc(sizeof(No));
        
    ptr_no_novo->ptr_esquerda = NULL;
    ptr_no_novo->ptr_direita = NULL;
    ptr_no_novo->chave = chave;
  
    if (*ptr_no == NULL) { 
        *ptr_no = ptr_no_novo;      

    } else {
        
        No *ptr_no_atual = *ptr_no; // raiz
        No *ptr_no_anterior = NULL;

        while (ptr_no_atual != NULL) {

            ptr_no_anterior = ptr_no_atual;

            if (chave == ptr_no_atual->chave) //chave já existe
                return;
            
            if (chave < ptr_no_atual->chave)
               ptr_no_atual = ptr_no_atual->ptr_esquerda;
            else
               ptr_no_atual = ptr_no_atual->ptr_direita;
        
        }

        if (chave < ptr_no_anterior->chave)
            ptr_no_anterior->ptr_esquerda = ptr_no_novo;
        else 
            ptr_no_anterior->ptr_direita = ptr_no_novo;

    }

}


void remover_ABB(No **ptr_no, int chave) { 

   // ---

} 

