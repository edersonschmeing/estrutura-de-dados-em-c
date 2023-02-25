#include <stdio.h>
#include <stdlib.h>


int main() {
    
    int a = 20; 
    int b = 1;
    int c = 30;
    int *p = &a;  
    
    printf("&a = %p | a = %d\n", &a, a);
    printf("&b = %p | b = %d\n", &b, b);
    printf("&c = %p | c = %d\n", &c, c);
    printf("\n");

    //endereço de memória da variável a
    printf("&p = %p | p = %p | p = %ld | *p = %d \n", &p, p, p, *p);
    
    p++; // avança 4 bytes por que é um ponteiro para int
    printf("&p = %p | p = %p | p = %ld | *p = %d \n", &p, p, p, *p);

    p--; // retorna 4 bytes por que é um ponteiro para int
    printf("&p = %p | p = %p | p = %ld | *p = %d \n", &p, p, p, *p);

    p = p + 2; // avança 8 bytes por que é um ponteiro para int
    printf("&p = %p | p = %p | p = %ld | *p = %d \n", &p, p, p, *p);

    return 0;
}