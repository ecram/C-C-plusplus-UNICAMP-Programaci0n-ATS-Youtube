/* 
 * nome: exemplo22.c
 * descrição: Declaração, inicialização e utilização de enum
 * data: 03/10/2012
 */
#include <stdio.h>
int main()
{
    enum cores { vermelho, verde, azul } val1=azul;
    enum estado_civil { solteiro=1, casado, viuvo=5, desquitado };
    enum estado_civil val2;
    val2=casado;
    printf("cores %u %u %u\n",  vermelho, verde, azul );
    printf("variaveis %u %u \n", val1, val2 );
    return 0;
}

