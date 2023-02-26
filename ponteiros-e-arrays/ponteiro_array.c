#include <stdio.h>

int main() {

    int vec[5] = {5, 10, 15, 20, 25};

    int *p = vec;


    //o nome de um vetor é um ponteiro para o primeiro índice. 
    printf("vec    = %p \n", vec);
    printf("vec[0] = %p \n", &vec[0]);
    printf("p      = %p \n\n", p);

    printf("*vec   = %d \n", *vec);
    printf("*p     = %d \n\n", *p);

   
    for (int i = 0;i < 5;i++){
       printf("&vec[%d] = %p | vec[%d] = %d \n", i, &vec[i], i, vec[i]);
       printf("p+%d     = %p | p+%d    = %d \n\n", i, p+i, i, *(p + i));
    }

    printf("\n"); 
    
/*    printf("Aritmética de Ponteiros\n");    
    for (int i = 0;i < 5;i++){       
        printf("&p+%d  = %p | p+%d  = %d \n", i, p+i, i, *(p + i));
    }
  */  
    return 0;
}