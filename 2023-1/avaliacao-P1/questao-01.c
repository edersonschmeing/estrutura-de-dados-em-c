#include <stdio.h>

int main() {
    int a, b, *p;
    p = &a;
    a = 10;
    b = *p;
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%p\n", p);
    printf("%p\n", &b);
    printf("%d\n", *p);

    printf("\n");

}