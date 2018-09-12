/* 
 * nome: exemplo40.c
 * descrição: funções
 * data: 06/11/2012
 */
#include <stdio.h> 
int inc(int x)
{
   x++;
   return x;
}
int dec(int x)
{
    x--;
    return x;
}
 
int main() 
{ 
   int var=0; 
   printf("inc(var)=%d\n",inc(var)); 
   printf("dec(var)=%d\n",dec(var)); 
   var=inc(var);
   printf("inc(var)=%d\n",inc(var)); 
   printf("dec(var)=%d\n",dec(var)); 
   return 0;
} 

