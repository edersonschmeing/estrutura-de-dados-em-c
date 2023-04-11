#include "fila_como_vetor.h" 
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>  

// interfaces não disponivel para nossos clientes(quem usa nossa estrutura), no caso quem vai usar nosso TAD.

struct fila {
    int tamanho;    // número máximo de elementos que podemos armazenados no vetor.
    int quantidade; // quantidade atual de elementos armazenados, pode conseguir pelo inicio e fim.
    int *dados;     // vetor de int que representa nossos dados. 
    int inicio;
    int fim;
};

//se vetor estiver cheio, aumentamos 2 vezes o seu tamanho.
void aumentar_fila(Fila *fila) {
    
    printf("Aumentando 2 vezes o tamanho atual da vetor( 2 * %d )\n", fila->tamanho);

    int *temp = fila->dados; 

    fila->tamanho = fila->tamanho * 2;

    fila->dados = (int*)calloc(fila->tamanho, sizeof(int)); 

    for (int i = 0; i < fila->tamanho; i++ ) { 
            fila->dados[i] = temp[i];
    }
    free(temp);

}

//diminuir o tamanho do vetor pela metade quando tiver 1/4 ou 25% cheio   
void diminuir_fila(Fila *fila) {

    if ((fila->quantidade < fila->tamanho / 4) && 
        (fila->tamanho >= 4)) { 
       
        printf("Diminuindo o tamanho atual do vetor pela metade ( %d / 2 )\n", fila->tamanho); 
 
        int *temp = fila->dados; 
        fila->tamanho /= 2;

        fila->dados = (int*)calloc(fila->tamanho, sizeof(int)); 

        for (int j = 0; j < fila->tamanho; j++ ) { 
            fila->dados[j] = temp[j];
        }
        free(temp);
    }
}

bool esta_cheio_pilha(Fila *fila) {
   
    return (fila->tamanho == fila->quantidade);

}

// interfaces disponivel para nossos clientes, no caso quem vai usar nosso TAD. 
// Estão definidas no nosso vetor_dinamico.h

Fila* criar_fila(int tamanho) {

    Fila *fila = (Fila*) malloc(sizeof(Fila));
    fila->quantidade = 0;
    fila->tamanho = tamanho;
    fila->inicio = -1;
    fila->fim = -1;
    fila->dados = (int*) calloc(tamanho, sizeof(int));
    
    return fila;

}

void destruir_pilha(Fila **fila_endereco) {

    Fila *fila = *fila_endereco;
    free(fila->dados);
    free(fila);
    *fila_endereco = NULL;

}
 

void adicionar_fila(Fila *fila, int valor) {

    
}

void remover_fila(Fila *fila) { 

}

int tamanho_fila(const Fila *fila) {
    
    return fila->tamanho;

}

int quantidade_fila(const Fila *fila) {
 
    return fila->quantidade;

}

void imprimir_fila(const Fila *fila) {

    printf("Fila = { ");       
    for (int i = fila->quantidade-1; i >= 0; i--) {

        printf("%d", fila->dados[i]);

        if ((i > 0))
            printf(" -> ");
    }
    printf(" } \n\n");
}
