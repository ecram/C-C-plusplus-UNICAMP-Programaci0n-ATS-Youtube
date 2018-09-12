/* 
 * nome: lab03.c
 * descrição: uso de funções com do while infinito
 * data: 21/03/2018
 * execução: 
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "lab03.h"

void clrscr()
{
	system("@cls||clear");
}

int obnum()
{
	int num = 0;
	printf("Qual é o valor de num: ");
	scanf("%d",&num);
	return num;
}

int parImpar(int num)
{
	int res = (num%2)==0 ? 0:1;
	if(res == 0)
		printf("O número %i é par.\n", num);
	else
		printf("O número %i é impar.\n", num);
	return res;
}

void somatorio(int num)
{
	int res = 0;
	int n = num;
	while(num>=1)
		res+=num--;
	printf("Somatório de %i = %i\n",n,res);
}

void fatorial(int num)
{
	int res = 1;
	for(int i=num;i>=1;)
		res = res * i--;
	printf("%i! = %i\n",num,res);
}
void saltoPara(int inicio, int fim, int salta, int para)
{
	int c;
	for(c=inicio;c<=fim;c+=((inicio<fim)?+1:-1))
	{
		if(c==salta) continue;
		if(c==para) break;
		printf("Contador c = %i\n", c);
	}
}

void imprima_cor(tcores cor)
{
	switch(cor)
	{
		case verde: printf("Cor verde\n"); break;
		case vermelho: printf("Cor vermelho\n"); break;
		case azul: printf("Cor azul\n"); break;
		// default : printf("Cor nao cdastrada\n"); break;
	}
}

int main()
{
	int opcao = 0, num = 0, inicio = 0, fim = 0, salta = 0, para = 0;
	clrscr();

	do
	{
		//clrscr();
		printf("Menu de Opções\n");
		printf("==============\n\n");
		printf("Seleccione uma opção válida (1-5,9):\n");
		printf("1 Número é par ou impar de n.\n");
		printf("2 Suma inversa de n\n");
		printf("3 Fatorial de n.\n");
		printf("4 SaltaPara com pulos de n = 1 entre x e y.\n");
		printf("5 Função imprima cor usando typedef.\n");
		printf("9 Para SAIR!\n\n");
		printf("Ingresse uma opção: ");
		scanf("%d",&opcao); printf("\n");

		switch(opcao)
		{
			case 1: num = obnum();
				printf("A função parImpar(%i) = %i", num, parImpar(num));
				break;
			case 2: num = obnum();
				somatorio(num);
				break;
			case 3: num = obnum();
				fatorial(num);
				break;
			case 4: printf("Qual é o valor da variavel 'inicio': ");
				scanf("%d",&inicio);
				printf("Qual é o valor da variavel 'fim': ");
				scanf("%d",&fim);
				printf("Qual é o valor da variavel 'salta': ");
				scanf("%d",&salta);
				printf("Qual é o valor da variavel 'para': ");
				scanf("%d",&para);
				saltoPara(inicio,fim,salta,para);
				break;
			case 5: printf("Seleccione uma cor (verde = 1, vermelho = 2, azul = 3: ");
				scanf("%i",&num);
				switch(num)
				{
					case 1: imprima_cor(verde); break;
					case 2: imprima_cor(vermelho); break;
					case 3: imprima_cor(azul); break;
					default: printf("Cor não cadastrada\n"); break;
				}
				break;
			case 9: printf("Até mais!\n"); 
				break;
			default: printf("Não compreendi a opção...");
				 //break;
		}
		sleep(3);
		clrscr();
	} while(opcao != 9);
}
