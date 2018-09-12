#include <stdio.h>

int main()
{
	typedef char tnome_curso[20];
	typedef int tdata[3];
	typedef enum { curso_c, curso_mpi, curso_openmp} tcurso; 

	typedef struct 
	{
		tnome_curso nome_curso;
		tdata data_inicio;
		tdata data_fim;
		tcurso curso;
	} tregistro;

	tregistro registro = 
	{
		.nome_curso = "Introducao ao C",
		.data_inicio = {15,4,2013},
		.data_fim = {19,4,2013},
		.curso = curso_c
	};

	printf("Nome do curso = %s\n",registro.nome_curso);
	printf("Data de inicio %d/%d/%d\n", registro.data_inicio[0], registro.data_inicio[1], registro.data_inicio[2]);
	printf("Data final %d/%d/%d\n", registro.data_fim[0], registro.data_fim[1], registro.data_fim[2]);
	printf("Curso %u\n", registro.curso);

	return 0;
}
