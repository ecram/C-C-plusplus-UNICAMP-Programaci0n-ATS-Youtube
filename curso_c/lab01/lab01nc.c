/* 
 * nome: lab01.c
 * descrição: Primeiro lab
 * data: 14/04/2013
 */
#include <stdio.h>
int main()
{
   int dia=15,mes=4,ano=2013,idade=36;
   char letra='a';
   float altura=1.7e0;
   float peso=7.e2;
   long double pi=0.314159265358979323846e1L;
   printf("altura=%f\n",altura);
   printf("peso=%f\n",peso);
   printf("letra=%c\n",letra);
   printf("pi=%1.20Lf\n",pi);
   printf("Data de nascimento %d/%d/%d tenho %d anos\n",dia,mes,ano,idade);
   return 0; 
}
