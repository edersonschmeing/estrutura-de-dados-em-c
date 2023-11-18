#include "fila_como_lista_ligada_circular.h" 
#include <stdio.h>
#include <stdlib.h>

struct no {
    int dados; 
    No *proximo;  
};

No *criar_fila() {
   return NULL;
}

void destruir_fila(No **ptr_ptr_no) {
 
    
    if (*ptr_ptr_no == NULL) { // lista vazia 
       return; 
    }

    No *ptr_no_ultimo = *ptr_ptr_no;
  
    No *ptr_no_atual = ptr_no_ultimo->proximo; //inicio da lista
    No *ptr_no_auxiliar;       
   
    while (ptr_no_atual != ptr_no_ultimo) {
        ptr_no_auxiliar = ptr_no_atual;
        ptr_no_atual = ptr_no_atual->proximo; 
        free(ptr_no_auxiliar);
    }

    free(*ptr_ptr_no); 
    *ptr_ptr_no = NULL;
    
}

//mostra todos os elementos da fila
void imprimir_elementos_da_fila(No *ptr_no) { 
   
  
   if (ptr_no != NULL) {

      No *ptr_no_ultimo = ptr_no;
      No *ptr_no_atual;

      for (ptr_no_atual = ptr_no->proximo;
           ptr_no_atual != ptr_no_ultimo;
           ptr_no_atual = ptr_no_atual->proximo) {

         printf("%d -> ", ptr_no_atual->dados);   
      }
      printf("%d -> \n", ptr_no_atual->dados);  

   } else { 

      printf("A fila não tem elementos. \n\n");
   
   }
}

int quantidade_elemento_da_fila(No *ptr_no) { 
    
    int quantidade = 0;
    if (ptr_no != NULL) {

      No *ptr_no_ultimo = ptr_no;
      No *ptr_no_atual = ptr_no->proximo;

      for (;
           ptr_no_atual != ptr_no_ultimo;
           ptr_no_atual = ptr_no_atual->proximo) {

         quantidade++;
      }

      quantidade = quantidade + 1; 
   }
   return quantidade;

}

int primeiro_elemento_da_fila(const No *ptr_no) { 
   
    if (ptr_no == NULL) 
        return 0;
    else
        return ptr_no->proximo->dados;

}

int ultimo_elemento_da_fila(const No *ptr_no) { 
   
    if (ptr_no == NULL) 
        return 0;
    else
        return ptr_no->dados;

}

//adicona o elemento no final da lista, esta entrando na fila
void adicionar_elemento_na_fila(No **ptr_ptr_no, int valor) { 

    No *ptr_no_novo = (No*) malloc(sizeof(No));
    ptr_no_novo->dados = valor;
    
    if (*ptr_ptr_no == NULL) { //lista vazia
       *ptr_ptr_no = ptr_no_novo;
       ptr_no_novo->proximo = ptr_no_novo; 
    
    } else {

       ptr_no_novo->proximo = (*ptr_ptr_no)->proximo;
       (*ptr_ptr_no)->proximo = ptr_no_novo;  
       *ptr_ptr_no = ptr_no_novo;       
   
    }   
} 


void remover_elemento_da_fila(No **ptr_ptr_no) {

    if (*ptr_ptr_no != NULL) { // testa se não esta vazio

        No *prt_atual = *ptr_ptr_no;
        
        if (prt_atual->proximo == prt_atual) { //somente um elemento  
        
            free(prt_atual);
            *ptr_ptr_no = NULL;   
        } else {
         
            prt_atual = prt_atual->proximo;
            (*ptr_ptr_no)->proximo = prt_atual->proximo;
            free(prt_atual);
        }  
    } 
} 