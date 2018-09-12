/* 
 * nome: exemplo12.c
 * descrição: Declaração e utilização de vetores e matrizes
 * data: 09/04/2013
 */
#include <stdio.h>
int main()
{
   int idade=35;
    int dataNascimento[3];
    dataNascimento[0]=3;
    dataNascimento[1]=1;
    dataNascimento[2]=1978;
    printf("Data de nascimento %d/%d/%d, idade = %d\n", 
	dataNascimento[0], dataNascimento[1],
        dataNascimento[2], idade );
    return 0;
}

