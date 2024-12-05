#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Alunos{
	char nome[100];
	int faltas;
	float nota;
	struct Alunos *prox;
	
} aluno_t;

void main(void){
	aluno_t *aluno;
	aluno = (aluno_t *) malloc(sizeof(aluno_t));
	if (aluno == NULL){
		printf("Erro na alocação");
		
	}
	
	strcpy(aluno->nome, "Fulano de Tal");
	aluno->faltas = 15;
	aluno->nota = 5.5;
	
	aluno = (aluno_t *) realloc(aluno, 0);
	
	printf("Aluno %s, foram %d falta e a NF de %.2f", aluno->nome, aluno->faltas, aluno->nota);
	
	

}
