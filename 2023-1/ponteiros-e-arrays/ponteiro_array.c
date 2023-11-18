#include <stdio.h>

int main() {

    int vetor[5] = {5, 10, 15, 20, 25};

    int *p = vetor;

    //o nome de um vetor é um ponteiro para o primeiro índice.  
    printf("&vetor   = %p \n", &vetor);
    printf("vetor    = %p \n", vetor);
    printf("vetor[0] = %p \n", &vetor[0]);
    printf("p        = %p \n\n", p);

    printf("*vetor  = %d \n", *vetor);
    printf("*p      = %d \n\n", *p);

   
    for (int i = 0;i < 5;i++){
       printf("&vetor[%d] = %p | vetor[%d] = %d \n", i, &vetor[i], i, vetor[i]);
       printf("p+%d     = %p | p+%d    = %d \n\n", i, p+i, i, *(p + i));
    }

    printf("\n"); 
    
    return 0;
}