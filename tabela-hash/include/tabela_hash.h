#include <stdio.h>

#include "lista_ligada.h" 

typedef struct tabela_hash Tabela_Hash;

Tabela_Hash* criar_tabela_hash(int tamanho_vetor);
void destruir_tabela_hash(Tabela_Hash **ptr_tabela_hash);

void adicionar_tabela_hash(Tabela_Hash *ptr_tabela_hash, char *chave, int valor); 
void remover_tabela_hash(Tabela_Hash *ptr_tabela_hash, char *chave); 

int buscar_tabela_hash(Tabela_Hash *ptr_tabela_hash, char *chave); // retorna -1 se não encontrar
void imprimir_tabela_hash(Tabela_Hash *ptr_tabela_hash);