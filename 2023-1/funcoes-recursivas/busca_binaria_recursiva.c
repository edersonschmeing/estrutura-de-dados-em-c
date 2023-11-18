#include <stdio.h>


int busca_binaria_recursiva_vetor_dinamico(int *dados, int limite_esquerda, int limite_direita, int valor) {    
    
    int index_meio = (limite_esquerda + limite_direita) / 2;

    printf("index do meio %d\n\n", index_meio);

    if (limite_esquerda > limite_direita) //caso base 1
       return -1;
    
    if (dados[index_meio] == valor) //caso base 2
       return index_meio; 

    else if (dados[index_meio] < valor)   
       return busca_binaria_recursiva_vetor_dinamico(dados, index_meio + 1, limite_direita, valor);

    else 
       return busca_binaria_recursiva_vetor_dinamico(dados, limite_esquerda, index_meio - 1, valor);

    return -1;
}


int main() {
    
    int elementos[10] = {1, 3, 5, 10, 20, 23, 30, 40, 50, 55};
    
    int valor = 10;

    int index = busca_binaria_recursiva_vetor_dinamico(elementos, 0, 9, valor);

    printf("valor buscado = %d | index retornado = %d  \n\n", valor, index); 

    return 0;
}