#include "lista_ligada.h" 
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>  

// interfaces não disponivel para nossos clientes(quem usa nossa estrutura), no caso quem vai usar nosso TAD.

struct node {
    int dado; 
    Node *proximo;     // vetor de int que representa nossos dados. 
};


// interfaces disponivel para nossos clientes, no caso quem vai usar nosso TAD. 
// Estão definidas no arquivo lista_ligada.h

