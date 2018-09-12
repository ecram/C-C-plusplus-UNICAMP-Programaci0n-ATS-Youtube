/* 
 * nome: exemplo34.c
 * descrição: switch
 * data: 06/11/2012
 */
#include <stdio.h>
int main()
{
    int x=3;
    switch( x )
    {
       case 1: printf("x=1\n"); break;
       case 2: printf("x=2\n");
       case 3: printf("x=3\n"); break;
       default: printf("o valor x= é diferente de todos os cases\n");
    }
    return 0;
}

