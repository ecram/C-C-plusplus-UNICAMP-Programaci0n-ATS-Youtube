/* 
 * nome: exemplo28.c
 * descrição: Operadores de atribuição
 * data: 03/10/2012
 */
#include <stdio.h>
int main()
{
    int x=0,y=0,z=10;
    x = 1;
    y+= x+1;
    z%=y;
    printf("x=%i, y=%i e z=%i\n",  x, y, z );
    return 0;
}

