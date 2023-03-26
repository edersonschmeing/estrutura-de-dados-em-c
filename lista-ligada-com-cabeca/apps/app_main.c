#include "lista_ligada_com_cabeca.h"
#include <stdio.h>
#include <stdlib.h> 


int main() { 
    
   printf("\n--- Lista Ligada com Cabeça ---\n\n");

   Lista *lista = criar_lista();

   imprimir_lista(lista);

   adicionar_inicio_lista(lista, 10);
   adicionar_inicio_lista(lista, 33);
   adicionar_inicio_lista(lista, 99);
   
   imprimir_lista(lista);

   destruir_lista(&lista);
   
   return 0;

}