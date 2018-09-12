/* 
 * nome: lab01.c
 * descrição: Primeiro lab
 * data: 14/04/2013
 */
#include <stdio.h>
int main()
{

   int dia=15;
   int mes=4;
   int ano=2013;
   int idade=36;
   char letra='a';
   float altura=1.7;
   float peso=70.0;
   long double pi=3.14159265358979323846L;
   char pis[]="3.14159265358979323846";

   printf("altura=%f\n",altura);
   printf("peso=%f\n",peso);
   printf("letra=%c\n",letra);
   printf("pi=%.30Lf\n",pi);
   printf("pi=%s\n",pis);
   printf("Data de nascimento %d/%d/%d tenho %d anos\n",dia,mes,ano,idade);
   return 0; 
}
