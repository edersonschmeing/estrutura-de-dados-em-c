#include "lista_ligada_circular.h" 
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>  

struct no {
    int dados; 
    No *proximo;  
};


struct lista {
    int tamanho; 
    No *cabeca;  
};



