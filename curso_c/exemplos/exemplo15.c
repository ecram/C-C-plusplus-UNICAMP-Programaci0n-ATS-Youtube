/* 
 * nome: exemplo15.c
 * descrição: Declaração de struct
 * data: 03/10/2012
 */
#include <stdio.h>
int main()
{
   struct data
    {
       int dia,mes,ano;
    } hoje;
    struct data amanha;
    hoje.dia=17;
    hoje.mes=10;
    hoje.ano=2012;
    // amanha = hoje + 1; // erro de compilação
    printf("Data de hoje %d/%d/%d\n", hoje.dia, hoje.mes, hoje.ano);
    return 0;
}

