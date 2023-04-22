#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>  

#include "lista_ligada.h" 

struct item {
    int valor; 
    char *chave;  
};

struct no {
    Item dados; 
    No *proximo;  
};

No *criar_lista_ligada() {
   return NULL;
}

void destruir_lista_ligada(No *ptr_no) {
    No *ptr_no_aux;    
    while (ptr_no != NULL) {
       ptr_no_aux = ptr_no;
       ptr_no = ptr_no->proximo;
       free(ptr_no_aux);          
    }
}

No* adicionar_lista_ligada(No *ptr_ptr_no, char *chave, int valor) { 
    
    return NULL;
} 

No* remover_lista_ligada(No *ptr_ptr_no, char *chave) { 

    return NULL;
} 

int buscar_valor_lista_ligada(No *ptr_no, char *chave) { 

    return -1;
}

void imprimir_lista_ligada(No *ptr_no) {

    while (ptr_no != NULL) {
        printf("(%s, %d) ", ptr_no->dados.chave, ptr_no->dados.valor);
        if (ptr_no->proximo != NULL) 
            printf("-> ");
        ptr_no = ptr_no->proximo; 
    }
}