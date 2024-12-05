#include <stdio.h>
#include <stdlib.h>
#define TAM 100

typedef struct{
	char nome[TAM];
	char modalidade[100];
	float nota;
} atleta_t;

void main(void){
	atleta_t *atleta;
	atleta = malloc(sizeof(atleta_t));
	if (atleta == NULL){
		printf("Memória não alocada\n");
		exit(1);
	}
	printf("Entre com o nome do atleta: ");
	fgets(atleta->nome, sizeof(TAM), stdin);
	fflush(stdin);
	
    printf("Qual a modalidade: ");
    fgets(atleta->modalidade, sizeof(100), stdin);
    fflush(stdin);
    
	printf("Digite a nota: ");
    scanf("%f", &atleta->nota);
    fflush(stdin);
    
    
    printf("\nAtleta:\t%sModalidade:\t%sNota:\t%.2f.\n", atleta->nome, atleta->modalidade, atleta->nota);
    free(atleta);
    
}
