#include <stdio.h>



int fatorial(int valor){
    
    if(valor == 1 ){
        return 1;
    }

    printf("%d * ", valor);
    int fat = fatorial(valor - 1); 
    int resultado = valor * fat; 
    return resultado;  
}

// 5 * 4 * 3 * 2 * 1 => 5! é : 120

int main() {
    
    int valor = 5;

    //printf("Informe um valor: ");
    //scanf("%d", &valor);
    
    int resultado = fatorial(valor);
    printf("1 => ");
    printf("%d! é : %d\n", valor, resultado);
    return 0;
    
}