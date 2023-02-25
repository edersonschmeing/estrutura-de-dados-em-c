#include <stdio.h>

//Exemplo de funções com passagem de parâmetros por referência


void troca(int *x, int *y) {
     int w;
    
    printf("### DENTRO DA FUNÇÃO ### \n");
    printf("&x = %p | x = %p | *x = %d\n", &x, x, *x);
    printf("&y = %p | y = %p | *y = %d\n", &y, y, *y);
    printf("&w = %p | z = %d\n\n", &w, w); 

    w = *x;
    printf("&w = %p, z = %d\n\n", &w, w); 

    *x = *y;
    *y = w;              
}   

int main() {
    
   int a = 20;
   int b = 30;

   printf("### ANTES DE CHAMAR A FUNÇÃO ### \n");
   printf("&a = %p | a = %d\n", &a, a);
   printf("&b = %p | b = %d\n\n", &b, b);

   troca(&a, &b);

   printf("### DEPOIS DE CHAMAR A FUNÇÃO ### \n");
   printf("&a = %p | a = %d\n", &a, a);
   printf("&b = %p | b = %d\n\n", &b, b);
    
   return 0;
    
}