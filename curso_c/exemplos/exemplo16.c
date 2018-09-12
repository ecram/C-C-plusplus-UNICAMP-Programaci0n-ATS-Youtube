/* 
 * nome: exemplo16.c
 * descrição: Declaração, inicialização e utilização de struct
 * data: 03/10/2012
 */
#include <stdio.h>
int main()
{
   struct data
    {
       int dia,mes,ano;
    } hoje = { .dia = 17, .mes = 10, .ano = 2012 };
    struct data amanha;
    amanha.dia=hoje.dia+1;
    amanha.mes=hoje.mes;
    amanha.ano=amanha.ano;
    printf("Data de hoje %d/%d/%d\n", hoje.dia, hoje.mes, hoje.ano);
    printf("Data de amanha %d/%d/%d\n", amanha.dia, amanha.mes, amanha.ano);
    return 0;
}

