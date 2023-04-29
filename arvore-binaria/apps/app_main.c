#include <stdio.h>
#include <stdlib.h> 

struct no {
	 int dado;
    No *ptr_esquerda;
    No *ptr_direita;
};

typedef struct no No;

typedef struct no *No_Raiz;


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

void percurso_pre_ordem_AB(No_Raiz *ptr_no_raiz) { 

}

void percurso_em_ordem_AB(No_Raiz *ptr_no_raiz) { 


}

void percurso_pos_ordem_AB(No_Raiz *ptr_no_raiz) {
    
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


int main() { 
    
   printf("\n--- Árvore Binária ---\n\n");

   No_Raiz *ptr_ptr_no_raiz = criar_AB();  

   destruir_ABB(ptr_ptr_no_raiz);
   
 
   return 0;

}