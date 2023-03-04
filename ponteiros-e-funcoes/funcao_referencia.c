#include <stdio.h>

//Exemplo de funções com passagem de parâmetros por referência

//void troca(const int *valor_x, int *valor_y) { a palavra reservada const indica que a variável e somente de leitura.
void troca(int *valor_x, int *valor_y) {
   
    int valor_a;
    
    printf("### DENTRO DA FUNÇÃO ### \n");
    printf("&valor_x = %p | valor_x = %p | *valor_x = %d\n", &valor_x, valor_x, *valor_x);
    printf("&valor_y = %p | valor_y = %p | *valor_y = %d\n", &valor_y, valor_y, *valor_y);
    printf("&valor_a = %p | valor_a = %d \n\n", &valor_a, valor_a); 

    valor_a = *valor_x;
    printf("&valor_a = %p, valor_a = %d\n\n", &valor_a, valor_a); 

    *valor_x = *valor_y;
    *valor_y = valor_a;              
}   

int main() {
    
    /*
    Funções são blocos de instruções(códigos) que pode ser nomeadas e chamadas em qualquer parte de um programa.
    Toda função tem um nome, um tipo que determina seu valor de retorno e pode ter ou não ter parâmetros. 
    Também não pode declarar uma função dentro de outra função.    
    */

   int valor_a = 20;
   int valor_b = 30;

   printf("### ANTES DE CHAMAR A FUNÇÃO ### \n");
   printf("&valor_a = %p | valor_a = %d\n", &valor_a, valor_a);
   printf("&valor_b = %p | valor_b = %d\n\n", &valor_b, valor_b);

   troca(&valor_a, &valor_b);

   printf("### DEPOIS DE CHAMAR A FUNÇÃO ### \n");
   printf("&valor_a = %p | valor_a = %d\n", &valor_a, valor_a);
   printf("&valor_b = %p | valor_b = %d\n\n", &valor_b, valor_b);
    
   return 0;
    
}