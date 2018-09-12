/* 
 * nome: exemplo20.c
 * descrição: Declaração de enum
 * data: 03/10/2012
 */
#include <stdio.h>
int main()
{
    enum cores { vermelho, verde, azul } val1;
    enum estado_civil { solteiro=1, casado, viuvo=5, desquitado };
    enum estado_civil val2;
    return 0;
}

