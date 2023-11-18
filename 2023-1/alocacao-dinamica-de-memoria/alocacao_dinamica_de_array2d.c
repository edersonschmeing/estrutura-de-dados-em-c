#include <stdio.h>
#include <stdlib.h>

void matriz2d(int a, int b) {

    int** matriz;

    int linhas = a;
    int colunas = b;

    matriz = (int**) malloc(sizeof(int*) * linhas);

    for(int i = 0; i < linhas; i++) {
        matriz[i] = (int*) malloc(sizeof(int) * colunas);
    }
    
    int cont = 1;
    for (int i=0; i<linhas; i++) {
       for (int j=0; j<colunas; j++) {
          matriz[i][j] = cont; 
          cont++; 
       }
    }

   printf("{ \n");
   for (int i=0; i<linhas; i++) {
      printf("   { ");
      for (int j=0; j<colunas; j++) {
          printf("%d ", matriz[i][j]);        
      }      
       printf("} \n");
    }
    printf("} \n\n");  

//    matriz[2][3] = 10;

    for (int i=0 ; i<linhas ; i++ ){
        free (matriz[i]);
    }
    free ( matriz );
}

int main() {  
  
    matriz2d(3, 4);  
   
    return 0;

}