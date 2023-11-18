#include "pilha_como_vetor.h"
#include <stdio.h>
#include <stdlib.h> 


int main() { 
    
   printf("\n--- PILHA -  ---\n\n");
    
   Pilha *pilha = criar_pilha(4);

   imprimir_pilha(pilha);
   printf("tamanho: %d\n", tamanho_pilha(pilha));
   printf("quantidade: %d \n\n", quantidade_pilha(pilha));

   empilhar_pilha(pilha, 13);
   empilhar_pilha(pilha, 9);  
  
   imprimir_pilha(pilha);
   printf("tamanho: %d\n", tamanho_pilha(pilha));
   printf("quantidade: %d \n\n", quantidade_pilha(pilha));

   empilhar_pilha(pilha, 4);
   empilhar_pilha(pilha, 2);  

   imprimir_pilha(pilha);
   printf("tamanho: %d\n", tamanho_pilha(pilha));
   printf("quantidade: %d \n\n", quantidade_pilha(pilha));

   empilhar_pilha(pilha, 1);
   empilhar_pilha(pilha, 10);
   empilhar_pilha(pilha, 44);
   empilhar_pilha(pilha, 33);
      
   imprimir_pilha(pilha);
   printf("tamanho: %d\n", tamanho_pilha(pilha));
   printf("quantidade: %d \n\n", quantidade_pilha(pilha));

   desempilhar_pilha(pilha);
   desempilhar_pilha(pilha);

   imprimir_pilha(pilha);
   printf("tamanho: %d\n", tamanho_pilha(pilha));
   printf("quantidade: %d \n\n", quantidade_pilha(pilha));

   desempilhar_pilha(pilha);
   desempilhar_pilha(pilha);

   imprimir_pilha(pilha);
   printf("tamanho: %d\n", tamanho_pilha(pilha));
   printf("quantidade: %d \n\n", quantidade_pilha(pilha));

   desempilhar_pilha(pilha);
   desempilhar_pilha(pilha);
   desempilhar_pilha(pilha);

   imprimir_pilha(pilha);
   printf("tamanho: %d\n", tamanho_pilha(pilha));
   printf("quantidade: %d \n\n", quantidade_pilha(pilha));
 
   destruir_pilha(&pilha);
   
   return 0;
}