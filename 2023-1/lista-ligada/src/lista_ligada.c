#include "lista_ligada.h" 
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>  

struct no {
    int dados; 
    No *proximo;  
};

No *criar_lista() {
   return NULL;
}

void destruir_recursivo_lista(No *ptr_no) {
    if (ptr_no != NULL) {
       destruir_recursivo_lista(ptr_no->proximo);
       free(ptr_no);          
    }
}

void destruir_interativo_lista(No **ptr_no) {
 
    No *ptr_no_aux;    
    while (*ptr_no != NULL) {
       ptr_no_aux = *ptr_no;
       *ptr_no = (*ptr_no)->proximo;
       free(ptr_no_aux);          
    }
}

void destruir_lista_ligada(No **ptr_no) {
 
    /*
    destruir_recursivo_lista_ligada(*p);
    *p = NULL
    */

    destruir_interativo_lista(ptr_no);
    
}

void imprimir_recursivo_lista(const No *ptr_no) { 

    if (ptr_no != NULL ) {
        printf("%d -> ", ptr_no->dados);
        imprimir_recursivo_lista(ptr_no->proximo);
    }
    else 
        printf("NULL\n");
}

void imprimir_interativo_lista(No *ptr_no) { 
   
    /* 
    for ( ; ptr_no != NULL; ptr_no = ptr_no->proximo)
       printf("%d -> ", ptr_no->dados);
    printf("NULL\n\n"); 
    */

    //printf("Lista inicío \n");
    while (ptr_no != NULL) {
       printf("%d -> ", ptr_no->dados );
       //printf("atual: %p valor: %d próximo: %p \n", ptr_no, ptr_no->dados, ptr_no->proximo );

       ptr_no = ptr_no->proximo;

    }
    printf("NULL \n\n");    
    //printf("fim \n\n");
    
}   

void imprimir_lista(No *ptr_no) { 

    //imprimir_recursivo_lista_ligada(ptr_no);
    
    imprimir_interativo_lista(ptr_no);    

}

int tamanho_lista(const No *ptr_no) { 
    
    //TODO
    return 0;

}

void adicionar_inicio_lista(No **ptr_ptr_no, int valor) {  //&l

    No *ptr_no_novo = (No*) malloc(sizeof(No));

    if (ptr_no_novo == NULL) {
       perror("malloc");
       exit(EXIT_FAILURE);
    }

    ptr_no_novo->dados = valor;
    ptr_no_novo->proximo = *ptr_ptr_no;
    
    *ptr_ptr_no = ptr_no_novo;
} 

void adicionar_fim_lista(No **ptr_ptr_no, int valor) { 

    No *ptr_no_novo = (No*) malloc(sizeof(No));

    if (ptr_no_novo == NULL) {
       perror("malloc");
       exit(EXIT_FAILURE);
    }
    
    ptr_no_novo->dados = valor;
    ptr_no_novo->proximo = NULL;
    
    No *prt_no_atual = *ptr_ptr_no;
    
    while (prt_no_atual->proximo != NULL) {
         
         prt_no_atual = prt_no_atual->proximo;

    }
    prt_no_atual->proximo = ptr_no_novo;

} 

//pode deixar para implementar por último 
void adicionar_ordenado_lista(No **ptr_ptr_no, int valor) {

    //TODO

} 

bool remover_inicio_lista(No **ptr_ptr_no) {
 
     //TODO
     return true;

} 

bool remover_fim_lista(No **ptr_ptr_no) {

    
    No *prt_no_atual = *ptr_ptr_no;

    if (prt_no_atual == NULL) // lista vazia 
       return false;

    No *ptr_no_anterior = NULL;
    
    while (prt_no_atual->proximo != NULL) {
         ptr_no_anterior = prt_no_atual; 
         prt_no_atual = prt_no_atual->proximo;
    }
    ptr_no_anterior->proximo = NULL;

   //TODO
   return true;

} 

bool remover_valor_lista(No **ptr_ptr_no, int valor) { 

    No *ptr_no_atual = *ptr_ptr_no;
   
    if (ptr_no_atual == NULL) 
       return false;

    No *ptr_no_anterior;

    while ((ptr_no_atual != NULL) && (ptr_no_atual->dados != valor)) {
       ptr_no_anterior = ptr_no_atual;
       ptr_no_atual = ptr_no_atual->proximo;     
    }

    if (ptr_no_atual == NULL) 
        return false;

    if (ptr_no_atual == *ptr_ptr_no) 
       *ptr_ptr_no = ptr_no_atual->proximo;
    else 
       ptr_no_anterior->proximo = ptr_no_atual->proximo; 
    
    free(ptr_no_atual);
    
    return true;

} 

int buscar_valor_lista(No *ptr_ptr_no, int valor) {  // pode retornar a posição, caso o dado fosse um tipo composto retornariamos ele
   
   //TODO
   return -1;

}

int buscar_posicao_lista(No *ptr_ptr_no, int posicao) { //retornar o valor da posição
   //TODO
   return -1;

}

void juntar_lista(No **ptr_ptr_lista01, No **ptr_ptr_lista02 ) {

    if (*ptr_ptr_lista01 == NULL && *ptr_ptr_lista02 != NULL) {

        *ptr_ptr_lista01 = *ptr_ptr_lista02; 

    } else if (*ptr_ptr_lista01 != NULL && *ptr_ptr_lista02 == NULL) {

        *ptr_ptr_lista02 = *ptr_ptr_lista01; 

    } else  if (*ptr_ptr_lista01 != NULL && *ptr_ptr_lista02 != NULL) {
     
        No *prt_aux = *ptr_ptr_lista02;
        while (prt_aux->proximo != NULL) {
            prt_aux = prt_aux->proximo;
        }
        prt_aux->proximo = *ptr_ptr_lista01;
        *ptr_ptr_lista01 = *ptr_ptr_lista02; 
    } 
}
