#include <stdio.h>
#include <string.h>
#include <stdlib.h>  // contém o NULL, calloc, malloc, free

int main() {
   
   typedef struct pessoa {
        char nome[30];
        int idade;
   } Pessoa;  
   

   printf(" --- ALOCAÇÃO DINÂMICA DE PONTEIRO DE PONTEIRO DE STRUCT--- \n");
    
   Pessoa *pessoa_dinamica = (Pessoa*) malloc(1 * sizeof(Pessoa));
   Pessoa *pessoa_dinamica1 = (Pessoa*) malloc(1 * sizeof(Pessoa));
   Pessoa *pessoa_dinamica2 = (Pessoa*) malloc(1 * sizeof(Pessoa));

   strcpy(pessoa_dinamica->nome, "Ederson Schmeing");
   pessoa_dinamica->idade = 38;

   strcpy(pessoa_dinamica1->nome, "Anderson");
   pessoa_dinamica1->idade = 41;

   strcpy(pessoa_dinamica2->nome, "Isabela");
   pessoa_dinamica2->idade = 37;

  
   //ALOCA UM VETOR DE PONTEIROS DE STRUCT NA HEAP
   Pessoa **vetor = (Pessoa**) malloc(10 * sizeof(Pessoa*));     

   vetor[0] = pessoa_dinamica;
   vetor[1] = pessoa_dinamica1;
   *(vetor + 2) = pessoa_dinamica2;
   //vetor[2] = pessoa_dinamica2;


   for (int i = 0; i < 10; i++ ) {
      printf("&vetor = %p | end struct = %ld | end struct = %p \n", &vetor, &vetor[i], vetor[i]);  
   }

   Pessoa *pessoa_0 = vetor[0];
   Pessoa *pessoa_1 = vetor[1];
   Pessoa *pessoa_2 = vetor[2];




 //dessa forma o vetor ta na stack e a struct na heap.
   Pessoa *v[10];
   v[0] = pessoa_dinamica;
   

   //DESALOCA MEMORIA
   free(pessoa_dinamica);
   pessoa_dinamica = NULL;
   
   free(pessoa_dinamica1);
   pessoa_dinamica1 = NULL;
   
   free(pessoa_dinamica2);
   pessoa_dinamica2 = NULL;
   
   free(vetor); 
   vetor = NULL;
   
   //TESTAR SEM COMENTÁRIO. 
   //Pessoa *p = vetor[0];
   
   return 0;

}