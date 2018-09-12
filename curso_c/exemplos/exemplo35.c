/* 
 * nome: exemplo35.c
 * descrição: while
 * data: 06/11/2012
 */
#include <stdio.h>
int main()
{
    int cont=1;
 
    while( cont <=10 )
    {
       printf("C1 cont=%d\n",cont);
       cont++;
    }
 
    while( cont-- )
       printf("C2 cont=%d\n",cont);
 
    while( cont++ <=10 );
       printf("C3 cont=%d\n",cont);
    return 0;
}

