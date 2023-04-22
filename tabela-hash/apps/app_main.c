#include "tabela_hash.h"
#include <stdio.h>
#include <stdlib.h> 


int main() { 
    
   printf("\n--- Tabela Hash ---\n\n");

   int tamanho_vetor = 10;
   
   Tabela_Hash *tabela_hash = criar_tabela_hash(tamanho_vetor);

   imprimir_tabela_hash(tabela_hash);

   destruir_tabela_hash(&tabela_hash);

   return 0;

}