#include <stdio.h>
#include <stdlib.h>


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