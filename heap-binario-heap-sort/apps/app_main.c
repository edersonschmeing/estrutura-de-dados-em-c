#include <stdio.h>
#include <stdlib.h>
#include "heap_binario_heap_sort.h"



int main(){
//==============================================================================
    //int vet[11] = {1,23,4,67,-8,54,90,21,14,-5,1};
    int vet[7] = {23,4,67,-8,90,54,21};
    //int vet[7] = {1,2,3,4,5,6,7};
    int N = 7;

    printf("Sem ordenar:\n");
    printfVet(vet,N);
    //printfLinha();

    heapSort(vet,N);
    printfHeap(vet);

    printf("Ordenado:\n");
    printfVet(vet,N);
//==============================================================================

    return 0;
}