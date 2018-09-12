/*
 * nombre: ejercicio33.c
 * descripción: Método de ordenamiento po burbuja, por inserción, por selección.
 * fecha: 27/03/2018
 */

#include <stdio.h>
#include <stdlib.h>

void imprimir(int *v,int elementos)
{
	printf("vector =[ ");
	for(int i=0;i<elementos;i++)
		printf("%i ",v[i]);
	printf("]\n");
}

void burbuja(int *v,int elementos)
{
	int aux = 0;
	for(int i=0;i<elementos-1;i++)
	{
		for(int j=i+1;j<elementos;j++)
		{
			if(v[i]>v[j])
			{
				aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}
		}
	}
	printf("Ordenamiento por Método Burbuja\n");
	imprimir(v,elementos);
}

void insercion(int *v, int elementos)
{
	int aux = 0, flag = 0;
	for(int i=1;i<elementos;i++)
	{
		flag = i;
		for(int j=i-1;j>=0;j--)
		{
			if(v[j]>v[flag])
			{
				aux = v[flag];
				v[flag] = v[j];
				v[j] = aux;
				flag=j;
			}
		}
	}
	printf("Ordenamiento por Inserción\n");
	imprimir(v,elementos);
}

void seleccion(int *v,int elementos)
{
	int menor = 0, aux = 0;
	for(int i=0;i<elementos-1;i++)
	{
		menor = i;
		for(int j=i+1;j<elementos;j++)
		{
			if(v[j]<v[menor])
			{
				menor = j;
			}
		}
		aux = v[i];
		v[i] = v[menor];
		v[menor] = aux;
	}
	printf("Ordenamiento por Selección\n");
	imprimir(v,elementos);
}

void busqueda_lineal(int *v,int elementos)
{
	int dato = 0, pos = 0, c = 0;
	
	printf("Digite el elemento buscado en el array: ");
	scanf("%i",&dato);

	while(pos<elementos)
	{
		if(v[pos]==dato)
		{
			printf("Elemento %i se encuentra en la posición: v[%i]\n",dato,pos);
			c++;
			pos++;
		}
		else
			pos++;
	}

	if(c==0)
		printf("Elemento no encontrado.");
	else
		printf("Elemento(s) v[%i] encontrados: %i\n",dato,c);
}

void secuencial(int *v,int elementos)
{
	int mayor = 0,menor = 0, c = 0;
	int *v2 = NULL;

	v2 = malloc(sizeof(int)*elementos);
	
	for(int i=1;i<elementos;i++)
	{
		if(v[mayor]<v[i])
			mayor=i;
		if(v[menor]>v[i])
			menor=i;
	}
	printf("Mayor v[%i] = %i\n",mayor,v[mayor]);
	printf("Menor v[%i] = %i\n",menor,v[menor]);

	for(int i=v[menor];i<=v[mayor];i++)
	{
		for(int j=0;j<elementos;j++)
		{
			if(v[j]==i)
			{
				v2[c] = i;
				c++;
			}
		}
	}
	printf("Ordenación Secuencial\n");
	imprimir(v2,elementos);
	
	//free(v2);
}

void busqueda_binaria(int *v,int elementos)
{
	
	insercion(v,elementos); //ordenar los elementos

	int inf = 0,sup = elementos,mitad = 0,dato = 0;
	char flag = 'F';

	printf("Digite el elemento buscado en el array: ");
	scanf("%i",&dato);

	while(inf<=sup)
	{
		mitad = (inf+sup)/2;

		if(v[mitad]==dato)
		{
			printf("El elemento %i se encuentra en la posición v[%i]/n",dato,mitad);
			flag = 'V';
			break;
		}
		
		if(v[mitad]>dato)
		{
			sup = mitad;
			mitad = (inf+sup)/2;
		}
		if(v[mitad]<dato)
		{
			inf = mitad;
			mitad = (inf+sup)/2;
		}
	}
	if(flag=='F')
		printf("Elemento no encontrado/n");
}

void insercion_binaria(int *v,int n)
{
    int auxiliar,centro,izquierda,derecha,i,k;
    for (k = 1; k < n; k++)
    {
	    auxiliar=v[k];
	    izquierda=0;
	    derecha = k-1;
	    //busqueda binaria de la posicion de insercion
	    while (izquierda <= derecha)
	    {
		    centro = (int) ((izquierda + derecha)/2);
		    if (auxiliar <= v[centro])
			    derecha = centro-1;
		    else
			    izquierda = centro+1;
	    }
	    //se desplazan a la derecha los elementos ordenados
	    for (i = k-1; i>= izquierda; i--)
		    v[i+1] = v[i];
	    v[izquierda] = auxiliar;
    }
    imprimir(v,n);
}

int main()
{
	int elementos = 0;
	int *v = NULL;
	
	printf("Digite la cantidad de elementos: ");
	scanf("%i",&elementos);

	v = malloc(sizeof(int)*elementos);
	
	for(int i=0;i<elementos;i++)
	{
		printf("v[%i] = ",i);
		scanf("%i",&v[i]);
	}

	imprimir(v,elementos);

	/* Método Burbuja 
	burbuja(v,elementos);
	insercion(v,elementos);
	seleccion(v,elementos);
	busqueda_lineal(v,elementos);
	secuencial(v,elementos);
	busqueda_binaria(v,elementos);*/
	insercion_binaria(v,elementos);
	
	//free(v);

	printf("\n");

	return 0;
}
