/*
 * nome: exemplo45.c
 * descrição: Alocação de memória por malloc, calloc, realloc;
 * data:22/03/2018
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *px, *py;
	int x = 1, y = 3;

	px = malloc(sizeof(int));
	py = malloc(sizeof(int));

	*px = 10;
	*py = 30;
	*px = *px + *py;

	printf("x = %d, y = %i\n", x, y);
	printf("*px = %i, *py = %d\n", *px, *py);
	printf("px = %p, py = %p\n", px, py);
	printf("&x = %p, &y = %p\n", &x, &y);

	free(px);
	free(py);

	printf("Depois de free()\n");
	printf("px = %p, py = %p\n", px, py);
	px = py = NULL;
	printf("px = %p, py = %p\n", px, py);

	free(px);
	free(py);

	return 0;
}

