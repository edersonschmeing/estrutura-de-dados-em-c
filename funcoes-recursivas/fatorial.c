#include <stdio.h>




int fatorial(int valor){
    if(valor <= 1 ){
        return 1;
    }
    printf("%d * ", valor);
    return valor * fatorial(valor - 1);
}


int main() {
    
    int valor = 5;

    //printf("Informe um valor: ");
    //scanf("%d", &valor);
    
    int result = fatorial(valor);
    printf("1 => ");
    printf("%d! é : %d\n", valor, result);
    return 0;
    
}