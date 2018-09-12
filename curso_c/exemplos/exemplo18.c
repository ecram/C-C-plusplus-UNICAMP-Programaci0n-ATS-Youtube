/* 
 * nome: exemplo18.c
 * descrição: Declaração e utilização de union
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
    val1.inteiro=10; 
    printf("inteiro %d\n", val1.inteiro); 
    printf("real %f\n", val1.real); 
    printf("big_real %f\n", val1.big_real); 
    val1.real=1.5; 
    printf("inteiro %d\n", val1.inteiro); 
    printf("real %f\n", val1.real); 
    printf("big_real %f\n", val1.big_real); 
    return 0;
}

