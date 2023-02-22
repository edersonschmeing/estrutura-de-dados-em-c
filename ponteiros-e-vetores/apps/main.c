#include <stdio.h>

int main() {

    int vec[5] = {5, 10, 15, 20, 25};

    //o nome de um vetor é um ponteiro para o primeiro índice. 
    printf("vec = %p \n\n", vec);


    printf("Índice\n");
    for (int i = 0;i < 5;i++){
       printf("&vec[%d] = %p | vec[%d] = %d \n", i, &vec[i], i, vec[i]);
    }

    printf("\n"); 
    
    int *p = vec;

    printf("Aritmética de Ponteiros\n");    
    for (int i = 0;i < 5;i++){       
        printf("&p+%d  = %p | p+%d  = %d \n", i, p+i, i, *(p + i));
    }
    
    return 0;
}