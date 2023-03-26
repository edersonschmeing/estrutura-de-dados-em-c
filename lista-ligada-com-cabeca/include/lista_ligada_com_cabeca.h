#include <stdio.h>
#include <stdlib.h> 
#include <stdbool.h> 


typedef struct no No;

typedef struct lista Lista;


Lista *criar_lista();

void destruir_lista(Lista **lista);


void imprimir_lista(Lista *lista);

void adicionar_inicio_lista(Lista *lista, int valor);

