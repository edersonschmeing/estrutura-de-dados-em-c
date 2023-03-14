#include "vetor_dinamico.h" 
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>  

// interfaces não disponivel para nossos clientes(quem usa nossa estrutura), no caso quem vai usar nosso TAD.

struct vetor_dinamico {
    bool ordenado;  // true indica que quer manter o vetor ordenado. 
    int tamanho;    // número máximo de elementos que podemos armazenados no vetor.
    int quantidade; // quantidade atual de elementos armazenados
    int *dados;     // vetor de int que representa nossos dados. 
};

bool esta_cheio_vetor_dinamico(Vetor_Dinamico* vetor_dinamico) {
   
    // TODO:
    return true;

}

// interfaces disponivel para nossos clientes, no caso quem vai usar nosso TAD. 
// Estão definidas no nosso vetor_dinamico.h

Vetor_Dinamico* criar_vetor_dinamico(int tamanho_vetor, bool ordenado) {

    Vetor_Dinamico *vetor_dinamico = (Vetor_Dinamico*) malloc(sizeof(Vetor_Dinamico));
    vetor_dinamico->ordenado = ordenado;
    vetor_dinamico->quantidade = 0;
    vetor_dinamico->tamanho = tamanho_vetor;
    vetor_dinamico->dados = (int*) calloc(tamanho_vetor, sizeof(int));
    
    return vetor_dinamico;

}

void destruir_vetor_dinamico(Vetor_Dinamico **vetor_dinamico_endereco) {

    Vetor_Dinamico *vetor_dinamico = *vetor_dinamico_endereco;
    free(vetor_dinamico->dados);
    free(vetor_dinamico);
    *vetor_dinamico_endereco = NULL;

}

void imprimir_vetor_dinamico(const Vetor_Dinamico *vetor_dinamico) {

    printf("vetor = { ");       
    for (int i = 0; i < vetor_dinamico->quantidade; i++) {
        printf("%i = %d", i, vetor_dinamico->dados[i]);
        if (!(i == vetor_dinamico->quantidade-1))
            printf(", ");
    }
    printf(" } \n\n");

}
  

// Em uma segunda versão vamos tentar aumentar o tamanho do vetor e 
// também tentar adicionar de forma ordenada
void adicionar_vetor_dinamico(Vetor_Dinamico *vetor_dinamico, int valor) {

    vetor_dinamico->dados[vetor_dinamico->quantidade] = valor;
    vetor_dinamico->quantidade++;

}


int busca_vetor_dinamico(Vetor_Dinamico *vetor_dinamico, int valor) { //para vetores ordenados, fazer busca binária

   // TODO:
   return 0;

}


int acessar_vetor_dinamico(const Vetor_Dinamico *vetor_dinamico, int index) {

    // TODO:
    return 0;

} 

int acessar_verificado_vetor_dinamico(const Vetor_Dinamico *vetor_dinamico, int index) { // verifica se tem elemento

    // TODO:
    return 0;

}

void remover_vetor_dinamico(Vetor_Dinamico *vetor_dinamico, int index) { 

    // precisa ajustar os elementos do vetor, mover o ultimo elemento (quantidade -1) para o lugar do elemento 
    // que foi removido e decrementar a quantidade. 

    // TODO:

}

int tamanho_vetor_dinamico(const Vetor_Dinamico *vetor_dinamico) {
    
    // TODO:
    return 0;

}

int quantidade_vetor_dinamico(const Vetor_Dinamico *vetor_dinamico) {
 
    // TODO:
    return 0;

}