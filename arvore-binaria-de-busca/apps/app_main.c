#include "arvore_binaria_de_busca.h"
#include <stdio.h>
#include <stdlib.h> 


int main() { 
    
   printf("\n--- Árvore Binária de Busca ---\n\n");

   No **ptr_ptr_no_raiz = criar_ABB();  
   
   int vetor[10] = {9, 4, 2, 8, 14, 11, 15, 13, 5, 6 }; 

   for (int i = 0; i < 10; i++)
      adicionar_recursivo_ABB(ptr_ptr_no_raiz, vetor[i]);
      //adicionar_interativo_ABB(ptr_ptr_no_raiz, vetor[i]);
  
  
   imprime_ABB(*ptr_ptr_no_raiz, 0);
   printf("\n");  
   em_ordem_ABB(*ptr_ptr_no_raiz);   
   printf("\n");
   
   int chave_buscada = 0;
   while (chave_buscada != -1) {
      
      printf("\nbuscar chave: ");
      scanf("%d", &chave_buscada);
      
      /*
      if (buscar_recursivo_ABB(ptr_no, chave_buscada) != NULL){     
         printf("\n--- Chave encontrada na ABB ---\n\n");
         remover_recursivo_ABB(ptr_ptr_no_raiz, chave_buscada);
      }else
         printf("\n--- Chave não encontrada na ABB ---\n\n");
      */

      if (buscar_interativo_ABB(*ptr_ptr_no_raiz, chave_buscada) != NULL) {
         printf("\n--- Chave encontrada na ABB ---\n\n");
         remover_interativo_ABB(ptr_ptr_no_raiz, chave_buscada);
      }else
         printf("\n--- Chave não encontrada na ABB ---\n\n");

      imprime_ABB(*ptr_ptr_no_raiz, 0);

   }
      
   destruir_ABB(ptr_ptr_no_raiz);
 
   return 0;

}