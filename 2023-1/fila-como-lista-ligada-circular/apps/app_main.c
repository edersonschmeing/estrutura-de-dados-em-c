#include "fila_como_lista_ligada_circular.h"
#include <stdio.h>
#include <stdlib.h> 


int main() { 
    
   printf("\n--- Fila implementada como Lista Ligada Circular---\n\n");

   No *fila = criar_fila();

   imprimir_elementos_da_fila(fila);
   printf("Primeiro da fila        : %d -> \n", primeiro_elemento_da_fila(fila)); 
   printf("Último da fila          : %d -> \n", ultimo_elemento_da_fila(fila)); 
   printf("Qtde elementos na fila  : %d -> \n\n", quantidade_elemento_da_fila(fila));

   adicionar_elemento_na_fila(&fila, 1);
   adicionar_elemento_na_fila(&fila, 2); 
   adicionar_elemento_na_fila(&fila, 3); 
   imprimir_elementos_da_fila(fila);

   printf("Primeiro da fila        : %d -> \n", primeiro_elemento_da_fila(fila)); 
   printf("Último da fila          : %d -> \n", ultimo_elemento_da_fila(fila)); 
   printf("Qtde elementos na fila  : %d -> \n\n", quantidade_elemento_da_fila(fila));

   remover_elemento_da_fila(&fila);
   imprimir_elementos_da_fila(fila);

   printf("Primeiro da fila        : %d -> \n", primeiro_elemento_da_fila(fila)); 
   printf("Último da fila          : %d -> \n", ultimo_elemento_da_fila(fila)); 
   printf("Qtde elementos na fila  : %d -> \n\n", quantidade_elemento_da_fila(fila));

   adicionar_elemento_na_fila(&fila, 4); 
   adicionar_elemento_na_fila(&fila, 5); 
   imprimir_elementos_da_fila(fila);

   printf("Primeiro da fila        : %d -> \n", primeiro_elemento_da_fila(fila)); 
   printf("Último da fila          : %d -> \n", ultimo_elemento_da_fila(fila)); 
   printf("Qtde elementos na fila  : %d -> \n\n", quantidade_elemento_da_fila(fila));

   remover_elemento_da_fila(&fila);
   imprimir_elementos_da_fila(fila);
   
   printf("Primeiro da fila        : %d -> \n", primeiro_elemento_da_fila(fila)); 
   printf("Último da fila          : %d -> \n", ultimo_elemento_da_fila(fila)); 
   printf("Qtde elementos na fila  : %d -> \n\n", quantidade_elemento_da_fila(fila));

   remover_elemento_da_fila(&fila);
   remover_elemento_da_fila(&fila);
   //remover_elemento_da_fila(&fila);
  
   imprimir_elementos_da_fila(fila);

   printf("Primeiro da fila        : %d -> \n", primeiro_elemento_da_fila(fila)); 
   printf("Último da fila          : %d -> \n", ultimo_elemento_da_fila(fila)); 
   printf("Qtde elementos na fila  : %d -> \n\n", quantidade_elemento_da_fila(fila));
  

   remover_elemento_da_fila(&fila); 

   imprimir_elementos_da_fila(fila);

   destruir_fila(&fila);
   
   
   return 0;

}