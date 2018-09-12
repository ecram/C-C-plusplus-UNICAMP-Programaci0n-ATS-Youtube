/* 
 * nome: exemplo27.c
 * descrição: Operadores bit binários
 * data: 03/10/2012
 */
#include <stdio.h>
int main()
{
    int x=1,y=1,z=1;
    x = 1 << 1;
    y = 10 & 3;
    z = 10 | 3;
    printf("x=%i, y=%i e z=%i\n",  x, y, z );
    printf("~x=%i\n",~x);
    return 0;
}

