#include "lista_ligada_circular.h" 
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>  

struct no {
    int dados; 
    No *proximo;  
};

No *criar_lista() {
   return NULL;
}

void destruir_lista_ligada(No **ptr_ptr_no) {
 
    No *ptr_no_ultimo = *ptr_ptr_no;
    
    if (ptr_no_ultimo == NULL) { // lista vazia 
       return; 
    }

    No *ptr_no_atual = ptr_no_ultimo->proximo; //inicio da lista
    No *ptr_no_auxiliar;       

  //  printf("%p \n", ptr_no_atual);
   
    while (ptr_no_atual != ptr_no_ultimo) {
        ptr_no_auxiliar = ptr_no_atual;
        ptr_no_atual = ptr_no_atual->proximo; 
        free(ptr_no_auxiliar);
    }

    free(*ptr_ptr_no); 
//    free(ptr_no_atual);
    printf("%d \n", (*ptr_ptr_no)->dados);
    *ptr_ptr_no = NULL;
    printf("%p \n", *ptr_ptr_no);
    
}

void imprimir_lista(No *ptr_no) { 
   
    //TODO: Implemente esta função.
 
}

int tamanho_lista(const No *ptr_no) { 
    
    //TODO: Implemente esta função.
    return 0;

}


void adicionar_inicio_lista(No **ptr_ptr_no, int valor) {  //&l

    //TODO: Implemente esta função.
    
} 


void adicionar_fim_lista(No **ptr_ptr_no, int valor) { 

   //TODO: Implemente esta função.

} 


void remover_inicio_lista(No **ptr_ptr_no) {
 
     //TODO: Implemente esta função.

} 

void remover_fim_lista(No **ptr_ptr_no) {
    
     //TODO: Implemente esta função.
    
} 




