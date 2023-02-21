#include <stdio.h>

int main() {
    int a;

    //tamanho da váriavel do tipo int
    printf("sizeof(a)      = %ld bytes\n", sizeof(a));

    //tamanho dos tipos de dados
    printf("sizeof(int)    = %ld bytes\n", sizeof(int));
    printf("sizeof(short)  = %ld bytes\n", sizeof(short));
    printf("sizeof(float)  = %ld bytes\n", sizeof(float));
    printf("sizeof(double) = %ld bytes\n\n", sizeof(double));
    printf("sizeof(long)   = %ld bytes\n", sizeof(long));
    printf("sizeof(unsigned long) = %ld bytes\n", sizeof(unsigned long));
  
    // tamanho de ponteiros. 
    // ponteiros guardam endereços de memória e os endereços são empre do mesmo tamanho.
    printf("sizeof(void *)  = %ld bytes\n", sizeof(void *));
    printf("sizeof(int *)   = %ld bytes\n", sizeof(int *));
    printf("sizeof(int **)  = %ld bytes\n", sizeof(int **));
    printf("sizeof(int ***) = %ld bytes\n", sizeof(int ***));
    printf("sizeof(float *) = %ld bytes\n", sizeof(float *));

    return 0;
}