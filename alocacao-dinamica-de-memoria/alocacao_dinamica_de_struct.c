#include <stdio.h>
#include <string.h>
#include <stdlib.h>  // contém o NULL, calloc, malloc, free

int main() {
   
   typedef struct pessoa {
        char nome[30];
        int idade;
   } Pessoa;  
    
   printf(" --- ALOCAÇÃO ESTÁTICA DE STRUCT --- \n");
   Pessoa pessoa_estatica; 

   strcpy(pessoa_estatica.nome, "Ederson Schmeing");
   pessoa_estatica.idade = 38;

   printf("Nome: %s \n", pessoa_estatica.nome);
   printf("Idade: %d \n\n", pessoa_estatica.idade);


   printf(" --- ALOCAÇÃO DINÂMICA DE STRUCT --- \n");
   Pessoa *pessoa_dinamica = (Pessoa*) malloc(1 * sizeof(Pessoa));

   strcpy(pessoa_dinamica->nome, "Ederson");
   pessoa_dinamica->idade = 3;

   printf("Nome: %s \n", pessoa_dinamica->nome);
   printf("Idade: %d \n\n", pessoa_dinamica->idade);

   strcpy((*pessoa_dinamica).nome, "Schmeing");
   (*pessoa_dinamica).idade = 8;

   printf("Nome: %s \n", (*pessoa_dinamica).nome);
   printf("Idade: %d \n\n",(*pessoa_dinamica).idade);

   free(pessoa_dinamica);
   pessoa_dinamica = NULL;
 
   return 0;

}