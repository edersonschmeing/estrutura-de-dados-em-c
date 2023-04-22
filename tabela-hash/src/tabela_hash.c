#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>  

#include "tabela_hash.h" 

struct tabela_hash {
    No **vetor; 
    int tamanho_vetor;  
};

int hashing(char *chave, int tamanho) { 

    //TODO 
    return 0;

}

Tabela_Hash* criar_tabela_hash(int tamanho_vetor) {

    Tabela_Hash *ptr_tabela_hash = (Tabela_Hash*) malloc(sizeof(Tabela_Hash));
    
    ptr_tabela_hash->vetor = (No**) malloc(tamanho_vetor * sizeof(No**));
    
    for (int i = 0; i < tamanho_vetor; i++) { 
        ptr_tabela_hash->vetor[i] = criar_lista_ligada();
    }
    ptr_tabela_hash->tamanho_vetor = tamanho_vetor;

    return ptr_tabela_hash;

} 

void destruir_tabela_hash(Tabela_Hash **ptr_tabela_hash) { 
    
    for (int i = 0; i < (*ptr_tabela_hash)->tamanho_vetor; i++) { 
        destruir_lista_ligada((*ptr_tabela_hash)->vetor[i]);
    }   

    free((*ptr_tabela_hash)->vetor);
    free(*ptr_tabela_hash);
    *ptr_tabela_hash = NULL;
}

void adicionar_tabela_hash(Tabela_Hash *ptr_tabela_hash, char *chave, int valor) { 
    
    int n = hashing(chave, ptr_tabela_hash->tamanho_vetor); 
    ptr_tabela_hash->vetor[n] = adicionar_lista_ligada( ptr_tabela_hash->vetor[n], chave, valor);

}

void remover_tabela_hash(Tabela_Hash *ptr_tabela_hash, char *chave) { 

    int n = hashing(chave, ptr_tabela_hash->tamanho_vetor); 
    ptr_tabela_hash->vetor[n] = remover_lista_ligada( ptr_tabela_hash->vetor[n], chave);

}

int buscar_tabela_hash(Tabela_Hash *ptr_tabela_hash, char *chave) { // retorna -1 se não encontrar

    int n = hashing(chave, ptr_tabela_hash->tamanho_vetor); 
    return buscar_valor_lista_ligada(ptr_tabela_hash->vetor[n], chave); //retorna o valor da chave

}

void imprimir_tabela_hash(Tabela_Hash *ptr_tabela_hash) {

    for (int i = 0; i < ptr_tabela_hash->tamanho_vetor; i++) { 
        printf("%d: ", i );
        imprimir_lista_ligada(ptr_tabela_hash->vetor[i]);
        printf("\n");        
    }   
}
