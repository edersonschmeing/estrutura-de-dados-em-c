#include <stdio.h>
#include <stdlib.h>


/* 
Um ponteiro para um ponteiro consiste em uma variável que guarda o endereço de outra, 
essa outra por sua vez guarda o endereço da variável que tem um tipo de dado comum.

Assim, um ponteiro poderá apontar para outro ponteiro, que, por sua vez, 
aponta para outro ponteiro, que aponta para um terceiro ponteiro e assim por diante.
*/


int main() {

    int a = 20;
    int *p1 = &a;
    int* *p2 = &p1;

    printf("&a  = %p | a  = %d\n", &a, a);
    printf("&p1 = %p | p1 = %p | *p1 = %d\n", &p1, p1, *p1);
    printf("&p2 = %p | p2 = %p | *p2 = %p | **p2 = %d\n\n", &p2, p2, *p2, **p2);

    **p2 = 50;

    printf("&a  = %p | a  = %d\n", &a, a);
    printf("&p1 = %p | p1 = %p | *p1 = %d\n", &p1, p1, *p1);
    printf("&p2 = %p | p2 = %p | *p2 = %p | **p2 = %d\n\n", &p2, p2, *p2, **p2);

    return 0;
}