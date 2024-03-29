#include <stdio.h>
#include <stdlib.h>
#include "grafos.h"

int main(){
    int eh_digrafo = 1;
    Grafo* gr = cria_Grafo(5, 5, 1);

    insereAresta(gr, 0, 1, eh_digrafo, 3);
    insereAresta(gr, 1, 3, eh_digrafo, 4);
    insereAresta(gr, 1, 2, eh_digrafo, 0);
    insereAresta(gr, 2, 4, eh_digrafo, 6);
    insereAresta(gr, 3, 0, eh_digrafo, 2);
    insereAresta(gr, 3, 4, eh_digrafo, 5);
    insereAresta(gr, 4, 1, eh_digrafo, 8);

    printf("Grafo \n");
    
    imprime_Grafo(gr);

   
    int vis[5];

    // http://www.thelearningpoint.net/computer-science/algorithms-graph-traversal---breadth-first-search-with-c-program-source-code
    
    printf("\nBusca em profundidade \n");

    buscaProfundidade_Grafo(gr, 0, vis);

    printf("\nBusca em largura \n");
    buscaLargura_Grafo(gr, 0, vis);

    printf("\nMenor Caminho \n");
    
    int i,ant[5];
    float dist[5];
    menorCaminho_Grafo(gr, 0, ant, dist);
    for(i=0; i<5; i++)
        printf("%d: %d -> %f\n",i,ant[i],dist[i]);

    libera_Grafo(gr);

    //system("pause");
    return 0;
}