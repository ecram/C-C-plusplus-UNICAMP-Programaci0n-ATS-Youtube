/*
 * nombre: ejercicio28.c
 * descripción: Pasar un número a binario con Recursividad
 * fecha: 27/03/2018
 */

// 283 % 10 = 3; 283/10 = 28
//  28 % 10 = 8;  28/10 =  2
//   2 % 10 = 2;   2/10 =  0

#include <stdio.h>

void invertir(int n)
{
	if (n>0)
	{
		printf("%i",n%10);
		invertir(n/10);
	}
}

void invertir_num(int n, int nv)
{
	if(n>0)
	{
		nv=(nv*10)+(n%10);
		invertir_num(n/10,nv);
	}
	else
		printf("%i\n",nv);
}

int main()
{
	int num = 0, nuevo = 0;

	do
	{
		printf("Digite un número: ");
		scanf("%i",&num);
	}while(num<0);

	invertir(num);
	printf("\n");
	invertir_num(num,nuevo);

	return 0;
}
