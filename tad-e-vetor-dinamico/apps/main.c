#include "vetor_dinamico.h"
#include <stdio.h>
#include <stdlib.h> 

void menu() {

   //construir um menu 

}

int main() { 
    
    printf("--- AQUI VAMOS UTILIZAR NOSSO TAD --- \n\n ");

    int tamanho = 10;
    bool ordenado = false; 

    Vetor_Dinamico *vetor_dinamico = criar_vetor_dinamico(tamanho, ordenado);

    printf("--- sdfasdfasf --- \n\n ");
  
   destruir_vetor_dinamico(&vetor_dinamico);


    return 0;
}