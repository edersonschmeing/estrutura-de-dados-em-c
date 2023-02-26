#include <stdio.h>



int main() {
         
    int a = 30; 
    printf("&a = %p \n\n", &a);

    printf("O tamanho da váriavel ( a ) é %ld bytes\n\n", sizeof(a));
    
    unsigned long tamanho_a = sizeof(a);
    printf("O tamanho da váriavel ( a ) é = %ld bytes\n\n", tamanho_a);   

    return 0;
}