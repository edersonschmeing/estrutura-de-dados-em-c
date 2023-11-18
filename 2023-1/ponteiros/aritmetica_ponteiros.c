#include <stdio.h>
#include <stdlib.h>


int main() {
    
    int a[3] = {10, 20, 30}; 
    int *p = &a;  
    
    printf("&a    = %p | a = %d\n", &a, a[0]);
    printf("&a[0] = %p | a = %d\n", &a[0], a[0]);
    printf("&a[1] = %p | b = %d\n", &a[1], a[1]);
    printf("&b[2] = %p | c = %d\n", &a[2], a[2]);
    printf("\n");

    //endereço de memória da variável a

    //posição inicial do vetor
    printf("&p = %p | p = %p | p = %ld | *p = %d \n\a", &p, p, p, *p);
    
    // avança 8 bytes por que é um ponteiro para int
    p = p + 2; 
    printf("&p = %p | p = %p | p = %ld | *p = %d \n", &p, p, p, *p);

    // retorna 4 bytes por que é um ponteiro para int.
    p--;  
    // %ld formata em decimal 
    printf("&p = %p | p = %p | p = %ld | *p = %d \n", &p, p, p, *p);

    // avança 4 bytes por que é um ponteiro para int
    p++; 
    printf("&p = %p | p = %p | p = %ld | *p = %d \n", &p, p, p, *p);

    return 0;
}