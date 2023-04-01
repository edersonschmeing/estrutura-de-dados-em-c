#include "lista_duplamente_ligada.h"
#include <stdio.h>
#include <stdlib.h> 


int main() { 
    
   printf("\n--- Lista Duplamente Ligada ---\n\n");

   Lista *ptr_lista = criar_lista();

   //imprimir_lista(ptr_lista);

   //adicionar_inicio_lista(ptr_lista, 10);
   //adicionar_inicio_lista(ptr_lista, 33);
   //adicionar_inicio_lista(ptr_lista, 99);
   
   //imprimir_lista(ptr_lista);

   //printf("%d \n", tamanho_lista(ptr_lista));

   destruir_lista(&ptr_lista);
     
   
   return 0;

}