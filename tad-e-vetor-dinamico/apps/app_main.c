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
      printf("1 - Adicionar um elemento \n");
      printf("2 - Remover um elemento \n");
      printf("3 - Buscar um elemento \n");
      printf("4 - Imprimir elementos \n");
      printf("5 - Tamanho \n");
      printf("6 - Quantidade de elementos \n");
      printf("7 - Acessar um elemento \n");
      printf("8 - Acessar um elemento verificado \n");
      printf("10 - Sair\n");
      printf("---------------------------------------\n");
      printf("Escolha uma operação:  ");
      int numero_parametros = (scanf("%d", &operacao)); // retornam o número de conversões realizada com sucesso. 
      if (numero_parametros != 1) {
         printf("Problemas na entrada de dados");
      }   
            
      switch (operacao)       {
      case 1:
         printf("Você escolheu a operação 01\n");
         break;
      case 2:
         printf("Você escolheu a operação 02\n");
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
    
    int tamanho = 10; //vamos começar com um tamanho fixo e depois vamos dobrando o seu tamanho.  

    bool ordenado = false; 

    Vetor_Dinamico *vetor_dinamico = criar_vetor_dinamico(tamanho, ordenado);

    //menu_vetor_dinamico();

    //vetor_dinamico->tamanho = 10; //não tem acesso direto aos dados.
    //vetor_dinamico->dados[0] = 50; //não tem acesso direto aos dados.
    
    imprimir_vetor_dinamico(vetor_dinamico);

    adicionar_vetor_dinamico(vetor_dinamico, 30);
    adicionar_vetor_dinamico(vetor_dinamico, 10);
    adicionar_vetor_dinamico(vetor_dinamico, 20);

    imprimir_vetor_dinamico(vetor_dinamico);
  
    destruir_vetor_dinamico(&vetor_dinamico);

    return 0;
}