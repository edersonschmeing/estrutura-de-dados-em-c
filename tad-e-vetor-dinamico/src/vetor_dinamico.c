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
    
    printf("Aumentando 2 vezes o tamanho atual do vetor( 2 * %d )\n", vetor_dinamico->tamanho);

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
       
        printf("Diminuindo o tamanho atual do vetor pela metade ( %d / 2 )\n", vetor_dinamico->tamanho); 
 
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

int busca_binaria_vetor_dinamico(int *dados, int limite_esquerda, int limite_direita, int valor) {    
    
    int index_meio = (limite_esquerda + limite_direita) / 2;

    if (limite_esquerda > limite_direita) 
       return -1;
    
    if (dados[index_meio] == valor)
       return index_meio; 

    else if (dados[index_meio] < valor)   
       return busca_binaria_vetor_dinamico(dados, index_meio + 1, limite_direita, valor);

    else 
       return busca_binaria_vetor_dinamico(dados, limite_esquerda, index_meio - 1,valor);

    return -1;
}

int busca_sequencial_vetor_dinamico(Vetor_Dinamico *vetor_dinamico, int valor) {    
    
    for (int i = 0; i < vetor_dinamico->quantidade; i++) {
        if (vetor_dinamico->dados[i] == valor) 
            return i; //retorna o index do elemento.
    }    
    return -1; //caso não encontre o elemente, retorna -1 com index.
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

    /*printf("index = { ");       
    for (int i = 0; i < vetor_dinamico->quantidade; i++) {
        printf("%i  ", i);
        if (!(i == vetor_dinamico->quantidade-1))
            printf(",");
    }    
    printf("\n"); */

    printf("vetor(index = valor) = { ");       
    for (int i = 0; i < vetor_dinamico->quantidade; i++) {
        printf("%i = %d ", i, vetor_dinamico->dados[i]);
        //printf("%d  ", vetor_dinamico->dados[i]); 
        if (!(i == vetor_dinamico->quantidade-1))
            printf("| ");
    }
    printf(" } \n\n");

}
  

// Em uma segunda versão vamos tentar aumentar o tamanho do vetor e 
// também tentar adicionar de forma ordenada
void adicionar_vetor_dinamico(Vetor_Dinamico *vetor_dinamico, int valor) {

    if (esta_cheio_vetor_dinamico(vetor_dinamico)) {
               
        aumentar_vetor_dinamico(vetor_dinamico);
    
    }
    if (vetor_dinamico->ordenado) { //encontrar a posição para inserção, deslocar os elementos para direita e inserir na posição. 

        int i;
        for (i = vetor_dinamico->quantidade -1; i >= 0 && vetor_dinamico->dados[i] > valor; i--)
            vetor_dinamico->dados[i+1] = vetor_dinamico->dados[i];
        
        vetor_dinamico->dados[i+1] = valor;
        vetor_dinamico->quantidade++;

    } else { //insere na ultima posição não ocupada
      
        vetor_dinamico->dados[vetor_dinamico->quantidade] = valor;
        vetor_dinamico->quantidade++;

    }
}

int busca_vetor_dinamico(Vetor_Dinamico *vetor_dinamico, int valor) { //para vetores ordenados, fazer busca binária
    
    int index = -1; //-1 caso não encontre o valor;
    if (vetor_dinamico->ordenado) {

       index = busca_binaria_vetor_dinamico(vetor_dinamico->dados, 0, vetor_dinamico->quantidade-1, valor); // retorna o index do elemento

    } else {

       index = busca_sequencial_vetor_dinamico(vetor_dinamico, valor); // retorna o index do elemento 

    }
    return index;

}


//Em uma segunda versão vamos tentar diminuir o tamanho do vetor conforme remover elementos.
void remover_vetor_dinamico(Vetor_Dinamico *vetor_dinamico, int index) { 
   
    if (index >= 0) { //validar se existe acessar verificado
      
        if (vetor_dinamico->ordenado) { // se usar vetor ordenado 
            for (int i = index ; i < vetor_dinamico->quantidade - 1; i++) {
                vetor_dinamico->dados[i] = vetor_dinamico->dados[i + 1]; //move uma posião todos os elementos maiores que o elemento que foi removido
            }
            vetor_dinamico->quantidade--;      
      
        } else {
        
            vetor_dinamico->dados[index] = vetor_dinamico->dados[vetor_dinamico->quantidade - 1]; //move o ultimo elemento (quantidade -1) para o lugar do elemento que foi removido
            vetor_dinamico->quantidade--; //decrementar a quantidade, no caso de vetor não ordenado     
        }
    
        diminuir_vetor_dinamico(vetor_dinamico);
    }

}


int acessar_vetor_dinamico(const Vetor_Dinamico *vetor_dinamico, int index) {

    return vetor_dinamico->dados[index];

} 

int acessar_verificado_vetor_dinamico(const Vetor_Dinamico *vetor_dinamico, int index) { // verifica se tem elemento

    // TODO:
    return 0;

}

int tamanho_vetor_dinamico(const Vetor_Dinamico *vetor_dinamico) {
    
    return vetor_dinamico->tamanho;

}

int quantidade_vetor_dinamico(const Vetor_Dinamico *vetor_dinamico) {
 
    return vetor_dinamico->quantidade;

}