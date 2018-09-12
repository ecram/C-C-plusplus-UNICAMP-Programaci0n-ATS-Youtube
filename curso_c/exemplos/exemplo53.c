/* 
 * nome: exemplo53.c
 * descrição: 
 * data: 03/10/2012
 */
#include <stdio.h> 

int conta()
{
    static int var=1;
    return var++;
}
 
int main()
{ 
    printf("Conta=%d\n",conta());
    printf("Conta=%d\n",conta());
    printf("Conta=%d\n",conta());
    return 0;
} 

