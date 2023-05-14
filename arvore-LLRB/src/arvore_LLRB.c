#include <stdio.h>
#include <stdlib.h> 

#include "arvore_LLRB.h" 

enum cor_do_no { PRETO, VERMELHO }; // 0 = PRETO 1 = VERMELHO 

struct no {
	int chave;
    No *ptr_no_esquerda;
    No *ptr_no_direita;
    Cor cor;
};

No *criar_no_LLRB(int chave) { 

    No *ptr_no = (No*) malloc(sizeof(No));
    
    ptr_no->ptr_no_esquerda = NULL;
    ptr_no->ptr_no_direita = NULL;
    ptr_no->chave = chave;    
    ptr_no->cor = VERMELHO;

    return ptr_no;

}

No **criar_LLRB() { 

    No **ptr_no_raiz = (No**) malloc(sizeof(No*));
    if (ptr_no_raiz != NULL) 
        *ptr_no_raiz = NULL; 
   
    return ptr_no_raiz;

}

void destruir_no_LLRB(No *ptr_no) { 

    if (ptr_no == NULL)
        return; 

    destruir_no_LLRB(ptr_no->ptr_no_esquerda);
    destruir_no_LLRB(ptr_no->ptr_no_direita);
    free(ptr_no);
    ptr_no = NULL;
        
}

void destruir_LLRB(No **ptr_ptr_no_raiz) { 

    if (ptr_ptr_no_raiz == NULL)
        return;

    destruir_no_LLRB(*ptr_ptr_no_raiz);
    free(ptr_ptr_no_raiz);

}

int cor(No *ptr_no) { 
    
    if (ptr_no == NULL) 
        return PRETO;
    else 
        return ptr_no->cor;
} 

void trocar_cor(No *ptr_no){
    
    ptr_no->cor = !ptr_no->cor;
    
    if(ptr_no->ptr_no_esquerda != NULL)
       ptr_no->ptr_no_esquerda->cor = !ptr_no->ptr_no_esquerda->cor;

    if(ptr_no->ptr_no_direita != NULL)
       ptr_no->ptr_no_direita->cor = !ptr_no->ptr_no_direita->cor;

}

No *rotacionar_para_esquerda(No *ptr_no){

    No *ptr_no_auxiliar = ptr_no->ptr_no_direita;

    ptr_no->ptr_no_direita = ptr_no_auxiliar->ptr_no_esquerda;
    ptr_no_auxiliar->ptr_no_esquerda = ptr_no;
    ptr_no_auxiliar->cor = ptr_no->cor;
    ptr_no->cor = VERMELHO;

    return ptr_no_auxiliar;
}

No *rotacionar_para_direita(No *ptr_no){

    No *ptr_no_auxiliar = ptr_no->ptr_no_esquerda;
    
    ptr_no->ptr_no_esquerda = ptr_no_auxiliar->ptr_no_direita;
    ptr_no_auxiliar->ptr_no_direita = ptr_no;
    ptr_no_auxiliar->cor = ptr_no->cor;
    ptr_no->cor = VERMELHO;

    return ptr_no_auxiliar;
}


No* inserir_no_LLRB(No *ptr_no, int chave) { 

    if (ptr_no == NULL) { 
        
       No *novo_no = criar_no_LLRB(chave);
       ptr_no = novo_no;
       return novo_no;
    }  

    if (!(chave == ptr_no->chave)) {  

        if (chave < ptr_no->chave)
           ptr_no->ptr_no_esquerda = inserir_no_LLRB(ptr_no->ptr_no_esquerda, chave);
        
        else if (chave > ptr_no->chave)
           ptr_no->ptr_no_direita = inserir_no_LLRB(ptr_no->ptr_no_direita, chave);

    }

    if (cor(ptr_no->ptr_no_direita) == VERMELHO && cor(ptr_no->ptr_no_esquerda) == PRETO) 
       ptr_no = rotacionar_para_esquerda(ptr_no);
    
    if (cor(ptr_no->ptr_no_esquerda) == VERMELHO && cor(ptr_no->ptr_no_esquerda->ptr_no_esquerda) == VERMELHO) 
       ptr_no = rotacionar_para_direita(ptr_no);
    
    if (cor(ptr_no->ptr_no_esquerda) == VERMELHO && cor(ptr_no->ptr_no_direita) == VERMELHO) 
       trocar_cor(ptr_no);

    return ptr_no;
     
}

void inserir_LLRB(No **ptr_no, int chave) {

    *ptr_no = inserir_no_LLRB(*ptr_no, chave);
    (*ptr_no)->cor = PRETO;    

}


No* balancear_LLRB(No *ptr_no) { 
    
    if (cor(ptr_no->ptr_no_direita) == VERMELHO)
       ptr_no = rotacionar_para_esquerda(ptr_no);
    
    if (ptr_no->ptr_no_esquerda != NULL && cor(ptr_no->ptr_no_esquerda) == VERMELHO && 
        cor(ptr_no->ptr_no_esquerda->ptr_no_esquerda) == VERMELHO) 

       ptr_no = rotacionar_para_direita(ptr_no);
    
    if (cor(ptr_no->ptr_no_esquerda) == VERMELHO && cor(ptr_no->ptr_no_direita) == VERMELHO) 
       trocar_cor(ptr_no);

    return ptr_no;

} 

No* mover_vermelho_para_esquerda_LLRB(No *ptr_no){ 
    
    trocar_cor(ptr_no);
    
    if (cor(ptr_no->ptr_no_direita->ptr_no_esquerda) == VERMELHO) {

        ptr_no->ptr_no_direita = rotacionar_para_direita(ptr_no->ptr_no_direita);
        ptr_no = rotacionar_para_esquerda(ptr_no);
        trocar_cor(ptr_no);
    }

    return ptr_no;

}

No* remover_menor_LLRB(No *ptr_no){
    
    if(ptr_no->ptr_no_esquerda == NULL) {
       free(ptr_no);
       return NULL;
    }

    if( (cor(ptr_no->ptr_no_esquerda) == PRETO) && (cor(ptr_no->ptr_no_esquerda->ptr_no_esquerda) == PRETO) )
        ptr_no = mover_vermelho_para_esquerda_LLRB(ptr_no);

    ptr_no->ptr_no_esquerda = remover_menor_LLRB(ptr_no->ptr_no_esquerda);

    return balancear_LLRB(ptr_no);

}

No* procurar_menor_LLRB(No *ptr_no) { // menor da esquerda da sub árvore direita
   
   No *ptr_no_auxiliar1 = ptr_no;
   No *ptr_no_auxiliar2 = ptr_no->ptr_no_esquerda;

   while (ptr_no_auxiliar2 != NULL ) {
      ptr_no_auxiliar1 = ptr_no_auxiliar2;
      ptr_no_auxiliar2 = ptr_no_auxiliar2->ptr_no_esquerda;  

   }

   return ptr_no_auxiliar1;

}


No* mover_vermelho_para_direita_LLRB(No *ptr_no){ 
    
    trocar_cor(ptr_no);
    
    if (cor(ptr_no->ptr_no_esquerda->ptr_no_esquerda) == VERMELHO) {

        ptr_no = rotacionar_para_direita(ptr_no);
        trocar_cor(ptr_no);
    }

    return ptr_no;
}

No* remover_maior_LLRB(No *ptr_no){
    
    if(ptr_no->ptr_no_direita == NULL) {
       free(ptr_no);
       return NULL;
    }

    if( (cor(ptr_no->ptr_no_direita) == PRETO) && (cor(ptr_no->ptr_no_esquerda->ptr_no_direita) == PRETO) )
        ptr_no = mover_vermelho_para_direita_LLRB(ptr_no);

    ptr_no->ptr_no_direita = remover_maior_LLRB(ptr_no->ptr_no_direita);

    return balancear_LLRB(ptr_no);

}

No* procurar_maior_LLRB(No *ptr_no) { // maior da direita da sub árvore esquerda
   
   No *ptr_no_auxiliar1 = ptr_no;
   No *ptr_no_auxiliar2 = ptr_no->ptr_no_direita;

   while (ptr_no_auxiliar2 != NULL ) {
      ptr_no_auxiliar1 = ptr_no_auxiliar2;
      ptr_no_auxiliar2 = ptr_no_auxiliar2->ptr_no_direita;  

   }
   return ptr_no_auxiliar1;

}


No* remover_no_LLRB(No *ptr_no, int chave) {

    if(chave < ptr_no->chave){
        if( (cor(ptr_no->ptr_no_esquerda) == PRETO) && (cor(ptr_no->ptr_no_esquerda->ptr_no_esquerda) == PRETO) )
            ptr_no = mover_vermelho_para_esquerda_LLRB(ptr_no);

        ptr_no->ptr_no_esquerda = remover_no_LLRB(ptr_no->ptr_no_esquerda, chave);
   
    } else { 
        
        if (cor(ptr_no->ptr_no_esquerda) == VERMELHO)
            ptr_no = rotacionar_para_direita(ptr_no);

        if (chave == ptr_no->chave && ptr_no->ptr_no_direita == NULL) {
            free(ptr_no);
            return NULL;
        }

        if( (cor(ptr_no->ptr_no_direita) == PRETO) && (cor(ptr_no->ptr_no_direita->ptr_no_esquerda) == PRETO) )
            ptr_no = mover_vermelho_para_direita_LLRB(ptr_no);

        if(chave == ptr_no->chave) {

            No *ptr_no_auxiliar = procurar_menor_LLRB(ptr_no->ptr_no_direita);
            ptr_no->chave = ptr_no_auxiliar->chave;
            ptr_no->ptr_no_direita = remover_menor_LLRB(ptr_no->ptr_no_direita);
            
            //No *ptr_no_auxiliar = procurar_maior_LLRB(ptr_no->ptr_no_esquerda);
            //ptr_no->chave = ptr_no_auxiliar->chave;
            //ptr_no->ptr_no_esquerda = remover_maior_LLRB(ptr_no->ptr_no_esquerda);
 
        }
        else
            ptr_no->ptr_no_direita = remover_no_LLRB(ptr_no->ptr_no_direita, chave);
    }

    return balancear_LLRB(ptr_no);
}


void remover_LLRB(No **ptr_no, int chave) {

    if (buscar_LLRB(*ptr_no, chave) != NULL) { 

       No *ptr_no_auxiliar = *ptr_no;
       *ptr_no = remover_no_LLRB(ptr_no_auxiliar, chave);
     
       if (*ptr_no != NULL)
           (*ptr_no)->cor = PRETO; 
    }
}


void imprime_no_LLRB(int valor, int nivel, int cor) {
    
    for (int i = 0; i < nivel; i++)
       printf("-");
    printf("%2d (%d)\n", valor, cor);
}

void imprime_LLRB(No *ptr_no, int nivel) {
    
    if (ptr_no == NULL) 
       return;

    imprime_LLRB(ptr_no->ptr_no_direita, nivel + 1);
    imprime_no_LLRB(ptr_no->chave, nivel, ptr_no->cor);
    imprime_LLRB(ptr_no->ptr_no_esquerda, nivel + 1);
    
}


void em_ordem_LLRB(No *ptr_no) { 
     
    if (ptr_no == NULL)
       return;
        
    em_ordem_LLRB(ptr_no->ptr_no_esquerda);
    printf("%d -> ", ptr_no->chave);
    em_ordem_LLRB(ptr_no->ptr_no_direita);
}


No *buscar_LLRB(No *ptr_no, int chave) {

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

No *buscar_recursivo_LLRB(No *ptr_no, int chave){
    
    if (ptr_no == NULL || ptr_no->chave == chave)
        return ptr_no;
    
    if (chave < ptr_no->chave)
       return buscar_recursivo_LLRB(ptr_no->ptr_no_esquerda, chave); 
    
    else 
       return buscar_recursivo_LLRB(ptr_no->ptr_no_direita, chave);
  
}




    