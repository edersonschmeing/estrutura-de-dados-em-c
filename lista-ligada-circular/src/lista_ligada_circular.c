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
    
    if (ptr_no_ultimo == NULL) {
       return; 
    }

    No *ptr_no_atual = ptr_no_ultimo->proximo;
    No *ptr_no_auxiliar;       

  //  printf("%p \n", ptr_no_atual);
   
     while (ptr_no_atual != ptr_no_ultimo) {
        ptr_no_auxiliar = ptr_no_atual;
        ptr_no_atual = ptr_no_atual->proximo; 
        free(ptr_no_auxiliar);
    }
 //   printf("%p \n", ptr_no_atual);
 
    free(ptr_no_atual);
    ptr_no_atual = NULL;

    //free(*ptr_ptr_no);
    //*ptr_ptr_no = NULL;
    
}


void imprimir_lista(No *ptr_no) { 
 
}

int tamanho_lista(const No *ptr_no) { 
    
    //TODO
    return 0;

}

void adicionar_inicio_lista(No **ptr_ptr_no, int valor) {  //&l

    No *ptr_novo_no = (No*) malloc(sizeof(No));
    ptr_novo_no->dados = valor;
   
    printf(" te");

    if (*ptr_ptr_no == NULL) { // lista vazia
       *ptr_ptr_no = ptr_novo_no;
       ptr_novo_no->proximo = ptr_novo_no; 
       
    } else {

       ptr_novo_no->proximo = (*ptr_ptr_no)->proximo;
       (*ptr_ptr_no)->proximo = ptr_novo_no;   

    }
    
} 

void adicionar_fim_lista(No **ptr_ptr_no, int valor) { 

   //TODO

} 

//pode deixar para implementar por último 
void adicionar_ordenado_lista(No **ptr_ptr_no, int valor) {

    //TODO

} 

bool remover_inicio_lista(No **ptr_ptr_no) {
 
     //TODO
     return 1;

} 

bool remover_fim_lista(No **ptr_ptr_no) {

   return true;

} 

bool remover_valor_lista(No **ptr_ptr_no, int valor) { 

   return true;   

} 

int buscar_valor_lista(No *ptr_ptr_no, int valor) {  // pode retornar a posição, caso o dado fosse um tipo composto retornariamos ele
   
   //TODO
   return -1;

}

int buscar_posicao_lista(No *ptr_ptr_no, int posicao) { //retornar o valor da posição
   //TODO
   return -1;

}





