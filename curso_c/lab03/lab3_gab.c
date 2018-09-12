#include<stdio.h>
#include"lab3_gab.h"

int main()
{

	int var_soma = 10, res_soma;
	int var_fato = 4 , res_fato;
	tcores cor = vermelho;

	res_soma = somatorio(var_soma);

	res_fato = fatorial (var_fato);

	imprima_cor (cor);

	printf("Valor do somatório de %d até 0 é %d\n", var_soma,res_soma); 
	printf("Valor do fatorial de %d até 0 é %d\n", var_fato,res_fato); 

return 0;
}


// FUNÇÃO 2
int somatorio (int num)
{

	int i = num;
	int res;	

	while (i != 0)
		{
		i = --i;
		num = num + i; 
		} 
	
	res = num;

	return res;
};

// FUNÇÃO 3
int fatorial (int num)
{

	int i = num;
	int res;	

	while (i != 1)
		{
		i = --i;
		num = num * i; 
		} 
	
	res = num;

	return res;
};

// Função 3

int imprima_cor (int tcores_var )
{
		switch (tcores_var)
		{
			case 0: printf("verde\n"); break;
			case 1: printf("vermelho\n"); break;
			case 2: printf("azul\n"); break;

			default: printf("cor nao cadastrada\n"); break;  
		} 
}
