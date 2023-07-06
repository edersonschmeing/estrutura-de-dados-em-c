#include <stdio.h>
#include <stdlib.h> 

#include "arvore_LLRB.h"

void menu(No **ptr_ptr_no_raiz) { 
   
   int operacao = 1;
  
   while (operacao < 10 && operacao > 0) {
      
      printf("---------------------------------------\n");
      printf("        USANDO TAD DA ÁRVORE LLRB                       \n");
      printf("---------------------------------------\n");
      printf("1 - Inserir \n");
      printf("2 - Remover \n");
      printf("3 - Imprimir \n");
      printf("4 - Destruir \n");
      printf("10 - Sair \n");
      printf("---------------------------------------\n");
      printf("Escolha uma operação:  ");
      
      int numero_parametros = (scanf("%d", &operacao)); // retornam o número de conversões realizada com sucesso. 
      if (numero_parametros != 1)
         printf("Problemas na entrada de dados");
      
      int chave;

      switch (operacao) {
         case 1:
           
            printf("\nInserir a chave: ");         
            scanf("%d", &chave);
            printf("\n"); 
            inserir_LLRB(ptr_ptr_no_raiz, chave);
            printf("LLRB Formatada \n"); 
            imprime_LLRB(*ptr_ptr_no_raiz, 0);
            printf("\nEm Ordem\n"); 
            em_ordem_LLRB(*ptr_ptr_no_raiz);
            break;
         case 2:
            printf("\nremover a chave: ");         
            scanf("%d", &chave);
            remover_LLRB(ptr_ptr_no_raiz, chave);
            imprime_LLRB(*ptr_ptr_no_raiz, 0);
            printf("\n"); 
            em_ordem_LLRB(*ptr_ptr_no_raiz);
            break;

         case 3:
            imprime_LLRB(*ptr_ptr_no_raiz, 0);
            printf("\n"); 
            em_ordem_LLRB(*ptr_ptr_no_raiz);
            break;
         case 4:
            destruir_LLRB(ptr_ptr_no_raiz);
            ptr_ptr_no_raiz = criar_LLRB();
            imprime_LLRB(*ptr_ptr_no_raiz, 0);
            break;   
         case 10:
            break;   
         default:
            break;
      }   
      printf("\n\n");      
   } 
}



int main() { 
    
   printf("\n--- Árvore Rubro Negra Caída Para a Esquerda ---\n\n");

   No **ptr_ptr_no_raiz = criar_LLRB();  
   
   //int vetor[11] = {6, 2, 1, 5, 3, 4, 5, 8, 7, 10, 9 }; 

   menu(ptr_ptr_no_raiz);

   destruir_LLRB(ptr_ptr_no_raiz);   
 
   return 0;

}