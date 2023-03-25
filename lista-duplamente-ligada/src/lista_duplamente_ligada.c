#include "lista_duplamente_ligada.h" 
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>  

struct no {
    int dados; 
    No *proximo;  
    No *anterior;  

};

struct lista {
    int tamanho; 
    No *cabeca; 
    No *cauda; 
};
