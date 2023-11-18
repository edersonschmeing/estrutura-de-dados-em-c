#include <stdio.h>
#include <stdlib.h>


char *leia_texto() { 

    char *texto = NULL;
    char caracter_atual;
    int tamanho_texto = 0;

    do {

         scanf("%c", &caracter_atual);
         tamanho_texto++;
         texto = (char*) realloc(texto, tamanho_texto * sizeof(char));
        
         if (caracter_atual != '\n')
            texto[tamanho_texto-1] = caracter_atual;
         else 
            texto[tamanho_texto-1] = '\0';

    } while (caracter_atual != '\n');
    

    return texto;
}


int main() {
    
    char *texto;
    int tamanho_texto;

    texto = leia_texto();

    printf("\n%s\n", texto);

    return 0;
}