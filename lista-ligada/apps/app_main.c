#include "lista_ligada.h"
#include <stdio.h>
#include <stdlib.h> 


int main() { 
    
   printf("\n--- Lista Ligada ---\n\n");
   
   No *lista_ligada = criar_lista_ligada();

   imprimir_lista_ligada(lista_ligada);

   adicionar_inicio_lista_ligada(&lista_ligada, 10);
   adicionar_inicio_lista_ligada(&lista_ligada, 33);
   adicionar_inicio_lista_ligada(&lista_ligada, 99);

   imprimir_lista_ligada(lista_ligada);
   
   
   return 0;

}