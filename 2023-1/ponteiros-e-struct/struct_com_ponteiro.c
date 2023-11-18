#include <stdio.h>

int main() {

    typedef struct endereco {
        int *p1;
        int *p2;
    } Endereco;
    
    Endereco endereco;

    int a = 10; 
    int b = 20;

    endereco.p1 = &a;
    endereco.p2 = &b;

    printf("&p1 = %p || p1 = %p || *p1 = %d \n", &endereco.p1, endereco.p1, *endereco.p1);
    printf("&p2 = %p || p2 = %p || *p2 = %d \n\n", &endereco.p2, endereco.p2, *endereco.p2);    

}