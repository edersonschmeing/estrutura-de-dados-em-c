#include "pilha_como_vetor.h" 
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>  

// interfaces não disponivel para nossos clientes(quem usa nossa estrutura), no caso quem vai usar nosso TAD.

struct pilha {
    int tamanho;    // número máximo de elementos que podemos armazenados no vetor.
    int quantidade; // quantidade atual de elementos armazenados
    int *dados;     // vetor de int que representa nossos dados. 
};

//se vetor estiver cheio, aumentamos 2 vezes o seu tamanho.
void aumentar_pilha(Pilha *pilha) {
    
    printf("Aumentando 2 vezes o tamanho atual da vetor( 2 * %d )\n", pilha->tamanho);

    int *temp = pilha->dados; 

    pilha->tamanho = pilha->tamanho * 2;

    pilha->dados = (int*)calloc(pilha->tamanho, sizeof(int)); 

    for (int i = 0; i < pilha->tamanho; i++ ) { 
            pilha->dados[i] = temp[i];
    }
    free(temp);

}

//diminuir o tamanho do vetor pela metade quando tiver 1/4 ou 25% cheio   
void diminuir_pilha(Pilha *pilha) {

    if ((pilha->quantidade < pilha->tamanho / 4) && 
        (pilha->tamanho >= 4)) { 
       
        printf("Diminuindo o tamanho atual do vetor pela metade ( %d / 2 )\n", pilha->tamanho); 
 
        int *temp = pilha->dados; 
        pilha->tamanho /= 2;

        pilha->dados = (int*)calloc(pilha->tamanho, sizeof(int)); 

        for (int j = 0; j < pilha->tamanho; j++ ) { 
            pilha->dados[j] = temp[j];
        }
        free(temp);
    }
}

bool esta_cheio_pilha(Pilha *pilha) {
   
    return (pilha->tamanho == pilha->quantidade);

}

// interfaces disponivel para nossos clientes, no caso quem vai usar nosso TAD. 
// Estão definidas no nosso vetor_dinamico.h

Pilha* criar_pilha(int tamanho) {

    Pilha *pilha = (Pilha*) malloc(sizeof(pilha));
    pilha->quantidade = 0;
    pilha->tamanho = tamanho;
    pilha->dados = (int*) calloc(tamanho, sizeof(int));
    
    return pilha;

}

void destruir_pilha(Pilha **pilha_endereco) {

    Pilha *pilha = *pilha_endereco;
    free(pilha->dados);
    free(pilha);
    *pilha_endereco = NULL;

}
 

void empilhar_pilha(Pilha *pilha, int valor) {

    if (esta_cheio_pilha(pilha)) {
               
        aumentar_pilha(pilha);
    
    } 
    pilha->dados[pilha->quantidade] = valor;
    pilha->quantidade++;
    
}

void desempilhar_pilha(Pilha *pilha) { 
        
    pilha->quantidade--; //decrementa a quantidade     
    
    diminuir_pilha(pilha);
}

int tamanho_pilha(const Pilha *pilha) {
    
    return pilha->tamanho;

}

int quantidade_pilha(const Pilha *pilha) {
 
    return pilha->quantidade;

}

void imprimir_pilha(const Pilha *pilha) {

    printf("Pilha = { ");       
    for (int i = pilha->quantidade-1; i >= 0; i--) {

        printf("%d", pilha->dados[i]);

        if ((i > 0))
            printf(" -> ");
    }
    printf(" } \n\n");
}
