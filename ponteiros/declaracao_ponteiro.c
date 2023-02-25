#include <stdio.h>

int main() {
    int *p = NULL;
    
    if (p == NULL) {
        printf("boa prática e inicializar os ponteiros.");

    } 
    printf("&p = %p || p = %p \n\n", &p, p);
    
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