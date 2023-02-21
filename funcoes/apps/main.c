#include <stdio.h>

//Exemplo de funções

int soma(int x, int y) {
    int s;
    s = x + y;
    return s;
}

int main() {
    int a = 20;
    int b = 30;

    int r = soma(a, b);
    
    printf("a = %d | b = %d | r = %d \n", a, b, r);

    return 0;
}