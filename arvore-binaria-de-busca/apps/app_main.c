#include "arvore_binaria_de_busca.h"
#include <stdio.h>
#include <stdlib.h> 


int main() { 
    
   printf("\n--- Árvore Binária de Busca ---\n\n");

   No_Raiz *ptr_ptr_no_raiz = criar_ABB();  

   destruir_ABB(ptr_ptr_no_raiz);
   
 
   return 0;

}