/* 
 * nome: exemplo55.c
 * descrição: 
 * data: 03/10/2012
 */
#include <stdio.h> 
#include <stdlib.h> 
#include <errno.h> 

int main(int argc, char *argv[])
{ 
    for( int cont=0 ; cont<argc ; cont++)
       printf("argv[%d]=\"%s\"\n", cont, argv[cont]); 
    return 0;
} 

