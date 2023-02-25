#include <stdio.h>

int main() {
    
    int a = 20;
    int *p = &a;

    printf("&a = %p | a = %d\n", &a, a);
    printf("&p = %p | p = %p\n\n", &p, p);
  
    *p = 50;
    printf("&a = %p | a = %d\n", &a, a);
    printf("&p = %p | p = %p\n\n", &p, p);


    return 0;
}