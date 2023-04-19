#include <stdio.h>

int main() {
    
    int a = 3;
    // & references C++
    int& refA = a;
    
    printf("a = %d \n", a);
    
    printf("&a = %p \n", &a);
    printf("&refA = %p \n", &refA);
    refA = 10;
    printf("a = %d \n", a);

    return 0;
}