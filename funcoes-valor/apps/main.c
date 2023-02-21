#include <stdio.h>

//Exemplo de funções com passagem de parâmetros por valor 

int soma(int x, int y) {
    int s = x + y;
     
    printf("### DENTRO DA FUNÇAO ### \n");
    printf("&x = %p, x = %d\n", &x, x);
    printf("&y = %p, y = %d\n", &y, y);
    printf("&s = %p, z = %d\n\n", &s, s); 

    return s;
}

int main() {
    int a = 20;
    int b = 30;
    int r;
    
    printf("### ANTES DE CHAMAR A FUNCAO ### \n");
    printf("&a = %p, a = %d\n", &a, a);
    printf("&b = %p, b = %d\n", &b, b);
    printf("&r = %p, r = %d\n\n", &r, r);

    r = soma(a, b);

    puts("### DEPOIS DE CHAMAR A FUNCAO \n");
    printf("&a = %p, a = %d\n", &a, a);
    printf("&b = %p, b = %d\n", &b, b);
    printf("&r = %p, c = %d\n\n", &r, r);
    
    return 0;
}