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

void teste_vetor_nao_ordenado() {

   printf("\n--- INÍCIO TESTE VETOR NÃO ORDENADO ---\n\n");
   
   Vetor_Dinamico *vetor_dinamico = criar_vetor_dinamico(4, false);

   imprimir_vetor_dinamico(vetor_dinamico);
   printf("tamanho do vetor: %d\n", tamanho_vetor_dinamico(vetor_dinamico));
   printf("quantidade: %d \n\n", quantidade_vetor_dinamico(vetor_dinamico));

   printf("adicionado 16 elementos\n");
   for (int i = 0; i < 16; i++)
      adicionar_vetor_dinamico(vetor_dinamico, i*2);

   imprimir_vetor_dinamico(vetor_dinamico);

   printf("tamanho do vetor: %d\n", tamanho_vetor_dinamico(vetor_dinamico));
   printf("quantidade: %d \n\n", quantidade_vetor_dinamico(vetor_dinamico));

   printf("removendo o valor 20\n");  

   int index = busca_vetor_dinamico(vetor_dinamico, 20); 
   remover_vetor_dinamico(vetor_dinamico, index);
   imprimir_vetor_dinamico(vetor_dinamico);

   printf("tamanho do vetor: %d\n", tamanho_vetor_dinamico(vetor_dinamico));
   printf("quantidade: %d \n\n", quantidade_vetor_dinamico(vetor_dinamico));
  
   printf("removendo 13 elementos\n");
   for (int index = 3; index < 16; index++)
     remover_vetor_dinamico(vetor_dinamico, index);

   imprimir_vetor_dinamico(vetor_dinamico);
   
   printf("tamanho do vetor: %d\n", tamanho_vetor_dinamico(vetor_dinamico));  
   printf("quantidade: %d \n\n", quantidade_vetor_dinamico(vetor_dinamico));

   destruir_vetor_dinamico(&vetor_dinamico);

   printf("--- FIM TESTE VETOR NÃO ORDENADO ---\n\n");

}

void teste_vetor_ordenado() {

   printf("\n--- INÍCIO VETOR ORDENADO ---\n\n");

   Vetor_Dinamico *vetor_dinamico = criar_vetor_dinamico(4, true);

   imprimir_vetor_dinamico(vetor_dinamico);
   printf("tamanho do vetor: %d\n", tamanho_vetor_dinamico(vetor_dinamico));
   printf("quantidade: %d \n\n", quantidade_vetor_dinamico(vetor_dinamico));

   adicionar_vetor_dinamico(vetor_dinamico, 13);  
   adicionar_vetor_dinamico(vetor_dinamico, 9);
   
   imprimir_vetor_dinamico(vetor_dinamico);
   printf("tamanho do vetor: %d\n", tamanho_vetor_dinamico(vetor_dinamico));
   printf("quantidade: %d \n\n", quantidade_vetor_dinamico(vetor_dinamico));

   adicionar_vetor_dinamico(vetor_dinamico, 4);
   adicionar_vetor_dinamico(vetor_dinamico, 2);

   imprimir_vetor_dinamico(vetor_dinamico);
   printf("tamanho do vetor: %d\n", tamanho_vetor_dinamico(vetor_dinamico));
   printf("quantidade: %d \n\n", quantidade_vetor_dinamico(vetor_dinamico));

   adicionar_vetor_dinamico(vetor_dinamico, 1);
   adicionar_vetor_dinamico(vetor_dinamico, 10);
   adicionar_vetor_dinamico(vetor_dinamico, 44);
   adicionar_vetor_dinamico(vetor_dinamico, 33);
      
   imprimir_vetor_dinamico(vetor_dinamico);
   printf("tamanho do vetor: %d\n", tamanho_vetor_dinamico(vetor_dinamico));
   printf("quantidade: %d \n\n", quantidade_vetor_dinamico(vetor_dinamico));

   int index = busca_vetor_dinamico(vetor_dinamico, 9); 
   printf("index: %d\n", index);
   remover_vetor_dinamico(vetor_dinamico, index);

   imprimir_vetor_dinamico(vetor_dinamico);

   index = busca_vetor_dinamico(vetor_dinamico, 13); 
   printf("index: %d\n", index);
   remover_vetor_dinamico(vetor_dinamico, index);

   imprimir_vetor_dinamico(vetor_dinamico);

   index = busca_vetor_dinamico(vetor_dinamico, 9); 
   printf("index: %d\n", index);
   remover_vetor_dinamico(vetor_dinamico, index);
  
   imprimir_vetor_dinamico(vetor_dinamico);
   printf("tamanho do vetor: %d\n", tamanho_vetor_dinamico(vetor_dinamico));
   printf("quantidade: %d \n\n", quantidade_vetor_dinamico(vetor_dinamico));
 
   destruir_vetor_dinamico(&vetor_dinamico);

   printf("--- FIM TESTE VETOR ORDENADO ---\n\n");
 
}


int main() { 
    
   printf("\n--- TESTANDO O TAD - TIPO ABSTRATO DE DADOS ---\n\n");
    
   //int tamanho = 4; //vamos começar com um tamanho fixo e depois vamos dobrando o seu tamanho.  

   //bool ordenado = false; 
  
   //Vetor_Dinamico *vetor_dinamico = criar_vetor_dinamico(tamanho, ordenado);

   //menu_vetor_dinamico();

   //vetor_dinamico->tamanho = 10; //não tem acesso direto aos dados.
   //vetor_dinamico->dados[0] = 50; //não tem acesso direto aos dados.

   teste_vetor_nao_ordenado();

   teste_vetor_ordenado();
   
   
   return 0;
}