#include <stdio.h>
 #include <time.h>
 #include <math.h>
 #include <stdlib.h>

 int x = 1; // El caballo inica en la casilla superior
 int y = 1; // izquierda
 const int TAMANO = 8; // Cambiar esta variable para resolver el problema del
                 // recorrido del caballo en un tablero de N * N
 int contador = 1; // Esta variable lleva la cuenta de las casillas
                   // recorridas
 int ciclos = 0; // Esta variable cuenta los ciclos que se intentan
                 // antes de terminar que ya no haya lugares a los cuales
                 // ir
 int intentos_fallidos = 0; // Esta variable cuenta cuantos ciclos se
 // intentan antes de obtener el que pidio el usuario.

 // Prototipo de funcion Imprime
 void Imprime( int a[TAMANO + 1][TAMANO + 1]);
 int main()
 {    // Abre main
 srand(time(NULL));
 int Arreglo[TAMANO + 1][TAMANO + 1];

 Arreglo[y][x] = 1;    
 int dado1;
 int dado2;
 int casillas_requeridas = 0;

 do
 {   // Abre while
 printf("\nCuantas casillas quiere que recorra por lo menos?");
 printf("\n(Un numero positivo menor o igual que %d): ", TAMANO*TAMANO );
 scanf("%d", &casillas_requeridas);
 }  while ((TAMANO*TAMANO < casillas_requeridas) || (0 > casillas_requeridas));

 while ( contador < casillas_requeridas )
 {    // Abre while
 intentos_fallidos++; // Se incrementa cada que inica un intento de
                      // completar las casillas pedidas por el usuario
 contador = 1; // Dado que ya se ha colocado al caballo en (y,X), se
               // inicia el contador en 1
 int ciclos = 0; // Se inicia con 0 ciclos o lanzamientos de dados infructuosos
 // Cada vez que se aborta un intento han de limpiarse las casillas, con
 // el siguiente par de ciclos se establecen a 0 nuevamente.
 int s;
 int t;
 for ( s = 0; s <= TAMANO; s++ )
 {        // Abre for
 for ( t = 0; t <= TAMANO; t++ )
 Arreglo[s][t] = 0;
 }        // Cierra for

 // Se ha de colocar el caballo en la esquina superior izquierda cada vez
 // Desde luego se puede poner en cualquier parte
 x = 1;
	printf("\n\nInicio x: %i\n",x);
 y = 1;
	printf("Inicio y: %i\n",y);
 Arreglo[y][x] = 1;
	printf("Arreglo[y][x] = %i\n\n",Arreglo[y][x]);

 // Mientras no se encuentre un lugar para el caballo
 while ( 1000 != ciclos )
 // Por que 100? En el caso extremo en el que solo falte una casilla por
 // llenar (la 64 para un tablero de 8*8) la mayoria de las casillas aleatorias
 // estaran ya ocupadas, pero a la larga, una de cada 64 (TAMANO*TAMANO) sera
 // la correcta. Para evitar que el intento se aborte debido a una fluctuacion
 // estadistica (por ejemplo que de 500 casillas aleatorias ninguna sea la
 // casilla en blanco) se pone un "colchon" de 1000 casillas. Esto se puede
 // cambiar, desde luego, teniendo en cuenta cual es la probabilidad de que se
 // obtenga una casilla cualquiera.

 {        // Abre while
 ciclos++;
	printf("1. Ciclos: %i hasta 1000\n",ciclos);
 dado1 = 1 +  rand() % TAMANO;
	printf("2. dado1 aleatorio: %i\n",dado1);
 dado2 = 1 +  rand() % TAMANO;
	printf("3. dado2 aleatorio: %i\n",dado2);

	printf("4. si (2==%f, donde 2==fabs(x - dado1)) entra a 1==>\n",fabs(x - dado1));
 if ( 2 == fabs(x - dado1))
 {       // Abre if
	printf("5. si (1==%f, donde fabs(y - dado2))\n",fabs(y - dado2));
 if ( 1 == fabs(y - dado2))
	printf("6. si (0==%i)\n",Arreglo[dado1][dado2]);
 if ( 0 == Arreglo[dado1][dado2] )
 {     // Abre if
 Arreglo[dado1][dado2] = ++contador;
	printf("7. Arreglo[dado1][dado2] = ++contador = %i\n",contador);
 x = dado1;
	printf("8. x = dado1: %i\n",dado1);
 y = dado2;
	printf("9. y = dado2: %i\n",dado2);
 ciclos = 0;
	goto fin;
 }     // Cierra if
 }       // Cierra if

	printf("10. (fabs(fabs(x) - fabs(dado1)): %f == 1\n",fabs(fabs(x) - fabs(dado1)));
 if ( fabs(fabs(x) - fabs(dado1)) == 1)
 {  // abre if
	printf("11. (fabs(fabs(y) - fabs(dado2)): %f == 2\n",fabs(fabs(y) - fabs(dado2)));
	printf("12. 0 == %i : (Arreglo[dado1][dado2])\n",Arreglo[dado1][dado2]);
 if ( fabs(fabs(y) - fabs(dado2)) == 2  )
 if ( 0 == Arreglo[dado1][dado2] )
 {    // Abre if
 Arreglo[dado1][dado2] = ++contador;
	printf("13. Arreglo[dado1][dado2] = ++contador: %i\n",contador);
 x = dado1;
	printf("14. x = dado1: %i\n",dado1);
 y = dado2;
	printf("15. y = dado2: %i\n",dado2);
 ciclos = 0;
 }  // Cierra if
 }  // Cierra if

	printf("16. fin\n\n"); if(contador==5) break;
 }       // Cierra while
 }    // Cierra while
	fin:
 printf("\nLISTO!\n");
 printf("\nSe recorrieron %d casillas\n", contador);
 printf("\nSe intentaron %d circuitos antes de obtener", intentos_fallidos);
 printf(" el requerido.\n");

 Imprime( Arreglo);


 }    // Cierra main


/*La funcion siguiente despliega el tablero de ajedrez */

 //////////////////////////////////////////
 // Imprime
 ///////////////////////////////////////////

void Imprime( int Matriz[TAMANO + 1][TAMANO + 1])

{ // Abre la funcion Imprimir
int i;
int j;
printf("\n\nEste es el tablero:\n\n ");
for ( i = 1; i <= TAMANO; i++ )
{ // Abre for
for ( j = 1; j <= TAMANO; j++)
{ // abre for anidado
printf(" %d\t",  Matriz[i][j]);
} // Cierra for anidado
printf("\n\n\n");
} // Cierra for

printf("\n\n\n");
} // Cierra la funcion Imprimir
