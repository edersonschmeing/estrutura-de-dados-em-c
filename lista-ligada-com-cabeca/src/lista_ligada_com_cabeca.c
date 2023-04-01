#include "lista_ligada_com_cabeca.h" 
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>  

struct no {
    int dados; 
    No *proximo;  
};

struct lista {
    int tamanho; 
    No *cabeca;  
};

Lista *criar_lista() {

   Lista *lista = (Lista*) malloc(sizeof(Lista));
   lista->tamanho = 0;
   lista->cabeca = NULL;
      
   return lista;
}

void destruir_lista(Lista **lista) {
 
    No *ptr_no_atual = (*lista)->cabeca;
    No *aux;    
    while (ptr_no_atual != NULL) {
       aux = ptr_no_atual;
       ptr_no_atual = ptr_no_atual->proximo;
       free(aux);          
    }
    free(*lista);
    *lista = NULL;
    
}

int tamanho_lista(Lista *lista) {

    //TODO: Implemente esta função.
    return -1;

}

void imprimir_lista(Lista *lista) { 

    printf("Lista { ");
   // No *ptr_atual;
    
    for (No *ptr_no_atual = lista->cabeca; 
         ptr_no_atual != NULL; 
         ptr_no_atual = ptr_no_atual->proximo) {

       printf("%d -> ", ptr_no_atual->dados);

    }
    printf("NULL }\n\n");

}

void adicionar_inicio_lista(Lista *lista, int valor) {

    No *ptr_no_novo = (No*) malloc(sizeof(No));
    
    if (ptr_no_novo == NULL) {
       perror("malloc");
       exit(EXIT_FAILURE);
    }

    ptr_no_novo->dados = valor;
    ptr_no_novo->proximo = lista->cabeca;
    lista->cabeca = ptr_no_novo;   

    lista->tamanho = lista->tamanho + 1; 
    
} 

void adicionar_fim_lista(Lista *lista, int valor) {

    //TODO: Implemente esta função.

}

bool remover_inicio_lista(Lista *lista) {

    //TODO: Implemente esta função.

    return true;

} 

bool remover_fim_lista(Lista *lista) {

    
    //TODO: Implemente esta função.


    return true;

} 


bool remover_valor_lista(Lista *lista, int valor) {

    //TODO: Implemente esta função.
    return true;

} 


int buscar_valor_lista(Lista *lista, int valor) {

    //TODO: Implemente esta função.
    return -1;

}


int buscar_posicao_lista(Lista *lista, int posicao) {

    //TODO: Implemente esta função.
    return -1;

}
