#include <stdio.h>
#include <stdbool.h>  

typedef struct grafo Grafo;

Grafo *criar_grafo(int numero_de_vertices, int numero_maximo_de_arestas, bool ponderado);
void destruir_grafo(Grafo *ptr_grafo);

void inserir_aresta_grafo(Grafo *ptr_grafo, int vertice_origem, int vertice_destino, bool direcionado, float peso);
void remover_aresta_grafo(Grafo *ptr_grafo, int vertice_origem, int vertice_destino, bool direcionado);;

