#include "arvore_binaria_de_busca.h"
#include <stdio.h>
#include <stdlib.h> 


int main() { 
    
   printf("\n--- Árvore Binária de Busca ---\n\n");

   No_Raiz *ptr_ptr_no_raiz = criar_ABB();  
   
   int vetor[10] = {9, 4, 2, 8, 14, 11, 15, 13, 5, 6 }; 

   for (int i = 0; i < 10; i++)
      adicionar_ABB(ptr_ptr_no_raiz, vetor[i]);
 
   No *ptr_no = *ptr_ptr_no_raiz;

   if (buscar_ABB(ptr_no, 15) == NULL)
      printf("\n--- Chave não encontrada na ABB ---\n\n");

   imprime_ABB(ptr_no, 0);
   printf("\n");  
   em_ordem_ABB(ptr_no);   
   printf("\n");
 
   //remover_ABB(ptr_ptr_no_raiz, 10);
      
   destruir_ABB(ptr_ptr_no_raiz);
 
   return 0;

}