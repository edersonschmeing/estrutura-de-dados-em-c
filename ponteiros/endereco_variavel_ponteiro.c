#include <stdio.h>

int main() {
    int a = 30;    
    printf("&a = %p, a = %d \n", &a, a);
    
    int *p = &a;
    printf("&p = %p | p = %p | *p = %d\n\n", &p, p, *p);
    
    return 0;
}