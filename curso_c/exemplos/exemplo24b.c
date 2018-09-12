/* 
 * nome: exemplo24b.c
 * descrição: Operadores ++ e --
 * data: 13/02/2014
 */
#include <stdio.h>
int main()
{
    int x=1,y=3,z=5;
    y=x++;
    z=++x;
    printf("x=%i, y=%i e z=%i\n",  x, y, z );
    return 0;
}

