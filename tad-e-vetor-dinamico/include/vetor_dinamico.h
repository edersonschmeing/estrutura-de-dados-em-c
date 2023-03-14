#include <stdio.h>
#include <stdlib.h> 
#include <stdbool.h> 

//Especificação das operações do nosso TAD.
//criar, destruir, adicionar, remover e buscar são operações básicas que podemos relaizar em TAD. 

typedef struct vetor_dinamico Vetor_Dinamico;

Vetor_Dinamico* criar_vetor_dinamico(int tamanho_vetor, bool ordenado);
void destruir_vetor_dinamico(Vetor_Dinamico **vetor_dinamico_endereco);

void imprimir_vetor_dinamico(const Vetor_Dinamico  *vetor_dinamico);

void adicionar_vetor_dinamico(Vetor_Dinamico *vetor_dinamico, int valor); // se ordenado=true utilizar esse metodo

int busca_vetor_dinamico(Vetor_Dinamico *vetor_dinamico, int valor); //para vetores ordenados, fazer busca binária

int acessar_vetor_dinamico(const Vetor_Dinamico *vetor_dinamico, int index);
int acessar_verificado_vetor_dinamico(const Vetor_Dinamico *vetor_dinamico, int index); // verifica se tem elemento no index passado.

void remover_vetor_dinamico(Vetor_Dinamico *vetor_dinamico, int index); // precisa ajustar os elementos do vetor.

int tamanho_vetor_dinamico(const Vetor_Dinamico *vetor_dinamico);
int quantidade_vetor_dinamico(const Vetor_Dinamico *vetor_dinamico);


