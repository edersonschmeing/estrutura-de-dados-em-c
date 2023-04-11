#include "fila_como_lista_ligada.h" 
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>  

struct no {
    int dados; 
    No *ptr_no_proximo;  
};

struct fila {
    int tamanho; 
    No *ptr_no_inicio;
    No *ptr_no_fim;
};

Fila *criar_fila() {

    return NULL;
}

void destruir_fila(Fila **ptr_ptr_fila) {

}

int tamanho_fila(Fila *ptr_fila) {

    return 0;

}

void imprimir_fila(Fila *ptr_fila) {

}

void adicionar_fila(Fila *ptr_fila, int valor) {

}

bool remover_fila(Fila *ptr_fila) {

    return false;

} 

int buscar_valor_fila(Fila *ptr_fila, int valor) {

    return 0;

}