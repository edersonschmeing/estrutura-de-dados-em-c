#include <stdio.h>

int main() {
    
    short a = 20;
    int b;
    long c; 

     // & obtem o endereço de memória da váriavel 

    printf("&a = %p | &a = %ld | a = %d\n", &a, &a, a);
    printf("&b = %p | &b = %ld | b = %d\n", &b, &b, b);
    printf("&c = %p | &c = %ld | c = %d\n\n", &c, &c, c);

    //printf("Digite um valor inteiro: ");
    //scanf("%d", &b);
    b = 10;
    c = b + a;

    printf("&a = %p | &a = %ld | a = %d\n", &a, &a, a);
    printf("&b = %p | &b = %ld | b = %d\n", &b, &b, b);
    printf("&c = %p | &c = %ld | c = %d\n\n", &c, &c, c);


    return 0;
}