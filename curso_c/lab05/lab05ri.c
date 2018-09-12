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
	int num;
	for( int cont=1 ; cont<argc ; cont++)
	{
		num=atoi(argv[cont]);
		printf("argv[%d]=%s e int=%d\n", cont, argv[cont],num); 
		return 0;
	}
} 
