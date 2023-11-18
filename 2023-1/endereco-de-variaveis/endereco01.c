#include <stdio.h>

int main() {
   
    /*
    A memória RAM ( Random Access Memory) de qualquer computador é uma sequência de bytes, 
    onde cada byte armazena 8 bits de informação e é um endereço de memória. 
    Esses endereços utilizam o sistema hexadecimal.

    Decimal:  0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, ..., n - 1.
    Hexadecimal: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, A, B, C, D, E, F, 10, 11, 12, 13, ..., n - 1.

    Uma variável é um espaço ou uma posição, localizada na memória do computador capaz de armazenar um valor/conteúdo. 
    Toda variável tem um nome, um tipo de dado, um valor/conteúdo e um endereço de memória. 
    Elas ocupa um número de bytes dependendo do seu tipo de dado.

    Os tipos de dados podem ser char que ocupa 1 bytes, int ocupa 4 bytes, double ocupa 8 bytes e entre outros.

    O operador & antes da variável retorna o endereço de memória dela, esse endereço é 
    do primeiro byte da sequência de bytes ocupada pela variável.
    A função sizeof retorna o número de bytes para um determinado tipo de dado.     
    */   
    
    char a = 'A'; 
    int b = 1;

    printf("&a = %p \n\n", &a);
    printf("&a = %p \n\n", &b);

    printf("&a = %p \n\n", refb);


    unsigned long tamanho_a = sizeof(a);
    unsigned long tamanho_b = sizeof(b);

    printf("O tamanho da váriavel ( a ) é %ld bytes\n", sizeof(a));   
    printf("O tamanho da váriavel ( a ) é %ld bytes\n\n", tamanho_a);

    printf("&a = hexa: %p | dec: %ld \n", &a, &a);
    printf("&b = hexa: %p | dec: %ld \n\n", &b, &b);
   
    return 0;
}

/*
prinft
%c -> caracter simples (CHAR)
%d -> decimal (INT)
%ld -> inteiro “longo” (LONG INT)
%f -> ponto flutuante (FLOAT)
%o -> octal
%s -> cadeia de caracteres (STRING)
%x -> hexadecimal
%lf -> double
*/


