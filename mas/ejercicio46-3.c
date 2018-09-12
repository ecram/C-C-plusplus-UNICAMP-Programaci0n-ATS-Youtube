#include <stdio.h>
#include <time.h>
#include <math.h>
#include <stdlib.h>

int x = 1; // El caballo inica en la casilla superior
int y = 1; // izquierda
int **Arreglo=NULL;
const int TAMANO = 8; // Cambiar esta variable para resolver el problema del
                 // recorrido del caballo en un tablero de N * N
int contador = 1; // Esta variable lleva la cuenta de las casillas
                   // recorridas
int ciclos = 0; // Esta variable cuenta los ciclos que se intentan
                 // antes de terminar que ya no haya lugares a los cuales
                 // ir
int intentos_fallidos = 0; // Esta variable cuenta cuantos ciclos se
 // intentan antes de obtener el que pidio el usuario.

 // Prototipo de funcion Imprime ya no es necesaro
 	/*La funcion siguiente despliega el tablero de ajedrez */

 	 //////////////////////////////////////////
 	 // Imprime
 	 ///////////////////////////////////////////

void Imprime(int** Arreglo)
 	{ // Abre la funcion Imprimir
    int i;
   	int j;
   	printf("\n\nEste es el tablero:\n\n ");
   	for ( i = 1; i <= TAMANO; i++ ){ // Abre for
   	    for ( j = 1; j <= TAMANO; j++){ // abre for anidado
           printf(" \t%d",  Arreglo[i][j]);
   	    } // Cierra for anidado
   	    printf("\n\n\n");
   	} // Cierra for

 	printf("\n\n\n");
 } // Cierra la funcion Imprimir

void Aletorio()
{
  ciclos++;
  switch(dado1)
  {
    case 1: s = 2; t = 1; mover(Arreglo,s,t);break;
    case 2: s = 2; t = -1; mover(Arreglo,s,t);break;
    case 3: s = -2; t = 1; mover(Arreglo,s,t);break;
    case 4: s = -2; t = -1; mover(Arreglo,s,t);break;
    case 5: s = 1; t = 2; mover(Arreglo,s,t);break;
    case 6: s = 1; t = -2; mover(Arreglo,s,t);break;
    case 7: s = -1; t = 2; mover(Arreglo,s,t);break;
    case 8: s = -1; t = -2; mover(Arreglo,s,t);break;
  }
}

void mover(int** Arreglo, int xc, int yc)
{
  if (1 <= (x+xc) && TAMANO >= (x+xc)) {
    if (1 <= (y+yc) && TAMANO >= (y+yc)) {
      if(Arreglo[x+xc][y+yc] == 0){
        y = y+yc;
        x = x+xc;
        Arreglo[x][y]= ++contador;
        ciclos = 0;
      }
    }
  }
}

int main()
 {    // Abre main
	 srand(time(NULL));
	 //int Arreglo[TAMANO + 1][TAMANO + 1];

   Arreglo = (int **)malloc(sizeof(int*)*(TAMANO+1));
   for (int i=1;i<=TAMANO+1;i++)
      Arreglo[i]=(int *)malloc(sizeof(int)*(TAMANO+1));

	 Arreglo[y][x] = 1;
	 int dado1;
	 //int dado2;
	 int casillas_requeridas = 0;

   do
	 {   // Abre while
		 printf("\nCuantas casillas quiere que recorra por lo menos?");
		 printf("\n(Un numero positivo menor o igual que %d): ", TAMANO*TAMANO );
		 scanf("%d", &casillas_requeridas);
	 }  while ((TAMANO*TAMANO < casillas_requeridas) || (0 > casillas_requeridas));

   clock_t begin = clock();

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
		 for ( s = 1; s <= TAMANO; s++ )
		 {        // Abre for
			 for ( t = 1; t <= TAMANO; t++ )
			 Arreglo[s][t] = 0;
		 }        // Cierra for

		 // Se ha de colocar el caballo en la esquina superior izquierda cada vez
		 // Desde luego se puede poner en cualquier parte
		 x = 1;
		 y = 1;
		 Arreglo[y][x] = 1;
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
			 dado1 = 1 +  rand() % TAMANO;
			 //dado2 = 1 +  rand() % TAMANO
       switch(dado1)
       {
         case 1: s = 2; t = 1; mover(Arreglo,s,t);break;
         case 2: s = 2; t = -1; mover(Arreglo,s,t);break;
         case 3: s = -2; t = 1; mover(Arreglo,s,t);break;
         case 4: s = -2; t = -1; mover(Arreglo,s,t);break;
         case 5: s = 1; t = 2; mover(Arreglo,s,t);break;
         case 6: s = 1; t = -2; mover(Arreglo,s,t);break;
         case 7: s = -1; t = 2; mover(Arreglo,s,t);break;
         case 8: s = -1; t = -2; mover(Arreglo,s,t);break;
       }
	 	}       // Cierra while
	 }    // Cierra while

	 printf("\nLISTO!\n");
	 printf("\nSe recorrieron %d casillas\n", contador);
	 printf("\nSe intentaron %d circuitos antes de obtener", intentos_fallidos);
	 printf(" el requerido.\n");

	 Imprime( Arreglo);

   clock_t end = clock();
   double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
   printf("time: %lf\n",time_spent);

	 }    // Cierra main
