#include <stdio.h>
#include <stdlib.h> 
#include "arvore_binaria_de_busca.h" 

struct no {
	int chave;
    No *ptr_no_esquerda;
    No *ptr_no_direita;
};

No **criar_ABB() { 

    No **ptr_no_raiz = (No**) malloc(sizeof(No*));
    if (ptr_no_raiz != NULL) 
        *ptr_no_raiz = NULL; 
   
    return ptr_no_raiz;

}

void destruir_no_ABB(No *ptr_no) { 

    if (ptr_no == NULL)
        return; 

    destruir_no_ABB(ptr_no->ptr_no_esquerda);
    destruir_no_ABB(ptr_no->ptr_no_direita);
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

    imprime_ABB(ptr_no->ptr_no_direita, nivel + 1);
    imprime_no_ABB(ptr_no->chave, nivel);
    imprime_ABB(ptr_no->ptr_no_esquerda, nivel + 1);
    
}

void em_ordem_ABB(No *ptr_no) { 
     
    if (ptr_no == NULL)
       return;
        
    em_ordem_ABB(ptr_no->ptr_no_esquerda);
    printf("%d -> ", ptr_no->chave);
    em_ordem_ABB(ptr_no->ptr_no_direita);
}

No *buscar_recursivo_ABB(No *ptr_no, int chave){
    
    if (ptr_no == NULL || ptr_no->chave == chave)
        return ptr_no;
    
    if (chave < ptr_no->chave)
       return buscar_recursivo_ABB(ptr_no->ptr_no_esquerda, chave); 
    
    else 
       return buscar_recursivo_ABB(ptr_no->ptr_no_direita, chave);
  
}

No *buscar_interativo_ABB(No *ptr_no, int chave) {

    if (ptr_no == NULL) 
        return NULL;
    
    No *prt_no_atual = ptr_no; //raiz 
        
    while (prt_no_atual != NULL) {
        
        if (chave == prt_no_atual->chave) 
            return ptr_no;

        if (chave < prt_no_atual->chave) 
           prt_no_atual = prt_no_atual->ptr_no_esquerda;      
        
        else
           prt_no_atual = prt_no_atual->ptr_no_direita;      

    }
    return NULL; // não encontrou a chave.

}


void adicionar_recursivo_ABB(No **ptr_no, int chave) { 

    if (*ptr_no == NULL) { 
        No *no_novo = (No*) malloc(sizeof(No));
        
        no_novo->ptr_no_esquerda = NULL;
        no_novo->ptr_no_direita = NULL;
        no_novo->chave = chave;

        *ptr_no = no_novo;      

    } else if (chave < (*ptr_no)->chave) {
        
        adicionar_recursivo_ABB( &(*ptr_no)->ptr_no_esquerda, chave);
    
    } else if (chave > (*ptr_no)->chave) {

        adicionar_recursivo_ABB( &(*ptr_no)->ptr_no_direita, chave);
    } 
    //else - chave já existe. 

}

void adicionar_interativo_ABB(No **ptr_no, int chave) { 
    
    if (ptr_no == NULL)
       return; 
    
    No *ptr_no_novo = (No*) malloc(sizeof(No));
        
    ptr_no_novo->ptr_no_esquerda = NULL;
    ptr_no_novo->ptr_no_direita = NULL;
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
               ptr_no_atual = ptr_no_atual->ptr_no_esquerda;
            else
               ptr_no_atual = ptr_no_atual->ptr_no_direita;
        
        }

        if (chave < ptr_no_anterior->chave)
            ptr_no_anterior->ptr_no_esquerda = ptr_no_novo;
        else 
            ptr_no_anterior->ptr_no_direita = ptr_no_novo;

    }
}


 //funcao utilizada para pegar o nó mais a direita da subarvore esquerda do nó que será removido
No* maior_direita_da_sub_arvore_esquerda(No **ptr_no) {    //  Maior Direita da sub árvore esquerda, receber raiz->esquerda
    
    if ((*ptr_no)->ptr_no_direita != NULL)
        return maior_direita_da_sub_arvore_esquerda(&(*ptr_no)->ptr_no_direita);
    else {
        No *aux = *ptr_no; //verificar
        if( (*ptr_no)->ptr_no_esquerda != NULL)
            *ptr_no = (*ptr_no)->ptr_no_esquerda;
        else
            *ptr_no = NULL;
        return (aux);    
    } 
}
    
 //funcao utilizada para pegar o nó mais a esquerda da subarvore direia do nó que será removido
No *menor_esquerda_da_sub_arvore_direita(No **ptr_no) { //  menorEsquerda da sub árvore direita, receber raiz->direita

    if ((*ptr_no)->ptr_no_esquerda != NULL)
        return menor_esquerda_da_sub_arvore_direita(&(*ptr_no)->ptr_no_esquerda);
    else {
        No *aux = *ptr_no;
        if( (*ptr_no)->ptr_no_direita != NULL)
            *ptr_no = (*ptr_no)->ptr_no_direita;
        else
            *ptr_no = NULL;
        return (aux);    
    } 
}

void remover_recursivo_ABB(No **ptr_no, int chave) {

    if (*ptr_no == NULL) 
        return;

    if(chave < (*ptr_no)->chave)

        remover_recursivo_ABB(&((*ptr_no)->ptr_no_esquerda), chave);

    else if(chave > (*ptr_no)->chave)

        remover_recursivo_ABB(&((*ptr_no)->ptr_no_direita), chave);

    else { 
        
        No *ptr_no_auxiliar = (*ptr_no);
        
        if((*ptr_no)->ptr_no_esquerda == NULL && (*ptr_no)->ptr_no_direita == NULL) { //  se nao houver filhos...
            
            printf("removeu chave - sem filhos %d \n\n ", ptr_no_auxiliar->chave );

            free(ptr_no_auxiliar);
            *ptr_no = NULL; 
        
        } else if((*ptr_no)->ptr_no_esquerda == NULL) { //  so tem filho da direita
            
            printf("removeu chave - somente filho a direita %d \n\n ", ptr_no_auxiliar->chave );
            
            (*ptr_no) = (*ptr_no)->ptr_no_direita;
            ptr_no_auxiliar->ptr_no_direita = NULL;
            free(ptr_no_auxiliar);
            ptr_no_auxiliar = NULL;
        
        }
        else if(ptr_no_auxiliar->ptr_no_direita == NULL) {  //  so tem o filho da esquerda

            printf("removeu chave somente filho a esquerda %d \n\n ", ptr_no_auxiliar->chave );
            
            (*ptr_no) = (*ptr_no)->ptr_no_esquerda;
            ptr_no_auxiliar->ptr_no_esquerda = NULL;
            free(ptr_no_auxiliar);                     
            ptr_no_auxiliar = NULL;   
        }
        else {  //avaliar comportamento

            if (1 == 2) {
                ptr_no_auxiliar = menor_esquerda_da_sub_arvore_direita(&(*ptr_no)->ptr_no_direita);
            }

            ptr_no_auxiliar = maior_direita_da_sub_arvore_esquerda(&(*ptr_no)->ptr_no_esquerda);
 
            ptr_no_auxiliar->ptr_no_esquerda = (*ptr_no)->ptr_no_esquerda;
            ptr_no_auxiliar->ptr_no_direita = (*ptr_no)->ptr_no_direita;

            (*ptr_no)->ptr_no_esquerda = NULL;
            (*ptr_no)->ptr_no_direita = NULL;
            free(*ptr_no);  
            *ptr_no = ptr_no_auxiliar;
            ptr_no_auxiliar = NULL;
             
        }
    }

}


No *remove_no_atual(No *prt_no_atual) {

    No *prt_no_aux1, *prt_no_aux2;

    if (prt_no_atual->ptr_no_esquerda == NULL) {
        prt_no_aux2 = prt_no_atual->ptr_no_direita;
        free(prt_no_atual);
        return prt_no_aux2;            
    }      
    
    prt_no_aux1 = prt_no_atual; 
    prt_no_aux2 = prt_no_atual->ptr_no_esquerda;

    while (prt_no_aux2->ptr_no_direita != NULL ) {
        prt_no_aux1 = prt_no_aux2; 
        prt_no_aux2 = prt_no_aux2->ptr_no_direita;     
    }

    if (prt_no_aux1 != prt_no_atual) {
        prt_no_aux1->ptr_no_direita = prt_no_aux2->ptr_no_esquerda; 
        prt_no_aux2->ptr_no_esquerda = prt_no_atual->ptr_no_esquerda;     
    }   

    prt_no_aux2->ptr_no_direita = prt_no_atual->ptr_no_direita;
    free(prt_no_atual);

    return prt_no_aux2;
}



void remover_interativo_ABB(No **ptr_no, int chave) { 
   
    if (ptr_no == NULL)
       return; 

    No *ptr_no_atual = *ptr_no; // raiz
    No *ptr_no_anterior = NULL;

    while (ptr_no_atual != NULL) {

        if (chave == ptr_no_atual->chave) {

            if (ptr_no_atual == *ptr_no) {//esta na raiz
               *ptr_no = remove_no_atual(ptr_no_atual);     
 
            } else {
                if (ptr_no_anterior->ptr_no_esquerda == ptr_no_atual)
                   ptr_no_anterior->ptr_no_esquerda = remove_no_atual(ptr_no_atual);
                else 
                   ptr_no_anterior->ptr_no_direita = remove_no_atual(ptr_no_atual);

            }
            break;             
        }
    
        ptr_no_anterior = ptr_no_atual;
        
        if (chave < ptr_no_atual->chave)
            ptr_no_atual = ptr_no_atual->ptr_no_esquerda;
        else 
            ptr_no_atual = ptr_no_atual->ptr_no_direita;

    }
} 