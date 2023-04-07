#include <stdio.h>

int main() {

    char texto[256];
     
    //[^\n] mascara, também conhecida com expressão regular.

    scanf("%[^\n]s", texto);

    printf("\n%s\n", texto);


}


