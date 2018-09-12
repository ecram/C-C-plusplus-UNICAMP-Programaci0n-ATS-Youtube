#include <stdio.h>

int main()
{
	enum ecurso { curso_c, curso_mpi, curso_openmp};
	struct tregistro
	{
		char  nome_curso[20];
		int data_inicio[3];
		int data_fim[3];
		enum ecurso curso;
	} registro =
	{
		.nome_curso = "Introducao ao C",
		.data_inicio={14,4,2013},
		.data_fim={19,4,2013},
		.curso=curso_c
	}; 

	printf("Nome do curso = %s\n",registro.nome_curso);
	printf("Data de inicio %d/%d/%d\n", registro.data_inicio[0], registro.data_inicio[1], registro.data_inicio[2]);
	printf("Data final %d/%d/%d\n", registro.data_fim[0], registro.data_fim[1], registro.data_fim[2]);
	printf("Curso %u\n", registro.curso);

	return 0;
}
