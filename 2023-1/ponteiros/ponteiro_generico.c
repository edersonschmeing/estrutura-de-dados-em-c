#include <stdio.h>
#include <stdlib.h>

/*
Um ponteiro genérico é um ponteiro que pode apontar para qualquer tipo de dado.

Para acessar o conteúdo de um ponteiro genérico é preciso antes convertê-lo 
para o tipo de ponteiro com o qual se deseja trabalhar.

*/

int main() {
    
    int a = 20;
    void *p = &a;

    printf("&a  = %p | a  = %d\n", &a, a);
    printf("&p  = %p | p  = %p\n\n", &p, p);

    //converte o ponteiro genérico para ponteiro de int.
    int b = *(int*)p;

    printf("&b  = %p | b  = %d\n", &b, b);

    return 0;
}