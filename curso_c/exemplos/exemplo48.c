/* 
 * nome: exemplo48.c 
 * descrição: Declaração de struct 
 * data: 10/04/2013 
 */ 
#include <stdio.h> 
int main() 
{ 
    struct data 
    { 
       int dia,mes,ano; 
    } dia = {.dia=17, .mes=10, .ano=2012}; 
    struct data *pdia=&dia; 
    printf("Data de hoje %d/%d/%d\n", pdia->dia, (*pdia).mes, dia.ano); 
    return 0; 
} 


