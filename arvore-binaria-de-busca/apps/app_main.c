#include "arvore_binaria_de_busca.h"
#include <stdio.h>
#include <stdlib.h> 


int main() { 
    
   printf("\n--- Árvore Binária de Busca ---\n\n");

   No **ptr_ptr_no_raiz = criar_ABB();  
   
   int vetor[11] = {6, 2, 1, 5, 3, 4, 5, 8, 7, 10, 9 }; 

   for (int i = 0; i < 11; i++)
      adicionar_recursivo_ABB(ptr_ptr_no_raiz, vetor[i]);
      //adicionar_iterativo_ABB(ptr_ptr_no_raiz, vetor[i]);
  
  
   
   imprime_ABB(*ptr_ptr_no_raiz, 0);
   printf("\n");  

   printf("Pré Ordem: ");
   pre_ordem_ABB(*ptr_ptr_no_raiz);   
   printf("\n"); 

   printf("Em Ordem : ");
   em_ordem_ABB(*ptr_ptr_no_raiz);   
   printf("\n");
   
   printf("Pós Ordem: ");
   pos_ordem_ABB(*ptr_ptr_no_raiz);   
   printf("\n");
   

   int chave_buscada = 0;
   while (chave_buscada != -1) {
      
      printf("\nbuscar chave: ");
      scanf("%d", &chave_buscada);
      
      
      if (buscar_recursivo_ABB(*ptr_ptr_no_raiz, chave_buscada) != NULL){     
         printf("\n--- Chave encontrada na ABB ---\n\n");
         remover_recursivo_ABB(ptr_ptr_no_raiz, chave_buscada);
      }else
         printf("\n--- Chave não encontrada na ABB ---\n\n");
      
      //remoção interatia
      if (1 == 2) {  
         if (buscar_iterativo_ABB(*ptr_ptr_no_raiz, chave_buscada) != NULL) {
            printf("\n--- Chave encontrada na ABB ---\n\n");
            remover_iterativo_ABB(ptr_ptr_no_raiz, chave_buscada);
         }else
            printf("\n--- Chave não encontrada na ABB ---\n\n");
         
      }
      
      imprime_ABB(*ptr_ptr_no_raiz, 0);

   }
      
   destruir_ABB(ptr_ptr_no_raiz);
 
   return 0;

}