#include <stdio.h>
#include <stdlib.h> 

#include "grafos.h"


int main() { 
    
   printf("\n--- Grafos ---\n\n");

   int numero_de_vertices = 9; 
   int numero_maximo_de_arestas =  28;
   bool ponderado = true;
    

   Grafo *ptr_no_grafo = criar_grafo(numero_de_vertices, numero_maximo_de_arestas, ponderado );  
   

   destruir_grafo(ptr_no_grafo);   
 
   return 0;

}