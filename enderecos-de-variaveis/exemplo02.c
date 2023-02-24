#include <stdio.h>

int main() {
    
    char a = '0';
    short b = 1;

    int c = 3;
    printf("&a = %p \n", &c);
//  &c = 0x7ffdfd0b0131 

    long d = 4 ; 
    long e = 5;

     // & obtem o endereço de memória da váriavel.
    printf("&a = %p \n", &a);
    printf("&a = %p | &a = %ld | a = %c\n", &a, &a, a);
    printf("&b = %p | &b = %ld | b = %d\n", &b, &b, b);
    printf("&c = %p | &c = %ld | c = %d\n", &c, &c, c);
    printf("&d = %p | &d = %ld | d = %d\n", &d, &d, d);
    printf("&e = %p | &d = %ld | e = %d\n\n", &e, &e, e);
    

    return 0;
}