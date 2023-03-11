#include "vetor_dinamico.h"
#include <stdio.h>
#include <stdlib.h> 

void menu() {

   printf("--- CONSTRUIR UM MENU COM AS OPERAÇÕES ---\n\n");

}

int main() { 
    
    printf("--- VAMOS UTILIZAR NOSSO TAD ---\n\n");

    menu();

    int tamanho = 10;
    bool ordenado = false; 

    Vetor_Dinamico *vetor_dinamico = criar_vetor_dinamico(tamanho, ordenado);

    printf("--- CHAMAR OPERAÇÕES DO NOSSO TAD ---\n\n");
  
    destruir_vetor_dinamico(&vetor_dinamico);

    return 0;
}