#include <stdio.h>
#include <stdlib.h>  // contém o NULL, calloc, malloc, free

typedef struct pessoa {
    char nome[30];
    int idade;
} Pessoa; 

void imprimir_vetor(Pessoa **vetor, int tamanho_vetor )  { 
    for (int i = 0; i < tamanho_vetor; i++) {
        printf("&vetor[%d] = %p, vetor[%d].nome = %s\n", i, &vetor[i], i, vetor[i]->nome);
        printf("&vetor[%d] = %p, vetor[%d].idade = %d\n", i, &vetor[i], i, vetor[i]->idade);
        printf("\n");
    }
    printf("\n");
}

Pessoa* criar_pessoa(char nome[30], int idade ) {
    Pessoa *pessoa_dinamica = (Pessoa*) malloc(1 * sizeof(Pessoa));
    strcpy(pessoa_dinamica->nome, nome);
    pessoa_dinamica->idade = idade;
    return pessoa_dinamica;
}

void preencher_vetor(Pessoa **vetor, int tamanho_vetor ) {
    int idade;
    char nome[30];
    for (int i = 0; i < tamanho_vetor; i++) {
        printf("Informe o nome da pessoa %d: ", i + 1);
        scanf("%s", &nome);
        
        printf("Informe a idade da pessoa %d: ", i + 1);
        scanf("%d", &idade);
        
        Pessoa *pessoa_dinamica = criar_pessoa(nome, idade); 
        vetor[i] = pessoa_dinamica;
    }
}

Pessoa** criar_vetor_dinamico(int tamanho_vetor) {
  Pessoa **vetor = (Pessoa**) malloc(tamanho_vetor * sizeof(Pessoa*));
  return vetor;
}

void desalocar_vetor(Pessoa*** endereco_vetor, int tamanho_vetor) {  
    Pessoa** vetor = *endereco_vetor;
    for (int i = 0; i < tamanho_vetor; i++) {
        free(vetor[i]);
        vetor[i] = NULL;
    }
    free(vetor);
    *endereco_vetor = NULL;
}

int main() {

    int tamanho_vetor;

    printf("\n --- VETOR DE PONTEIROS PARA STRUCT --- \n");

    printf("Informe a quantidade de elementos: ");
    scanf("%d", &tamanho_vetor);
      
    Pessoa** vetor = criar_vetor_dinamico(tamanho_vetor);

    preencher_vetor(vetor, tamanho_vetor);

    printf("\n --- PESSOAS CADASTRADAS --- \n");
    imprimir_vetor(vetor, tamanho_vetor);
    
    desalocar_vetor(&vetor, tamanho_vetor);

    return 0;
}
