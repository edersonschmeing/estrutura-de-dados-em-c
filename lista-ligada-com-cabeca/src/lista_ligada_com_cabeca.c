#include "lista_ligada_com_cabeca.h" 
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>  

struct no {
    int dados; 
    No *proximo;  
};

struct lista {
    int quantidade; 
    No *cabeca;  
};
