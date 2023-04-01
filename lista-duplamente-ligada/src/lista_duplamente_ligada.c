#include "lista_duplamente_ligada.h" 
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>  

struct no {
    int dados; 
    No *proximo;  
    No *anterior;  
};

struct lista {
    int tamanho; 
    No *cabeca; 
    No *cauda; // com ponteiro cauda/fim é um deque.   
};


Lista *criar_lista() {

    //TODO: Implemente esta função.
    return  NULL;

}

void destruir_lista(Lista **lista) { 

    //TODO: Implemente esta função.

}

int tamanho_lista(Lista *lista) { 

    //TODO: Implemente esta função.

    return 0;
}

void imprimir_lista(Lista *lista) { 

    //TODO: Implemente esta função.

}

void adicionar_inicio_lista(Lista *lista, int valor) { 

    //TODO: Implemente esta função.

}

void adicionar_fim_lista(Lista *lista, int valor) { 

    //TODO: Implemente esta função.

}

void adicionar_posicao_lista(Lista *lista, int posicao) { 

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

