#include "lista_ligada_circular.h"
#include <stdio.h>
#include <stdlib.h> 


int main() { 
    
   printf("\n--- Lista Ligada Circular---\n\n");

   No *lista = criar_lista();

   imprimir_lista(lista);
 
   destruir_lista_ligada(&lista);
   
   
   return 0;

}