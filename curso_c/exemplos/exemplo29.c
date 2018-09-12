/* 
 * nome: exemplo29.c
 * descrição: Operador membro
 * data: 03/10/2012
 */
#include <stdio.h>
int main()
{
    struct data
    {
       int dia,mes,ano;
    } hoje = { .dia = 17, .mes = 10, .ano = 2012 };
    printf("Data de hoje %d/%d/%d\n", hoje.dia, hoje.mes, hoje.ano);
    return 0;
}

