/* 
 * nome: exemplo26.c
 * descrição: Operadores lógicos 
 * data: 03/10/2012
 */
#include <stdio.h>
int main()
{
    int x,y,z;
    x = 1 && 0;
    y = x || 20;
    z = !x;
    printf("x=%i, y=%i e z=%i\n",  x, y, z );
    return 0;
}

