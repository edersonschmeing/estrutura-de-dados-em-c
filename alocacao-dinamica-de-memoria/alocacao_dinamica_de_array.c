#include <stdio.h>
#include <stdlib.h>  // contém o NULL, calloc, malloc, free


//const indica que não queremos alterar o conteúdo do parâmetro.
void imprimir_vetor(const int vetor[], int tamanho_vetor) { // pode ser usado dessa forma *vetor
    for (int i = 0; i < tamanho_vetor; i++) {
        printf("&vetor[%d] = %p, vetor[%d] = %d\n", i, &vetor[i], i, vetor[i]);
        // vetor[i]++ 
    }
    printf("\n");
}

void preencher_vetor(int *vetor) { // pode ser usado dessa forma vetor[]
    vetor[0] = 30;
    vetor[1] = 10;
    vetor[2] = 50;
    vetor[3] = 20 ;
    vetor[4] = 40;  
}

void soma_vetor_com_escalar(int vetor[], int tamanho_vetor, int escalar) { //*vetor
    for (int i = 0; i < tamanho_vetor; i++) {
        vetor[i] += escalar;
    }
}

void desalocar_vetor(int **endereco_vetor) {
    int *vetor = *endereco_vetor;
    free(vetor);
    *endereco_vetor = NULL;
}

int main() {

    //Toda varável e alocada na (memória Stack). 
    int tamanho_vetor = 5;

    // alocacao de um vetor estático (memória Stack). 
    printf(" --- ALOCAÇÃO ESTÁTICA DE VETOR --- \n");
    
    //int vetor_estatico[tamanho_vetor] = {30, 10, 50, 20, 40}; 
    int vetor_estatico[tamanho_vetor]; 
    
    preencher_vetor(vetor_estatico);
    imprimir_vetor(vetor_estatico, tamanho_vetor);
    soma_vetor_com_escalar(vetor_estatico, tamanho_vetor, 10);
    imprimir_vetor(vetor_estatico, tamanho_vetor);


    // alocacao de um vetor estático (memória Heap).  
    printf("\n --- ALOCAÇÃO DINÂMICA DE VETOR --- \n");
    int *vetor_dinamico = (int *) malloc(tamanho_vetor * sizeof(int));
    
    preencher_vetor(vetor_dinamico);
    imprimir_vetor(vetor_dinamico, tamanho_vetor);
    soma_vetor_com_escalar(vetor_dinamico, tamanho_vetor, 10);
    imprimir_vetor(vetor_dinamico, tamanho_vetor);

    printf("\n --- ANTES DE DESALOCAR VETOR DINÂMICO --- \n");
    printf("&vetor_dinamico = %p, vetor_dinamico = %p\n\n", &vetor_dinamico, vetor_dinamico);
    
    //free(vetor_dinamico);
    // vetor_dinamico = NULL;
    desalocar_vetor(&vetor_dinamico);

    printf("\n --- DEPOIS DE DESALOCAR VETOR DINÂMICO --- \n");
    printf("&vetor_dinamico = %p, vetor_dinamico = %p\n\n", &vetor_dinamico, vetor_dinamico);

    return 0;
}
