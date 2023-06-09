#include <stdio.h>
#include <stdlib.h>
#include "heap_binario_heap_sort.h"



int main(){

    //int vetor[11] = {1,23,4,67,-8,54,90,21,14,-5,1};
    int vetor[7] = {23,4,67,-8,90,54,21};
    //int vetor[7] = {1,2,3,4,5,6,7};
    int numero_de_elementos = 7;

    printf("Sem ordenar:\n");
    printf_vetor(vetor, numero_de_elementos);
    
    heap_sort(vetor, numero_de_elementos);
    printf_heap(vetor);

    printf("Ordenado:\n");
    printf_vetor(vetor, numero_de_elementos);

    return 0;
}