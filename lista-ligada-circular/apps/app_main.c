#include "lista_ligada_circular.h"
#include <stdio.h>
#include <stdlib.h> 


int main() { 
    
   printf("\n--- Lista Ligada Circular---\n\n");

   No *lista = criar_lista();

   imprimir_lista(lista);

   adicionar_inicio_lista(&lista, 10);

   imprimir_lista(lista);

   adicionar_inicio_lista(&lista, 33);
   imprimir_lista(lista);

   adicionar_inicio_lista(&lista, 99);
   imprimir_lista(lista);

   adicionar_fim_lista(&lista, 17);
   imprimir_lista(lista);

  // remover_valor_lista(&lista, 99);
  // imprimir_lista(lista);
   
  adicionar_fim_lista(&lista, 44);
  imprimir_lista(lista); 

  remover_fim_lista(&lista);
  imprimir_lista(lista);

  destruir_lista_ligada(&lista);
   
   
   return 0;

}