/* 
 * nome: exemplo33.c
 * descrição: if
 * data: 06/11/2012
 */
#include <stdio.h>
int main()
{
    int x=1,y=3;
    if( x > y )
    {
       printf("x é maior que y\n");
    }
    else if( x < y )
    {
       printf("x é menor que y\n");
    }
    else
    {
       printf("x não é igual a y\n");
    }
    return 0;
}

