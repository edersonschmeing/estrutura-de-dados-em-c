#include "arvore_binaria_de_busca.h"
#include <stdio.h>
#include <stdlib.h> 


int main() { 
    
   printf("\n--- Árvore Binária de Busca ---\n\n");

   ABB **ptr_ptr_arvore = criar_ABB();  

   destruir_ABB(ptr_ptr_arvore);
   
 
   return 0;

}