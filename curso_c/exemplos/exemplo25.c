/* 
 * nome: exemplo25.c 
 * descrição: Operadores relacionais binários 
 * data: 10/04/2013 
 */ 
#include <stdio.h> 
int main() 
{ 
    int x=1,y=3,z=5; 
    printf("x>y %i, x<z %i e y<=z %i\n",  x>y, x<z, y<=z ); 
    printf("x==y %d e x!=z %d\n", x==y, x!=z ); 
    printf("%d\n", z > y > x); 
    return 0; 
} 

