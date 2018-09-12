/* 
 * nome: exemplo36.c
 * descrição: do
 * data: 06/11/2012
 */
#include <stdio.h>
int main()
{
    int cont=1;
 
    do
    {
       printf("C1 cont=%d\n",cont);
       cont++;
    }
    while( cont <=10 );
 
    do
       printf("C2 cont=%d\n",cont);
    while( cont-- );
 
    return 0;
}

