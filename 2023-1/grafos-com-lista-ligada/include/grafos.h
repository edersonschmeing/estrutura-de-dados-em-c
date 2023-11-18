#include <stdio.h>
#include <stdbool.h>  

typedef struct grafo Grafo;

Grafo *criar_grafo(int numero_de_vertices);
void destruir_grafo(Grafo *ptr_grafo);

void inserir_aresta_grafo(Grafo *ptr_grafo, int vertice_origem, int vertice_destino, bool direcionado, float peso);
void remover_aresta_grafo(Grafo *ptr_grafo, int vertice_origem, int vertice_destino, bool direcionado);;

//busca_profundidade
//busca_largura
//menor_caminho
