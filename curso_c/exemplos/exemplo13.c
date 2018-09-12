/* 
 * nome: exemplo13.c
 * descrição: Declaração e utilização de strings
 * data: 03/10/2012
 */
#include <stdio.h>
int main()
{
   char nome[]="Carlos Henrique Rebollo";
    char profissao[9]="Analista";
    printf("Nome %s ( letra inicial %c) profissão %s \n", nome, nome[0], profissao);
    return 0;
}

