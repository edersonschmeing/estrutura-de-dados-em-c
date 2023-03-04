#include <stdio.h>
#include <stdlib.h>  // contém o NULL, calloc, malloc, free


void matriz3d(int a, int b, int c ) { 

    int*** matriz;

    int linhas = a;
    int colunas = b;
    int profundidades = c;

    matriz = (int***) malloc(sizeof(int**) * linhas);

    for(int i=0; i<linhas; i++) {
        matriz[i] = (int**) malloc(sizeof(int*) * colunas);
    }

    for ( int i=0; i<linhas; i++){ 
       for (int j=0 ; j<colunas; j++){ 
            matriz[i][j] = (int*) malloc (sizeof (int) * profundidades);
        }   
    }

    int cont = 1;
    for (int i=0; i<linhas; i++) {
       for (int j=0; j<colunas; j++) {
          for (int k=0; k<profundidades; k++) {
             matriz[i][j][k] = cont;
             cont++;
          }
       }
    } 

    //matriz[0][0][0] = 250;
    //matriz[1][1][1] = 333;
    //matriz[2][2][2] = 555; 

    //printf("%d ", matriz[0][0][0]);  
    //printf("%d ", matriz[1][1][1]);
    //printf("%d ", matriz[0][2][0]); 

    printf("{ \n");
    for (int i=0; i<linhas; i++) {
        printf("   { \n");
        for (int j=0; j<colunas; j++) {
            printf("      { ");
           for (int k=0; k<profundidades; k++) {
              printf("%d ", matriz[i][j][k]);        
           }
           printf("} \n");
        }      
        printf("   } \n");
     }
     printf("} \n\n");  

  // inicio liberacao da matriz
    for (int i=0 ; i<linhas ; i++){
        for (int j=0; j<colunas ; j++){
            free ( matriz[i][j] );
        }
    } 
   for (int i=0; i<linhas; i++){
        free (matriz[i]);
    }
    free (matriz);
}

int main() {  
  
    matriz3d(4, 3, 2);

    return 0;

}