/* 
 * nome: exemplo02.c
 * descrição: Printf
 * data: 08/04/2013
 */
#include <stdio.h>
int main()
{
   // O comando printf
    printf("Bom dia\n"); 
    printf("L11)    10 = %d,%i,%u,%o,%x\n",10,10,10,10,10); 
    printf("L12)   -10 = %d,%i,%u,%o,%x\n",-10,-10,-10,-10,-10); 
    printf("L13)  0.10 = %f,%e,%g,%a,%x\n",0.10,0.10,0.10,0.10,0.10); 
    printf("L14) -0.10 = %f,%e,%g,%a \n"  ,-0.10,-0.10,-0.10,-0.10); 
    printf("L15)  char = %c string = %s\n", 'a' ,"Bom dia"); 
    return 0; 
}
