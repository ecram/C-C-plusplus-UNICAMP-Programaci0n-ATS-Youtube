/* 
 * nome: exemplo24.c
 * descrição: Operadores aritméticos binários
 * data: 13/02/2014
 */
#include <stdio.h>
int main()
{
    int x=1,y=3,z=5;
    x=y+z;
    z=x%y;
    y=z/x; // int / int = int
    x=-x;
    printf("x=%i, y=%i e z=%i\n",  x, y, z );
    return 0;
}

