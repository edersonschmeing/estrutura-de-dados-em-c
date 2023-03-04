#include <stdio.h>
#include <stdlib.h>  // contém o NULL, calloc, malloc, free


int main() {

    //Toda varável e alocada na memória Stack. 

    //alocação estática na memória Stack. 
    printf("### ALOCAÇÃO ESTÁTICA ### \n");
    int a = 30; 
    printf("&a = %p, a = %d \n\n", &a, a);


    //alocação dinâmica na memória Heap com funçõa malloc
    printf("### ALOCAÇÃO DINÂMICA USANDO FUNÇÃO (malloc) ### \n");
    int *b = malloc(1 * sizeof(int)); // malloc não incializa o espaço alocado. Todos os elementos possuem lixo de memória.
    *b = 20; 
    printf("&b = %p | b = %p | *b = %d \n\n", &b, b, *b);
    //free(b); //desaloca/libera variável da memória Heap 


     //alocação dinâmica na memória Heap com funçõa calloc
    printf("### ALOCAÇÃO DINÂMICA USANDO FUNÇÃO (calloc) ### \n" );
    int *c = calloc(1, sizeof(int)); // calloc incializa o espaço alocado.
    *c = 50; 
    printf("&c = %p | c = %p | *c = %d \n\n", &c, c, *c);
    free(c); //desaloca/libera variável da memória Heap 

    free(b);
    
    return 0;
}
