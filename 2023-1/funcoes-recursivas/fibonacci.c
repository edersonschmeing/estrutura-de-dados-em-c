#include <stdio.h>

int fibonacci(int valor){
    if(valor < 2 ){
       return valor;
    } else {
       return fibonacci(valor - 1) + fibonacci(valor - 2);
    }
}

int main() {
/*
    int valor;
    printf("Informe um valor: ");
    scanf("%d", &valor);
    printf("%d", fibonacci(valor));        
*/ 
    printf("%d \n", fibonacci(3));        
    printf("%d \n", fibonacci(15));        
    printf("%d \n", fibonacci(30));        

    return 0;
}