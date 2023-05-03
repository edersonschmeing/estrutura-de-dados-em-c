#include <stdio.h>
#include <stdlib.h> 
#include <locale.h>

typedef struct no No;

typedef struct no *No_Raiz;

struct no {
	int dado;
    No *ptr_esquerda;
    No *ptr_direita;
    No *ptr_pai; // opcional 
    
};

No *criar_no_AB(int dado, No *prt_esquerda, No *ptr_direita) { 

    No *ptr_no_novo = (No*) malloc(sizeof(No*));
   
    ptr_no_novo->dado = dado;
    ptr_no_novo->ptr_esquerda = prt_esquerda;
    ptr_no_novo->ptr_direita = ptr_direita;
 
    return ptr_no_novo;

}

void destruir_no_AB(No *ptr_no) { 

    if (ptr_no == NULL)
        return; 

    destruir_no_AB(ptr_no->ptr_esquerda);
    destruir_no_AB(ptr_no->ptr_direita);

    free(ptr_no);
    ptr_no = NULL;
        
}

No_Raiz *criar_AB() { 
    
    No_Raiz *ptr_raiz = (No_Raiz*) malloc(sizeof(No_Raiz));
    
    if (ptr_raiz != NULL) 
        *ptr_raiz = NULL; 

    return ptr_raiz;

}

void destruir_AB(No_Raiz *ptr_ptr_no_raiz) { 

    if (ptr_ptr_no_raiz == NULL)
        return;

    destruir_no_AB(*ptr_ptr_no_raiz);

    free(ptr_ptr_no_raiz);

}


int verificar_esta_vazia_AB(No_Raiz ptr_no_raiz) { 

    return ptr_no_raiz == NULL ? -1 : 0;
         
}


int verificar_altura_AB(No_Raiz ptr_no_raiz) { 

    if (ptr_no_raiz == NULL)
        return -1;

    int altura_sub_arvore_esquerda = verificar_altura_AB(ptr_no_raiz->ptr_esquerda);
    int altura_sub_arvore_direita = verificar_altura_AB(ptr_no_raiz->ptr_direita);  

    if (altura_sub_arvore_esquerda > altura_sub_arvore_direita) 
        return altura_sub_arvore_esquerda + 1;     
    else 
        return altura_sub_arvore_direita + 1;
   
}


int consultar_quantidade_no_AB(No_Raiz ptr_no_raiz) { 
    
    if  (ptr_no_raiz == NULL) 
        return 0;

    return consultar_quantidade_no_AB(ptr_no_raiz->ptr_esquerda) +
           consultar_quantidade_no_AB(ptr_no_raiz->ptr_direita) +
           1;    
  
}

//V - Visita o No
//L - Esqueda
//R - Direita

//Pre-order (VLR) formatado
void recursivo_percurso_pre_ordem_AB(No_Raiz ptr_no_raiz) { 
    
    if (ptr_no_raiz == NULL)
        return;
        
    printf("%d -> ", ptr_no_raiz->dado);
    recursivo_percurso_pre_ordem_AB(ptr_no_raiz->ptr_esquerda);
    recursivo_percurso_pre_ordem_AB(ptr_no_raiz->ptr_direita);

}

//Pre-order (VLR)
void recursivo_percurso_pre_ordem_formatado_AB(No_Raiz ptr_no_raiz, int nivel) {
        
    if (ptr_no_raiz == NULL)
    return;
    
    for (int i = 0; i < nivel; i++)
        printf(i == nivel - 1 ? "|-" : "  ");
    
    printf("%d\n", ptr_no_raiz->dado);
    recursivo_percurso_pre_ordem_formatado_AB(ptr_no_raiz->ptr_esquerda, nivel + 1);
    recursivo_percurso_pre_ordem_formatado_AB(ptr_no_raiz->ptr_direita, nivel + 1);
}

//In-order, (LVR)
void recursivo_percurso_em_ordem_AB(No_Raiz ptr_no_raiz) { 
     
    if (ptr_no_raiz == NULL)
       return;
        
    recursivo_percurso_pre_ordem_AB(ptr_no_raiz->ptr_esquerda);
    printf("%d -> ", ptr_no_raiz->dado);
    recursivo_percurso_pre_ordem_AB(ptr_no_raiz->ptr_direita);

}

//Post-order, (LRV)
void recursivo_percurso_pos_ordem_AB(No_Raiz ptr_no_raiz) {
    
    if (ptr_no_raiz == NULL)
        return;

    recursivo_percurso_pos_ordem_AB(ptr_no_raiz->ptr_esquerda);
    recursivo_percurso_pos_ordem_AB(ptr_no_raiz->ptr_direita);
    printf("%d -> ", ptr_no_raiz->dado);

}

void imprime_no_AB(int valor, int nivel) {
    
    for (int i = 0; i < nivel; i++)
        printf("-");
    printf("%2d\n", valor);
}

void imprime_AB(No_Raiz ptr_no_raiz, int nivel) {
    
    if (ptr_no_raiz == NULL) 
        return;

    imprime_AB(ptr_no_raiz->ptr_direita, nivel + 1);
    imprime_no_AB(ptr_no_raiz->dado, nivel);
    imprime_AB(ptr_no_raiz->ptr_esquerda, nivel + 1);
    
}


No *procurar_no_AB(No *ptr_no_raiz, int valor){
    
    if (ptr_no_raiz == NULL || ptr_no_raiz->dado == valor)
        return ptr_no_raiz;
    
    No *ptr_esquerda = procurar_no_AB(ptr_no_raiz->ptr_esquerda, valor);
    
    if (ptr_esquerda != NULL) 
        return ptr_esquerda;

    return procurar_no_AB(ptr_no_raiz->ptr_direita, valor); 

}


int bucar_valor_AB(No_Raiz ptr_no_raiz, int valor) {
  
    No *ptr_no = procurar_no_AB(ptr_no_raiz, valor);

    if (ptr_no == NULL)
       return -1; 
    else 
       return ptr_no->dado; 
}



void criar_arvore_heap(No_Raiz *ptr_ptr_no_raiz) {
    
    No *ptr_no0 = criar_no_AB(4, NULL, NULL);  // raiz 
    
    No *ptr_no1 = criar_no_AB(0, NULL, NULL);  // filho a esquerda do 4
    No *ptr_no2 = criar_no_AB(2, NULL, NULL);  // filho a direita do 4
    No *ptr_no3 = criar_no_AB(9, NULL, NULL);  // filho a esquerda do 0
    No *ptr_no4 = criar_no_AB(1, NULL, NULL);  // filho a direita do 0
    No *ptr_no5 = criar_no_AB(6, NULL, NULL);  // filho a esquerda do 2
    No *ptr_no6 = criar_no_AB(7, NULL, NULL);  // filho a direita do 2
    No *ptr_no7 = criar_no_AB(8, NULL, NULL);  // filho a direita do 4
    No *ptr_no8 = criar_no_AB(10, NULL, NULL); // filho a direita do 1

                                          /*             4          */
    *ptr_ptr_no_raiz = ptr_no0;           /*        /         \     */
                                          /*       0           2   */
    ptr_no0->ptr_esquerda = ptr_no1;      /*      / \         / \   */ 
    ptr_no0->ptr_direita = ptr_no2;       /*     9   1       6   7  */
                                          /*    /     \             */
    ptr_no1->ptr_esquerda = ptr_no3;      /*   8      10            */
    ptr_no1->ptr_direita = ptr_no4;

    ptr_no2->ptr_esquerda = ptr_no5;
    ptr_no2->ptr_direita = ptr_no6;
     
    ptr_no3->ptr_esquerda = ptr_no7;

    ptr_no4->ptr_direita = ptr_no8;
 
    
    imprime_AB(*ptr_ptr_no_raiz, 0);

    printf("\n\n");
  
    printf("Formato de Árvore \n");
    recursivo_percurso_pre_ordem_formatado_AB(*ptr_ptr_no_raiz, 0);
    
    printf("\n\n");

    printf("Pré-Ordem \n");
    recursivo_percurso_pre_ordem_AB(*ptr_ptr_no_raiz);

    printf("\n\n");

    printf("Em-Ordem \n");
    recursivo_percurso_em_ordem_AB(*ptr_ptr_no_raiz);

    printf("\n\n");

    printf("Pós-Ordem \n");
    recursivo_percurso_pos_ordem_AB(*ptr_ptr_no_raiz);

    printf("\n\n");

    int altura_arvore_AB = verificar_altura_AB(*ptr_ptr_no_raiz);
    printf("Altrua da Árvore Binária: %d", altura_arvore_AB);

    printf("\n\n");

    int quantidade_no_AB = consultar_quantidade_no_AB(*ptr_ptr_no_raiz);
    printf("Quantidade de Nós: %d", quantidade_no_AB);

    printf("\n\n");

    //printf("valor procurado: %d \n",bucar_valor_AB(*ptr_ptr_no_raiz, 15));
    printf("valor procurado: %d \n", bucar_valor_AB(*ptr_ptr_no_raiz, 7));

    printf("\n\n");

    if (verificar_esta_vazia_AB(*ptr_ptr_no_raiz) == -1)  
       printf("Árvore vazia");
    else 
       printf("Árvore não esta vazia");
      
}

void criar_arvore_stack() {

    No no0, no1, no2, no3, no4, no5, no6;

    no0.dado = 6;
    no0.ptr_esquerda = &no1;
    no0.ptr_direita = &no2;

    no1.dado = 2;
    no1.ptr_esquerda = &no3;
    no1.ptr_direita = &no4;

    no2.dado = 9;
    no2.ptr_esquerda = &no6;
    no2.ptr_direita = NULL;

    no3.dado = 1;
    no3.ptr_esquerda = &no5;
    no3.ptr_direita = NULL;

    no4.dado = 4;
    no4.ptr_esquerda = NULL;
    no4.ptr_direita = NULL;

    no5.dado = 8;
    no5.ptr_esquerda = NULL;
    no5.ptr_direita = NULL;

    no6.dado = 7;
    no6.ptr_esquerda = NULL;
    no6.ptr_direita = NULL;

    printf("Formato de Árvore \n");
    recursivo_percurso_pre_ordem_formatado_AB(&no0, 0);
    
    printf("\n");

    printf("Pré-Ordem \n");
    recursivo_percurso_pre_ordem_AB(&no0);

    printf("\n\n");

    printf("Em-Ordem \n");
    recursivo_percurso_em_ordem_AB(&no0);

    printf("\n\n");

    printf("Pós-Ordem \n");
    recursivo_percurso_pos_ordem_AB(&no0);

    printf("\n\n");


}

int main() { 

   setlocale (LC_ALL, ""); // importa as variáveis de ambiente, SO
   setlocale (LC_CTYPE, "pt_BR.UTF-8"); // por via das dúvidas, set manual 
    
   printf("\n--- Árvore Binária com alocação na Heap ---\n\n");

   No_Raiz *ptr_ptr_no_raiz = criar_AB();  

   criar_arvore_heap(ptr_ptr_no_raiz);

   destruir_AB(ptr_ptr_no_raiz);


   printf("\n\n--- Árvore Binária com alocação na Stack ---\n\n");

   criar_arvore_stack();

   return 0;

}