#include <stdio.h>
#include <stdlib.h> 

typedef struct no No;

typedef struct no *No_Raiz;

struct no {
	int dado;
    No *ptr_esquerda;
    No *ptr_direita;
};


No_Raiz *criar_AB() { 

    No_Raiz *ptr_raiz = (No_Raiz*) malloc(sizeof(No_Raiz));
    if (ptr_raiz != NULL) 
        *ptr_raiz = NULL; 
   
    return ptr_raiz;

}

void destruir_no_AB(No *ptr_no) { 

    if (ptr_no == NULL)
        return; 

    destruir_no_AB(ptr_no->ptr_esquerda);
    destruir_no_AB(ptr_no->ptr_direita);

    free(ptr_no);
    ptr_no = NULL;
        
}

void destruir_AB(No_Raiz *ptr_ptr_no_raiz) { 

    if (ptr_ptr_no_raiz == NULL)
        return;

    destruir_no_AB(*ptr_ptr_no_raiz);
    free(ptr_ptr_no_raiz);

}


int verificar_esta_vazia_AB(No_Raiz *ptr_no_raiz) { 

}


int verificar_altura_AB(No_Raiz *ptr_no_raiz) { 
   
}


int consultar_quantidade_no_AB(No_Raiz *ptr_no_raiz) { 

  
}


void adicionar_AB(No_Raiz *ptr_no_raiz) {

} 


void remover_AB(No_Raiz *ptr_no_raiz) { 


}

//N - No
//L - Esqueda
//R - Direita

//Pre-order (NLR) formatado
void recursivo_percurso_pre_ordem_AB(No_Raiz root) { 
    
    if (root == NULL)
           return;
        
    printf("%d -> ", root->dado);
    recursivo_percurso_pre_ordem_AB(root->ptr_esquerda);
    recursivo_percurso_pre_ordem_AB(root->ptr_direita);

}

void recursivo_percurso_pre_ordem_formatado_AB(No_Raiz ptr_no_raiz, int nivel) {
        
        if (ptr_no_raiz == NULL)
           return;
        
        for (int i = 0; i < nivel; i++)
            printf(i == nivel - 1 ? "|-" : "  ");
        
        printf("%d\n", ptr_no_raiz->dado);
        recursivo_percurso_pre_ordem_formatado_AB(ptr_no_raiz->ptr_esquerda, nivel + 1);
        recursivo_percurso_pre_ordem_formatado_AB(ptr_no_raiz->ptr_direita, nivel + 1);
}

//In-order, (LNR)
void recursivo_percurso_em_ordem_AB(No_Raiz ptr_no_raiz) { 
     
    if (ptr_no_raiz == NULL)
           return;
        
    recursivo_percurso_pre_ordem_AB(ptr_no_raiz->ptr_esquerda);
    printf("%d -> ", ptr_no_raiz->dado);
    recursivo_percurso_pre_ordem_AB(ptr_no_raiz->ptr_direita);


}

//Post-order, (LRN)
void percurso_pos_ordem_AB(No_Raiz *ptr_no_raiz) {
    
}


int main() { 
    
   printf("\n--- Árvore Binária ---\n\n");

   //No_Raiz *ptr_ptr_no_raiz = criar_AB();  

   //destruir_ABB(ptr_ptr_no_raiz);
   
        No a, b, c, d, e, f, g;

        a.dado = 6;
        a.ptr_esquerda = &b;
        a.ptr_direita = &c;

        b.dado = 2;
        b.ptr_esquerda = &d;
        b.ptr_direita = &e;

        c.dado = 9;
        c.ptr_esquerda = &g;
        c.ptr_direita = NULL;

        d.dado = 1;
        d.ptr_esquerda = &f;
        d.ptr_direita = NULL;

        e.dado = 4;
        e.ptr_esquerda = NULL;
        e.ptr_direita = NULL;

        f.dado = 8;
        f.ptr_esquerda = NULL;
        f.ptr_direita = NULL;

        g.dado = 8;
        g.ptr_esquerda = NULL;
        g.ptr_direita = NULL;

        recursivo_percurso_pre_ordem_formatado_AB(&a, 0);
        
        printf("\n");

        recursivo_percurso_pre_ordem_AB(&a);

        printf("\n\n");

        recursivo_percurso_em_ordem_AB(&a);


   return 0;

}