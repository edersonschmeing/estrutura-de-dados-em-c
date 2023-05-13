#include <stdio.h>
#include <stdlib.h> 

#include "arvore_rubro_negra_caida_para_esquerda.h"


int main() { 
    
   printf("\n--- Árvore Rubro Negra Caída Para Esquerda ---\n\n");

   No **ptr_ptr_no_raiz = criar_LLRB();  

   int vetor[11] = {6, 2, 1, 5, 3, 4, 5, 8, 7, 10, 9 }; 
   
   for (int i = 0; i < 11; i++)
      adicionar_LLRB(ptr_ptr_no_raiz, vetor[i]);
   
   imprime_LLRB(*ptr_ptr_no_raiz, 0);

   printf("\n");

   em_ordem_LLRB(*ptr_ptr_no_raiz);

   printf("\n\n");
       
   destruir_LLRB(ptr_ptr_no_raiz);
   

   /*
    
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
      
   destruir_ABB(ptr_ptr_no_raiz); */
 
   return 0;

}