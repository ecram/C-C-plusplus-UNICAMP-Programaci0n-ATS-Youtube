/* 
 * nome: exemplo23.c
 * descrição: typedef
 * data: 03/10/2012
 */
#include <stdio.h>
int main()
{

    typedef int inta, intb[2], intc[2][2];
    typedef char chara, charb[];
    typedef struct tipostruct { int x; } novo_tipo; // novo_tipo não é variável
 
    inta ia = 10;
    intb ib = { 1 , 2 };
    intc ic = { {1 , 2} , {11 , 12} };
    chara ca = 'a';
    charb cb = "Hello";
    novo_tipo ta = { .x = 100 }; 
    // ou declarar struct tipostruct ta = { .x = 100 };
 
    printf( "ia=%d, ib[1]=%d, ic[1][1]=%d\n", ia, ib[1], ic[1][1]);
    printf( "ia=%c, ib=%s\n", ca, cb);
    printf( "ta.x=%d\n", ta.x );
 
    return 0;
}

