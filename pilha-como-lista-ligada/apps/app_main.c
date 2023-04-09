#include "pilha_como_lista_ligada.h" 
#include <stdio.h>
#include <stdlib.h> 


int main() { 
    
   printf("\n--- Pilha como Lista Ligada ---\n\n");
   
   No *pilha = criar_pilha();

   imprimir_pilha(pilha);

   empilhar_pilha(&pilha, 10);
   imprimir_pilha(pilha);

   empilhar_pilha(&pilha, 33);
   imprimir_pilha(pilha);

   empilhar_pilha(&pilha, 99);
   imprimir_pilha(pilha);

   empilhar_pilha(&pilha, 17);
   imprimir_pilha(pilha);
  
   empilhar_pilha(&pilha, 44);
   imprimir_pilha(pilha);

   desemplilhar_pilha(&pilha); //precisa implementar
   imprimir_pilha(pilha);


   return 0;

}