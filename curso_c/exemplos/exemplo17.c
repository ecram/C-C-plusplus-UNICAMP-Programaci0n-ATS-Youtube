/* 
 * nome: exemplo17.c
 * descrição: Declaração de union
 * data: 03/10/2012
 */
#include <stdio.h>
int main()
{
   union valor
    {
       int inteiro;
       float real;
       double big_real;
    } val1;
    union valor val2;
    return 0;
}

