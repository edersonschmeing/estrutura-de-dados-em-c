#include <stdio.h>

int main() {

    typedef struct  data {
        int dia;
        int mes;
        int ano;    
    } t_data;
    
    t_data data_atual; 

    t_data *p = NULL; 
    
    p = &data_atual;

    p->dia = 28;
    p->mes = 2; 
    p->ano = 2023;

    printf("A data atual é %d/%d/%d \n\n", data_atual.dia, data_atual.mes, data_atual.ano);

    (*p).dia = 1; 
    (*p).mes = 3;
    (*p).ano = 2023;

    printf("A data atual é %d/%d/%d \n", data_atual.dia, data_atual.mes, data_atual.ano);
  

}