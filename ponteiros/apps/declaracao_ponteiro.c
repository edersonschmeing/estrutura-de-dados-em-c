#include <stdio.h>

int main() {
    int a = 30;
    int *p1 = (int*)0x7ffddb292b2c;
    int *p = &a;
    printf("&p = %p || p = %p || *p = %d  \n", &p, p, *p);
    return 0;
}