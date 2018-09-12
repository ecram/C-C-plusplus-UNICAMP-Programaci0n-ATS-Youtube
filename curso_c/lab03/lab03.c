#include <stdio.h>
#include "lab03.h"


int parImpar(int num)
{
	if( num%2 )
	{
		printf("Numero %d e impar\n",num);
	}
	else
	{
		printf("Numero %d e par\n",num);
	}
	return num%2;
}
int somatorio(int num)
{
	int contador=0,som=0;
	while( contador <= num )
	{
		som+=contador++;
	}
	printf("Somatorio de %d e %d\n",num,som);
	return som;
}
int fatorial(int num)
{
	int contador=0,fat=1;
	for( contador=1 ; contador <= num ; contador++)
	{
		fat*=contador;
	}
	printf("Fatorial de %d e %d\n",num,fat);
	return fat;
}
void saltoPara(int inicio, int fim, int salta, int para )
{
	int contador;
	for( contador=inicio ; contador <= fim ; contador+= ( (inicio<fim)?+1:-1 ) )
	{
		if( contador==salta ) continue;
		if( contador==para ) break;
		printf("contador=%d\n",contador);
	}
}
void imprima_cor( tcores cor )
{
	switch( cor )
	{
		case verde : printf("Cor verde\n"); break;
		case vermelho : printf("Cor vermelho\n"); break;
		case azul : printf("Cor azul\n"); break;
		default : printf("Cor nao cdastrada\n"); break;
	}
}
int main()
{
	

	parImpar(3);
	somatorio(3);
	fatorial(3);
	somatorio(4);
	fatorial(4);
	saltoPara(1, 5, 2, 4 );
	imprima_cor( verde );
	return 0;
}
