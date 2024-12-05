#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	char nome[100];
	int idade;
	int leito;
} paciente_t;

void main(void){
	paciente_t *paciente;
	paciente = (paciente_t *) malloc(sizeof(paciente_t));
	if (paciente == NULL){
		printf("Erro na alocação");
		return 1;
	}
	
	printf("Digite o nome do paciente: ");
	fgets(paciente->nome, sizeof(paciente->nome), stdin);
	paciente->nome[strlen(paciente->nome) -1] = '\0';
	
	printf("Digite a idade do paciente: ");
	scanf("%d", &paciente->idade);
	fflush(stdin);
	
	printf("Digite o leito do paciente: ");
	scanf("%d", &paciente->leito);
	fflush(stdin);
	
	
}
