#include <stdio.h>

int main() {
    int *p = 0x7ffddb292b2c;
    printf("&p = %p || p = %p \n", &p, p);
    return 0;
}