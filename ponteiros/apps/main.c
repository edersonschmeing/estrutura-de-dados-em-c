#include <stdio.h>

int main() {
    
    int a = 20;
    int *p = &a;
    int q;
    
    printf("Endereço de Memória | Conteúdo \n");

    printf("&a = %p | a = %d\n", &a, a);
    printf("&p = %p | p = %p\n", &p, p);
    printf("&p = %p | *p = %d\n\n", &p, *p);
  
    // Obtém o conteúdo da variável que ( p ) guara o endereço. 
    q = *p;
    printf("&q = %p | q = %d\n\n", &q, q);

    // Altera o conteúdo da variável que ( p ) guara o endereço, no caso a variável ( a ); 
    *p = 50;
    printf("&a = %p | a = %d\n", &a, a);
    printf("&p = %p | p = %p\n\n", &p, p);
    
    // Altera o conteúdo da variável ( p ).  
    p = &q;
     
    printf("&p = %p | p = %p\n", &p, p);
    printf("&q = %p | q = %d\n\n", &q, q);

   
  
    return 0;
}