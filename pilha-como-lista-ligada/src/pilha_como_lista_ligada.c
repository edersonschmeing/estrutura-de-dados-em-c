#include "pilha_como_lista_ligada.h" 
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>  

struct no {
    int dados; 
    No *proximo;  
};

No *criar_pilha() {
   return NULL;
}

void destruir_pilha(No **ptr_no) {
 
    No *ptr_no_aux;    
    while (*ptr_no != NULL) {
       ptr_no_aux = *ptr_no;
       *ptr_no = (*ptr_no)->proximo;
       free(ptr_no_aux);          
    }
}

void imprimir_pilha(No *ptr_no) { 

    //printf("Lista inicío \n");
    while (ptr_no != NULL) {
       printf("%d -> ", ptr_no->dados );
       //printf("atual: %p valor: %d próximo: %p \n", ptr_no, ptr_no->dados, ptr_no->proximo );

       ptr_no = ptr_no->proximo;

    }
    printf("NULL \n\n");    
    //printf("fim \n\n");
    
}   

int tamanho_pilha(const No *ptr_no) { 
    
    //TODO
    return 0;

}

void empilhar_pilha(No **ptr_ptr_no, int valor) {  //&l

    No *ptr_no_novo = (No*) malloc(sizeof(No));

    if (ptr_no_novo == NULL) {
       perror("malloc");
       exit(EXIT_FAILURE);
    }

    ptr_no_novo->dados = valor;
    ptr_no_novo->proximo = *ptr_ptr_no;
    
    *ptr_ptr_no = ptr_no_novo;
} 

bool desemplilhar_pilha(No **ptr_ptr_no) {
 
     //TODO
     return true;

} 

int buscar_valor_pilha(No *ptr_ptr_no, int valor) {  // pode retornar a posição, caso o dado fosse um tipo composto retornariamos ele
   
   //TODO
   return -1;

}
