/*
 * nome: lab02t.c
 * descrição: imprima la ficha de un curso usando typedef
 * data 20/03/2018
 */
#include <stdio.h>
void main()
{
	typedef char char_curso[14];
	typedef int data[3];
	typedef enum curso {curso_c,curso_mpi,curso_openmp} oscursos;

	struct tregistro
	{
		//char_curso cur; // arrays multidimensionais devem ficar no fim do struct, apenas é permitido uma por struct
		data inicio;
		data fim;
		oscursos os;
		char_curso cur;
	} registros = { .cur = "Curso de C", .inicio={19,3,2018}, .fim={23,3,2018}, .os = curso_mpi };

	printf("Nome do curso = %s\n", registros.cur);
	printf("Data de inicio %i/%i/%i \n",registros.inicio[0],registros.inicio[1],registros.inicio[2]);
	printf("Data de fim %i/%i/%i \n",registros.fim[0],registros.fim[1],registros.fim[2]);
	printf("Curso %u \n",registros.os);
}
