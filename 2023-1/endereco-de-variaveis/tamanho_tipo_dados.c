#include <stdio.h>

int main() {
    
    int a;

    //tamanho de variáveis
    printf("sizeof(a)      = %ld bytes\n", sizeof(a));
    
    unsigned long tamanho_a = sizeof(a);
    printf("tamanho_a      = %ld bytes\n\n", tamanho_a);

    //tamanho dos tipos de dados
    printf("sizeof(char)   = %ld bytes\n", sizeof(char));
    printf("sizeof(int)    = %ld bytes\n", sizeof(int));

    printf("sizeof(short)  = %ld bytes\n", sizeof(short));
    printf("sizeof(float)  = %ld bytes\n", sizeof(float));
    printf("sizeof(double) = %ld bytes\n", sizeof(double));
    printf("sizeof(long)   = %ld bytes\n", sizeof(long));
    printf("sizeof(unsigned long) = %ld bytes\n\n", sizeof(unsigned long));
  
    // tamanho de ponteiros. 
    // ponteiros guardam endereços de memória e os endereços são empre do mesmo tamanho.
    printf("sizeof(void *)  = %ld bytes\n", sizeof(void *));
    printf("sizeof(char *)  = %ld bytes\n", sizeof(char *));
    printf("sizeof(int *)   = %ld bytes\n", sizeof(int *));
    printf("sizeof(int **)  = %ld bytes\n", sizeof(int **));
    printf("sizeof(int ***) = %ld bytes\n", sizeof(int ***));
    printf("sizeof(float *) = %ld bytes\n", sizeof(float *));

    return 0;
}