/* 
 * nome: exemplo39.c
 * descrição: goto
 * data: 06/11/2012
 */
#include <stdio.h> 
int main() 
{ 
    int cont=0; 
    inicio:
    printf("cont1=%d\n",++cont); 
    if( cont<=10 ) goto inicio;
    else goto fim;
    printf("Texto final\n");
    fim: 
    return 0;
} 

