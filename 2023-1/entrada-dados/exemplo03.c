#include <stdio.h>
#include <stdlib.h>

int main() {
    
   int valor;
   int retorno = -1;
   char letra;
    
    do {
         printf("Informe um valor: ");        
         retorno = scanf("%f", &valor);
         printf("Retorno: %d\n", retorno);
         
         do {
            letra = getchar();
            printf("%c", letra);
            
         } while (letra != '\n');
   
    } while (retorno == 0);

    printf("%d\n", valor);

    return 0;
}