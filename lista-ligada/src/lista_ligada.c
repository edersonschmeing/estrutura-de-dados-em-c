#include "lista_ligada.h" 
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

void destruir_recursivo_lista(No *p) {
    if (p != NULL) {
       destruir_recursivo_lista(p->proximo);
       free(p);          
    }
}

void destruir_interativo_lista(No **p) {
 
    No *aux;    
    while (*p != NULL) {
       aux = *p;
       *p = (*p)->proximo;
       free(aux);          
    }
}

void destruir_lista_ligada(No **p) {
 
    //destruir_recursivo_lista_ligada(*p);
    //*p = NULL

    destruir_interativo_lista(p);
    
}

void imprimir_recursivo_lista(const No *p) { 

    if (p != NULL ) {
        printf("%d -> ", p->dados);
        imprimir_recursivo_lista(p->proximo);
    }
    else 
        printf("NULL\n");
}

void imprimir_interativo_lista(No *p) { 
    No *q;
    for (q = p; q != NULL; q = q->proximo)
       printf("%d -> ", q->dados);
    printf("NULL\n\n");

}   

void imprimir_lista(No *p) { 

    //imprimir_recursivo_lista_ligada(p);
    
    imprimir_interativo_lista(p);    

}

int tamanho_lista(const No *p) { 
    
    //TODO
    return 0;

}

void adicionar_inicio_lista(No **p, int valor) {  //&l
    No *q;
    q = (No*) malloc(sizeof(No));
    if (q == NULL) {
       perror("malloc");
       exit(EXIT_FAILURE);
    }
    q->dados = valor;
    q->proximo = *p;
    *p = q;
} 

void adicionar_fim_lista(No **p, int valor) { 

    //TODO

} 

void adicionar_ordenado_lista(No **p, int valor) {

    //TODO

} 

void remover_inicio_lista(No **p) {
 
     //TODO

} 

void remover_fim_lista(No **p) {

   //TODO

} 

void remover_lista(No **p, int valor) { 
   
   //TODO

} 

int buscar_valor_lista(No *p, int valor) {  // pode retornar a posição, caso o dado fosse um tipo composto retornariamos ele
   
   //TODO
   return -1;

}

int buscar_posicao_lista(No *p, int posicao) { //retornar o valor da posição
   //TODO
   return -1;

}

