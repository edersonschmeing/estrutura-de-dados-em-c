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


void destruir_recursivo_lista() { 

}

void destruir_interativo_lista(Lista **lista) {

    No *p = (*lista)->cabeca;
    No *aux;    
    while (p != NULL) {
       aux = p;
       p = p->proximo;
       free(aux);          
    }
    free(*lista);
    *lista = NULL;
        
}

void destruir_lista(Lista **lista) {
 
    destruir_interativo_lista(lista);
    
}

void imprimir_recursivo_lista(Lista *lista) { 

}

void imprimir_interativo_lista(Lista *lista) { 

    printf("Lista { ");
    No *p;
    for (p = lista->cabeca; p != NULL; p = p->proximo)
       printf("%d -> ", p->dados);
    printf("NULL }\n\n");

}   

void imprimir_lista(Lista *lista) { 

    //imprimir_recursivo_lista(lista);
    
    imprimir_interativo_lista(lista);    

}


void adicionar_inicio_lista(Lista *lista, int valor) {

    No *p = (No*) malloc(sizeof(No));
    if (p == NULL) {
       perror("malloc");
       exit(EXIT_FAILURE);
    }

    p->dados = valor;
    p->proximo = lista->cabeca;
    lista->cabeca = p;   
    
} 