#include "tabela_hash.h"
#include <stdio.h>
#include <stdlib.h> 

/*
char *strdup(const char *src) {
    char *dst = malloc(strlen (src) + 1);  // Space for length plus nul
    if (dst == NULL) return NULL;          // No memory
    strcpy(dst, src);                      // Copy the characters
    return dst;                            // Return the new string
} */


int main() { 
    
   printf("\n--- Tabela Hash ---\n\n");

   int tamanho_vetor = 10;
         
   Tabela_Hash *tabela_hash = criar_tabela_hash(tamanho_vetor);
      
   adicionar_tabela_hash(tabela_hash, "casa", 10);
   adicionar_tabela_hash(tabela_hash, "carro", 15);
   adicionar_tabela_hash(tabela_hash, "cama", 11);
   adicionar_tabela_hash(tabela_hash, "cor", 22);
   adicionar_tabela_hash(tabela_hash, "cascavel",70);
   adicionar_tabela_hash(tabela_hash, "dado", 88);
   adicionar_tabela_hash(tabela_hash, "dia", 12);
   adicionar_tabela_hash(tabela_hash, "bela", 38);
   adicionar_tabela_hash(tabela_hash, "azul", 70);
   adicionar_tabela_hash(tabela_hash, "asa", 9);
        
  printf("\n");

   imprimir_tabela_hash(tabela_hash);

   destruir_tabela_hash(&tabela_hash);

   return 0;

}