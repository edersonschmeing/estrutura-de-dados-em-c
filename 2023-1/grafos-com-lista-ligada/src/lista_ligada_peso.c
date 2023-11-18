#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>  

#include "lista_ligada_peso.h" 


struct no {
    int dados; 
    float peso;
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

    return ptr_lista->tamanho;

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

void inserir_lista(Lista *ptr_lista, int valor, float peso) {

    No *ptr_no_novo = (No *)malloc(sizeof(No));

    ptr_no_novo->dados = valor;
    ptr_no_novo->peso = peso;
    
    ptr_no_novo->ptr_no_proximo = NULL;

    if (ptr_lista->ptr_no_cabeca == NULL) {

        ptr_lista->ptr_no_cabeca = ptr_no_novo;

    }else {

        ptr_no_novo->ptr_no_proximo = ptr_lista->ptr_no_cabeca;
        ptr_lista->ptr_no_cabeca = ptr_no_novo;

    }
    ptr_lista->tamanho = ptr_lista->tamanho + 1;

}

void remover_valor_lista(Lista *ptr_lista, int valor) { 

    No *ptr_no_atual = ptr_lista->ptr_no_cabeca;
   
    if (ptr_no_atual == NULL) 
       return;

    No *ptr_no_anterior;

    while ((ptr_no_atual != NULL) && (ptr_no_atual->dados != valor)) {
       ptr_no_anterior = ptr_no_atual;
       ptr_no_atual = ptr_no_atual->ptr_no_proximo;     
    }

    if (ptr_no_atual == NULL) 
        return;

    if (ptr_no_atual == ptr_lista->ptr_no_cabeca) 
       ptr_lista->ptr_no_cabeca = ptr_no_atual->ptr_no_proximo;
    else 
       ptr_no_anterior->ptr_no_proximo = ptr_no_atual->ptr_no_proximo; 
    
    free(ptr_no_atual);
    
} 

