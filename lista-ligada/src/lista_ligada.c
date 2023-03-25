#include "lista_ligada.h" 
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>  

struct no {
    int dados; 
    No *proximo;  
};

No *criar_lista_ligada() {
   return NULL;
}

void destruir_recursivo_lista_ligada(No *p) {
    if (p != NULL) {
       destruir_recursivo_lista_ligada(p->proximo);
       free(p);          
    }
}

void destruir_interativo_lista_ligada(No **p) {
 
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

    destruir_interativo_lista_ligada(p);
    
}

void imprimir_recursivo_lista_ligada(const No *p) { 

    if (p != NULL ) {
        printf("%d -> ", p->dados);
        imprimir_recursivo_lista_ligada(p->proximo);
    }
    else 
        printf("NULL\n");
}

void imprimir_interativo_lista_ligada(No *p) { 
    No *q;
    for (q = p; q != NULL; q = q->proximo)
       printf("%d -> ", q->dados);
    printf("NULL\n\n");

}   

void imprimir_lista_ligada(No *p) { 

    //imprimir_recursivo_lista_ligada(p);
    
    imprimir_interativo_lista_ligada(p);    

}

int tamanho_lista_ligada(const No *p) { 
    
    //TODO
    return 0;

}

bool esta_cheio_lista_ligada(const No *p) {

    return true;

}

void adicionar_inicio_lista_ligada(No **p, int valor) {  //&l
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

void adicionar_fim_lista_ligada(No **p, int valor) { 

    //TODO

} 

void adicionar_ordenado_lista_ligada(No **p, int valor) {

    //TODO

} 

void remover_inicio_lista_ligada(No *p) {
 
     //TODO

} 

void remover_fim_lista_ligada(No *p) {

   //TODO

} 

void remover_lista_ligada(No *p, int valor) { 
   
   //TODO

} 

int buscar_lista_ligada(No *p, int valor) {  // pode retornar a posição, caso o dado fosse um tipo composto retornariamos ele
   
   //TODO
   return -1;

}

int buscar_posicao_lista_ligada(No *p, int posicao) { //retornar o valor da posição
   //TODO
   return -1;

}

