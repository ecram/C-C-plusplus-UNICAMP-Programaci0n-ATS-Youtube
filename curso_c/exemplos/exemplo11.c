/* 
 * nome: exemplo11.c
 * descrição: Declaração e inicialização de vetores e matrizes
 * data: 13/02/2014
 */
#include <stdio.h>
int main()
{
    int idade=34;
    int dataNascimento[3]={3,1,1978};
    int matriz2D[2][2] = { {0,1}, {10,11} };
    int outra2D[2][2] = { 0, 1, 10, 11 };
    int diasMes[] = {31,29,31,30,31,30,31,31,30,31,30,31};
    int naoC99[2];
    naoC99[0]=10;
    naoC99[1]=20;
    return 0;
}
