#include "lista_ligada.h"
#include <stdio.h>
#include <stdlib.h> 


int main() { 
    
   printf("\n--- Lista Ligada ---\n\n");
   
   No *lista_ligada = criar_lista();

   imprimir_lista(lista_ligada);

   adicionar_inicio_lista(&lista_ligada, 10);
   adicionar_inicio_lista(&lista_ligada, 33);
   adicionar_inicio_lista(&lista_ligada, 99);

   imprimir_lista(lista_ligada);
   
   
   return 0;

}