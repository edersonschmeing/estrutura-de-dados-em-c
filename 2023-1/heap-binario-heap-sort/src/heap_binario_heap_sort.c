#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "heap_binario_heap_sort.h" 


void printf_vetor(int *vetor, int n){
    int i;
    for(i = 0; i < n; i++)
        printf("%2d ", vetor[i]);
    printf("\n");
}


void printfLinha(){
    printf("----------------------------------------------\n");
}

void printf_heap(int *vetor) {
    printf("\t\t%d\n", vetor[0]);
    printf("\t%d\t\t%d\n", vetor[1], vetor[2]);
    printf("%d\t%d\t\t%d\t%d\n", vetor[3], vetor[4], vetor[5], vetor[6]);
    printfLinha();
}

void cria_heap(int *vetor, int i, int f){
    int aux = vetor[i];
    int j = i * 2 + 1;
    while (j <= f){
        if(j < f){
            if(vetor[j] < vetor[j + 1]){
                j = j + 1;
            }
        }
        if(aux < vetor[j]){
            vetor[i] = vetor[j];
            i = j;
            j = 2 * i + 1;
        }else{
            j = f + 1;
        }
    }
    vetor[i] = aux;
}

void heap_sort(int *vetor, int n){
    int i, aux;
    for(i=(n - 1)/2; i >= 0; i--){
        cria_heap(vetor, i, n-1);
    }
    for (i = n-1; i >= 1; i--){
        aux = vetor[0];
        vetor [0] = vetor [i];
        vetor [i] = aux;
        cria_heap(vetor, 0, i - 1);
    }
}