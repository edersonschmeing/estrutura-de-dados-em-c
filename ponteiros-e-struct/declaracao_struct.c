#include <stdio.h>
#include <string.h>

int main() {

   /*
   Um struct é uma variável especial que contém diversas outras variáveis normalmente de tipos diferentes denominadas membros.
   Um struct é alocado em uma sequência ordenada na memória. 
   */ 

   struct endereco {
        char rua[30];
        int numero;  
   };  
   typedef struct endereco Endereco; 
      
   typedef struct pessoa {
        char nome[30];
        int idade;
        struct endereco endereco1;
        Endereco endereco2;
   } Pessoa;  
   
   Pessoa p; 

   strcpy(p.nome, "Ederson Schmeing");
   p.idade = 38;
   strcpy(p.endereco1.rua, "Rua Apalais");
   p.endereco1.numero = 1413;

   strcpy(p.endereco2.rua, "Rua Tito Muffato");
   p.endereco2.numero = 2317 ;

   printf("Nome: %s \n", p.nome);
   printf("Idade: %d \n", p.idade);
   printf("Rua Endereço 1: %s \n", p.endereco1.rua);
   printf("Número Endereço 1: %d \n", p.endereco1.numero);
   printf("Rua Endereço 2: %s \n", p.endereco2.rua);
   printf("Número Endereço 2: %d \n\n", p.endereco2.numero);
   
   
   return 0;

}