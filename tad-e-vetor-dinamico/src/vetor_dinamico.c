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
   
    return (vetor_dinamico->tamanho == vetor_dinamico->quantidade);

}

//se vetor estiver cheio, aumentamos 2 vezes o seu tamanho.
void aumentar_vetor_dinamico(Vetor_Dinamico *vetor_dinamico) {
    
    printf("executou função para aumentar o tamanho do vetor \n");

    int *temp = vetor_dinamico->dados; 
    //vetor_dinamico->tamanho *= 2;
    vetor_dinamico->tamanho = vetor_dinamico->tamanho * 2;

    vetor_dinamico->dados = (int*)calloc(vetor_dinamico->tamanho, sizeof(int)); 

    for (int i = 0; i < vetor_dinamico->tamanho; i++ ) { 
            vetor_dinamico->dados[i] = temp[i];
    }
    free(temp);

}


//diminuir o tamanho do vetor pela metade quando tiver 1/4 ou 25% cheio   
void diminuir_vetor_dinamico(Vetor_Dinamico *vetor_dinamico) {

    if ((vetor_dinamico->quantidade < vetor_dinamico->tamanho / 4) && 
        (vetor_dinamico->tamanho >= 4)) { 

        printf("executou função para diminuir o tamanho do vetor \n");    

        int *temp = vetor_dinamico->dados; 
        vetor_dinamico->tamanho /= 2;
        //vetor_dinamico->tamanho = vetor_dinamico->tamanho / 2;

        vetor_dinamico->dados = (int*)calloc(vetor_dinamico->tamanho, sizeof(int)); 

        for (int j = 0; j < vetor_dinamico->tamanho; j++ ) { 
            vetor_dinamico->dados[j] = temp[j];
        }
        free(temp);
    }
}


int busca_binaria_dinamico(Vetor_Dinamico *vetor_dinamico, int valor) {    
    
    // TODO:
    //return = -1; caso não encontre o valor;
    //return = index caso encontre o valor;
    return -1;
}

int busca_sequencial_dinamico(Vetor_Dinamico *vetor_dinamico, int valor) {    
    
    // TODO:
    //return = -1; caso não encontre o valor;
    //return = index caso encontre o valor;
    return -1;
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

    if (esta_cheio_vetor_dinamico(vetor_dinamico)) {
               
        aumentar_vetor_dinamico(vetor_dinamico);
    
    }
    if (vetor_dinamico->ordenado) {
       
       //adicionar no vetor ordenado

    }else{ 
        vetor_dinamico->dados[vetor_dinamico->quantidade] = valor;
        vetor_dinamico->quantidade++;
    }

}

int busca_vetor_dinamico(Vetor_Dinamico *vetor_dinamico, int valor) { //para vetores ordenados, fazer busca binária
    
    int index = -1;
    if (vetor_dinamico->ordenado) {
       index = busca_binaria_dinamico(vetor_dinamico, valor); 
    }else {
       index = busca_sequencial_dinamico(vetor_dinamico, valor); 
    }
    //return = -1; caso não encontre o valor;
    //return = index caso encontre o valor;
    return index;

}


//Em uma segunda versão vamos tentar diminuir o tamanho do vetor conforme remover elementos.
void remover_vetor_dinamico(Vetor_Dinamico *vetor_dinamico, int index) { 
   
    if (vetor_dinamico->ordenado) { // se usar vetor ordenado 
        for (int i = index; i < vetor_dinamico->quantidade - 1; i++) {
            vetor_dinamico->dados[i] = vetor_dinamico->dados[i+1]; //move uma posião todos os elementos maiores que o elemento que foi removido
        }      
    } else {
       
        vetor_dinamico->dados[index] = vetor_dinamico->dados[vetor_dinamico->quantidade - 1]; //move o ultimo elemento (quantidade -1) para o lugar do elemento que foi removido
        vetor_dinamico->quantidade--; //decrementar a quantidade, no caso de vetor não ordenado     
    }
 
    diminuir_vetor_dinamico(vetor_dinamico);

}


int acessar_vetor_dinamico(const Vetor_Dinamico *vetor_dinamico, int index) {

    // TODO:
    return 0;

} 

int acessar_verificado_vetor_dinamico(const Vetor_Dinamico *vetor_dinamico, int index) { // verifica se tem elemento

    // TODO:
    return 0;

}

int tamanho_vetor_dinamico(const Vetor_Dinamico *vetor_dinamico) {
    
    return vetor_dinamico->tamanho;

}

int quantidade_vetor_dinamico(const Vetor_Dinamico *vetor_dinamico) {
 
    // TODO:
    return 0;

}