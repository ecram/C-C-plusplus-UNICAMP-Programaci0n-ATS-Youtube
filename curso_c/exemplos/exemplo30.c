/* 
 * nome: exemplo30.c
 * descrição: Operadores relacionais binários
 * data: 03/10/2012
 */
#include <stdio.h>
int main()
{
    int x=1,y=3,z=5;
    x = x>y ? x : y;
    z = !z ? 10 : z+10;
    printf("x=%i,y=%i e z=%i \n",  x, y, z );
    return 0;
}

