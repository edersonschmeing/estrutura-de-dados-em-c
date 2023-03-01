#include <stdio.h>

int main() {
   
    /*
    A memória RAM (= random access memory) de qualquer computador é uma sequência de bytes, onde cada byte armazena 8 bits de informação.
    A posição ( 0, 1, 2, 3 ... n-1). É utilizado o sistema hexadecimal: 0x0, 0x1, 0x2, 0x3 ... n - 0x1.   
    Uma variável é um espaço ou uma posição, localizada na memória do computador capaz de armazenar um valor/conteúdo.       
    Toda variável tem um nome, um tipo de dado, um valor/conteúdo e um endereço de memória.
    Cada variável ocupa um número de bytes dependendo do seu tipo de dado. 
    O tipo de dado char ocupa 1 bytes, int ocupa 4 bytes e double ocupa 8 bytes.
    O & antes da variável retorna o endereço de memória, esse endereço é o do primeiro byte.
    A função sizeof retorna o número de bytes para um determinado tipo de dado.    
    */   
    
    char a = 'A'; 
    int b = 1;

    printf("&a = %p \n\n", &a);
    printf("&a = %p \n\n", &b);
    
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


