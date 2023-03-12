#include "vetor_dinamico.h"
#include <stdio.h>
#include <stdlib.h> 

void menu_vetor_dinamico() { 
   
   printf("--- CONSTRUIR UM MENU COM AS OPERAÇÕES ---\n\n");
  
   int operacao = 1;
  
   while (operacao < 10 && operacao > 0) {
      
      printf("---------------------------------------\n");
      printf("        TAD e VETORES DINÂMICOS        \n");
      printf("---------------------------------------\n");
      printf("01 - Criar Vetor Dinâmico\n");
      printf("10 - Sair\n");
      
      printf("Escolha uma operação:  ");
      scanf("%d", &operacao);
            
      switch (operacao)       {
      case 1:
         printf("Você escolheu a operação 01\n");
         //criar_vetor_dinamico();
         break;
      case 10:
         printf("Você escolheu a operação 10\n");
         break;   
      default:
         break;
      }         
   } 
}

int main() { 
    
    printf("--- VAMOS UTILIZAR NOSSO TAD ---\n\n");

    menu_vetor_dinamico();

    int tamanho = 10;
    bool ordenado = false; 

    Vetor_Dinamico *vetor_dinamico = criar_vetor_dinamico(tamanho, ordenado);

    printf("--- CHAMAR OPERAÇÕES DO NOSSO TAD ---\n\n");
  
    destruir_vetor_dinamico(&vetor_dinamico);

    return 0;
}