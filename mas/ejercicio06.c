/*
 * nombre: ejercicio06.c
 * descripción: Visualizar la tarifa de la Luz según el gasto de corriente eléctrica.
 * Para un gasto menor de 1.000kW la tarifa es 1
 * Entre 1000 y 1850 la tarifa es 1.2
 * Y mayor a 1850 la tarifa es 1.4
 * fecha: 26/03/2018
 */

#include <stdio.h>
#define BANDERA1 1
#define BANDERA2 1.2
#define BANDERA3 1.3

int main()
{
	float gasto = 0, tasa = 0;

	printf("Digite el total de gastos de energia: ");
	scanf("%f",&gasto);

	if(gasto <= 1000)
		tasa = BANDERA1 * gasto;
	else if(gasto > 1000 && gasto <= 1850)
		tasa = BANDERA2 * gasto;
	else if(gasto > 1850)
		tasa = BANDERA3 * gasto;
	else
		printf("Dato no compreendido.");

	printf("El gasto de energia %.2f es %.2f\n",gasto, tasa);

	return 0;
}
