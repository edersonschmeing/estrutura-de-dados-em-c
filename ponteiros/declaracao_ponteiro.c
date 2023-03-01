#include <stdio.h>

/*
Ponteiros

Um ponteiro (apontador) é um tipo especial de variável capaz de armazenar um endereço de memória. 
Ele só poderá armazenar o endereço de memória do seu respectivo tipo de dado.

Para declaramos um variável ponteiro usamos o operador *. 

As variáveis do tipo ponteiro ocupa 8 bytes, idependente do tipo. 

*/


int main() {
    int *p = NULL;
    
    if (p == NULL) {
        printf("boa prática e inicializar os ponteiros.\n\n");

    } 
    printf("&p = %p || p = %p \n\n", &p, p);
    
    // o ponteiro recebendo um enderço qualquer de memória.
    p = 0x7ffd5e9698c1; 
    printf("&p = %p || p = %p \n", &p, p);
   
    
 /*   int *p1 = 0xF;
    //decimal
    printf("&p1 = %p || p = %ld \n", &p1, p1);

    // binário 
    printf("&p1 = %p || p = %lb \n", &p1, p1);

    // hexadecimal 
    printf("&p1 = %p || p = %p \n", &p1, p1);

   */  

    return 0;
}