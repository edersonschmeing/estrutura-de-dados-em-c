#include "lista_ligada_com_cabeca.h" 
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>  

struct no {
    int dados; 
    No *ptr_no_proximo;  
};

struct lista {
    int tamanho; 
    No *ptr_no_cabeca;  
};

Lista *criar_lista() {

   Lista *lista = (Lista*) malloc(sizeof(Lista));
   lista->tamanho = 0;
   lista->ptr_no_cabeca = NULL;
      
   return lista;
}

void destruir_lista(Lista **ptr_ptr_lista) {
 
    No *ptr_no_atual = (*ptr_ptr_lista)->ptr_no_cabeca;
    No *ptr_no_auxiliar;    
    while (ptr_no_atual != NULL) {
       ptr_no_auxiliar = ptr_no_atual;
       ptr_no_atual = ptr_no_atual->ptr_no_proximo;
       free(ptr_no_auxiliar);          
    }
    free(*ptr_ptr_lista);
    *ptr_ptr_lista = NULL;
    
}

int tamanho_lista(Lista *ptr_lista) {

    //TODO: Implemente esta função.
    return -1;

}

void imprimir_lista(Lista *ptr_lista) { 

    printf("Lista Cabeça { ");
   // No *ptr_atual;
    
    for (No *ptr_no_atual = ptr_lista->ptr_no_cabeca; 
         ptr_no_atual != NULL; 
         ptr_no_atual = ptr_no_atual->ptr_no_proximo) {

       printf("%d -> ", ptr_no_atual->dados);

    }
    printf("NULL }\n\n");

}

void adicionar_inicio_lista(Lista *ptr_lista, int valor) {

    No *ptr_no_novo = (No*) malloc(sizeof(No));
    
    if (ptr_no_novo == NULL) {
       perror("malloc");
       exit(EXIT_FAILURE);
    }

    ptr_no_novo->dados = valor;
    ptr_no_novo->ptr_no_proximo = ptr_lista->ptr_no_cabeca;
    ptr_lista->ptr_no_cabeca = ptr_no_novo;   

    ptr_lista->tamanho = ptr_lista->tamanho + 1; 
    
} 

void adicionar_fim_lista(Lista *ptr_lista, int valor) {

    //TODO: Implemente esta função.

}

bool remover_inicio_lista(Lista *ptr_lista) {

    //TODO: Implemente esta função.

    return true;

} 

bool remover_fim_lista(Lista *ptr_lista) {

    
    //TODO: Implemente esta função.


    return true;

} 


bool remover_valor_lista(Lista *ptr_lista, int valor) {

    //TODO: Implemente esta função.
    return true;

} 


int buscar_valor_lista(Lista *ptr_lista, int valor) {

    //TODO: Implemente esta função.
    return -1;

}


int buscar_posicao_lista(Lista *ptr_lista, int posicao) {

    //TODO: Implemente esta função.
    return -1;

}
