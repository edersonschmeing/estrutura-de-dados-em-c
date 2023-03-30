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

    free(*ptr_ptr_no); 
//    free(ptr_no_atual);
    printf("%d \n", (*ptr_ptr_no)->dados);
    *ptr_ptr_no = NULL;
    printf("%p \n", *ptr_ptr_no);
    
}

void imprimir_lista(No *ptr_no) { 
   
   No *ptr_no_ultimo = ptr_no;
   No *ptr_no_atual;
   
   if (ptr_no != NULL) {

      for (ptr_no_atual = ptr_no->proximo;
           ptr_no_atual != ptr_no_ultimo;
           ptr_no_atual = ptr_no_atual->proximo) {

         printf("%d -> ", ptr_no_atual->dados);   
      }
      printf("%d -> \n", ptr_no_atual->dados);  
   } else 
      printf("NULL\n");
 
}

int tamanho_lista(const No *ptr_no) { 
    
    //TODO
    return 0;

}

/*

**ptr_ptr_no é um ponteiro de ponteiro para a estrutura NO, ela 
armazena o endereço de memória da váriavel do tipo ponteiro para NO que 
esta na esta alocada na STACk e armazena o endereço de memoria do 
último no/elemento da lista. 

**ptr_ptr_no = &lista;

*/

void adicionar_inicio_lista(No **ptr_ptr_no, int valor) {  //&l

    No *ptr_novo_no = (No*) malloc(sizeof(No));
    ptr_novo_no->dados = valor;
   
    if (*ptr_ptr_no == NULL) { // lista vazia
       *ptr_ptr_no = ptr_novo_no;
       ptr_novo_no->proximo = ptr_novo_no; 
       
    } else {

       ptr_novo_no->proximo = (*ptr_ptr_no)->proximo;
       (*ptr_ptr_no)->proximo = ptr_novo_no;   

    }
    
} 

/*

**ptr_ptr_no é um ponteiro de ponteiro para a estrutura NO, ela 
armazena o endereço de memória da váriavel do tipo ponteiro para NO que 
esta na esta alocada na STACk e armazena o endereço de memoria do 
último no/elemento da lista. 

**ptr_ptr_no = &lista;

*/
void adicionar_fim_lista(No **ptr_ptr_no, int valor) { 

    No *ptr_novo_no = (No*) malloc(sizeof(No));
    ptr_novo_no->dados = valor;
    
    if (*ptr_ptr_no == NULL) { //lista vazia
       *ptr_ptr_no = ptr_novo_no;
       ptr_novo_no->proximo = ptr_novo_no; 
    
    } else {

       ptr_novo_no->proximo = (*ptr_ptr_no)->proximo;
       (*ptr_ptr_no)->proximo = ptr_novo_no;  
       *ptr_ptr_no = ptr_novo_no;       
   
    }
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
    
    if (*ptr_ptr_no == NULL) //lista vazia
       return false;

   No *prt_no_ultimo = *ptr_ptr_no;

   if (prt_no_ultimo->proximo == *ptr_ptr_no) { // um no/elemento 
      free(prt_no_ultimo);
      *ptr_ptr_no = NULL;
      return true;
   } 

   No *prt_no_atual = prt_no_ultimo;

   while (prt_no_atual->proximo != prt_no_ultimo ) {
      prt_no_atual =  prt_no_atual->proximo;  
   }
   prt_no_atual->proximo = prt_no_ultimo->proximo;
   *ptr_ptr_no = prt_no_atual;

   return true;

} 

bool remover_valor_lista(No **ptr_ptr_no, int valor) { 

   return true;   

} 

int buscar_valor_lista(No *ptr_ptr_no, int valor) {  // pode retornar a posição ou o próprio valor, caso o dado fosse um tipo composto retornariamos ele
   
   //TODO
   return -1;

}

int buscar_posicao_lista(No *ptr_ptr_no, int posicao) { //retornar o valor da posição
   //TODO
   return -1;

}





