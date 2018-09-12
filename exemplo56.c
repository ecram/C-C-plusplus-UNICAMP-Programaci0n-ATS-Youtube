/*
 * nome: exemplo56.c
 * descrição: Passar parâmetros para um programa
 * data: 23/03/2018
 */

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main(int argc, char *argv[])
{
	for (int cont=0; cont<argc; cont++)
		printf("argv[%d] = \"%s\"\n",cont, argv[cont]);
	return 0;
}
