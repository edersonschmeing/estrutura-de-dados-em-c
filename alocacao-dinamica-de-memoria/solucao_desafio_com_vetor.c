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

void preencher_vetor(int vetor[], int tamanho_vetor ) {
    int elemento;
    for (int i = 0; i < tamanho_vetor; i++) {
        printf("Informe o elemento número %d: ", i+1);
        //scanf("%d", &vetor[i]);
        scanf("%d", &elemento);
        vetor[i] = elemento;
    }
}

void multiplica_vetor_com_escalar(int vetor[], int tamanho_vetor, int escalar) { //*vetor
    for (int i = 0; i < tamanho_vetor; i++) {
        vetor[i] *= escalar;
    }
}

void desalocar_vetor(int **endereco_vetor) {
    int *vetor = *endereco_vetor;
    free(vetor);
    *endereco_vetor = NULL;
}

int main() {

    int tamanho_vetor;
    int numero_escalar;

    printf("\n --- MULTIPLICAÇÃO DE ESCALAR POR VETOR --- \n");

    printf("Informe a quantidade de elementos: ");
    scanf("%d", &tamanho_vetor);
     
    printf("Informe o número escalar para fazer a multiplicação: ");
    scanf("%d", &numero_escalar);

    int *vetor_dinamico = (int *) malloc(tamanho_vetor * sizeof(int));

    preencher_vetor(vetor_dinamico, tamanho_vetor);
    printf("\n --- ELEMENTOS INFORMADOS --- \n");
    imprimir_vetor(vetor_dinamico, tamanho_vetor);
    
    multiplica_vetor_com_escalar(vetor_dinamico, tamanho_vetor, numero_escalar);
    printf("\n --- ELEMENTOS DEPOIS DA OPERAÇÃO --- \n");
    imprimir_vetor(vetor_dinamico, tamanho_vetor);
 
    //free(vetor_dinamico);
    desalocar_vetor(&vetor_dinamico);

 
    return 0;
}
