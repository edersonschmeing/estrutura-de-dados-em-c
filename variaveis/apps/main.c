#include <stdio.h>

int main() {
    
    int a = 20;
    int b, c;

     // & obtem o endereço de memória da váriavel 

    printf("&a = %p | a = %d\n", &a, a);
    printf("&b = %p | b = %d\n", &b, b);
    printf("&c = %p | c = %d\n\n", &c, c);

    b = 10;
    c = b + a;

    printf("&a = %p | a = %d\n", &a, a);
    printf("&b = %p | b = %d\n", &b, b);
    printf("&c = %p | c = %d\n\n", &c, c);

    return 0;
}