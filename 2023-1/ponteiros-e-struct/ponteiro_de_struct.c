#include <stdio.h>

int main() {

    typedef struct data {
        int dia;
        int mes;
        int ano;    
    } Data;
    
    Data data_atual; 
    
    data_atual.dia = 6;
    data_atual.mes = 3;
    data_atual.ano = 2023; 

    printf("A data atual é %d/%d/%d \n\n", data_atual.dia, data_atual.mes, data_atual.ano);

    Data *p = NULL; 
    
    p = &data_atual;

    p->dia = 10;
    p->mes = 04; 
    p->ano = 2024;

    printf("A data atual é %d/%d/%d \n\n", p->dia, p->mes, p->ano);

    (*p).dia = 20; 
    (*p).mes = 05;
    (*p).ano = 2025;

    printf("A data atual é %d/%d/%d \n\n", (*p).dia, (*p).mes, (*p).ano);


}