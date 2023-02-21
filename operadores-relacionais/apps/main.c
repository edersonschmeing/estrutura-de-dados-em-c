#include <stdio.h>

int main() {
    
    int a = 10, b = 20;
    int *p1, *p2, *p3; 
    
    p1 = &a;
    p2 = &b;
    p3 = &a;
   
    printf("&p1 = %p | p1 = %p\n", &p1, p1);
    printf("&p2 = %p | p2 = %p\n", &p2, p2);
    printf("&p3 = %p | p3 = %p\n\n", &p3, p3);
    
    // ==, !=, >,  >=, <, <= 

    if (p1 == p2) 
       printf("p1 == p2 \n");
    else 
       printf("p1 != p2 \n");

    if (p1 != p3) 
       printf("p1 != p3 \n");
    else 
       printf("p1 == p3 \n");

    return 0;
}