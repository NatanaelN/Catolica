#include <stdio.h>
#include <stdlib.h>

typedef struct Aluno {
	char nome[100];
	int faltas;
	float nota;
} aluno_t;

int main()
{
	aluno_t *aluno;
	aluno = malloc(sizeof(aluno_t));
	if (aluno == NULL) {
		printf("MemC3ria nC#o alocada");
	}
	printf("Entre com o nome do aluno: ");
	fgets(aluno->nome, 100, stdin);
	printf("Quantas faltas? ");
	scanf("%d", &aluno->faltas);
	fflush(stdin);
	printf("Qual a nota: ");
	scanf("%f", &aluno->nota);
	
	enum Situacao {APROVADO, REPROVADO};

	enum Situacao situation = (aluno->nota >= 7.0) ? APROVADO : REPROVADO;
	printf("\nAluno:\t%sPossui: %d faltas.\nSituaC'C#o:\t%s.",
	       aluno->nome, aluno->faltas, situation == APROVADO ? "aprovado": "reprovado");


	return 0;
}