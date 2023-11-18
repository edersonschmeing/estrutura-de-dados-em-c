#include <stdio.h>

//Exemplo de funções com passagem de parâmetros por valor 

int soma_escalar(int valor_x, int valor_y) {
    int soma = valor_x + valor_y;
     
    printf("--- DENTRO DA FUNÇÃO --- \n");
    printf("&valor_x = %p | valor_x = %d\n", &valor_x, valor_x);
    printf("&valor_y = %p | valor_y = %d\n", &valor_y, valor_y);
    printf("&soma    = %p | soma    = %d\n\n", &soma, soma); 

    return soma;
}

int main() {
    
    /*
    Funções são blocos de instruções(códigos) que pode ser nomeadas e chamadas em qualquer parte de um programa.
    Toda função tem um nome, um tipo que determina seu valor de retorno e pode ter ou não ter parâmetros. 
    Também não pode declarar uma função dentro de outra função.    
    */

    int valor_a = 20;
    int valor_b = 30;
    int resultado;
    
    printf("--- ANTES DE CHAMAR A FUNÇÃO --- \n");
    printf("&valor_a   = %p | valor_a   = %d\n", &valor_a, valor_a);
    printf("&valor_b   = %p | valor_b   = %d\n", &valor_b, valor_b);
    printf("&resultado = %p | resultado = %d\n\n", &resultado, resultado);

    resultado = soma_escalar(valor_a, valor_b);

    printf("--- DEPOIS DE CHAMAR A FUNÇÃO --- \n");
    printf("&valor_a   = %p | valor_a = %d\n", &valor_a, valor_a);
    printf("&valor_b   = %p | valor_b = %d\n", &valor_b, valor_b);
    printf("&resultado = %p | valor_c = %d\n\n", &resultado, resultado);
    
    return 0;
}