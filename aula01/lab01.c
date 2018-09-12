/*
 * nome: lab01.c
 * descrição: laboratório de variáveis em c
 * data: 19/03/2018
 */
#include <stdio.h>
void main()
{
	int dia = 19, mes = 3, ano = 2018, idade = 35;
	char letra = 'm';
	float altura = 1.79, peso = 88.7;
	long double pi =  3.14159265358979323846L;
	printf("Data de nascimento %d/%d/%d tenho %d anos\n", dia, mes, ano, idade);
	printf("altura = %f e peso %f\n", altura, peso);
	printf("a letra é %c\n", letra);
	printf("pi é %Lf\n", pi);
}
