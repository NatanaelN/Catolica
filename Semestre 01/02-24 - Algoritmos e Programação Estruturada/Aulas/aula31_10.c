#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

typedef struct {
	char nome[100];
	int idade;
	int quarto;
} paciente_c;

void exiba(FILE *b, char *nome_arquivo){
	FILE *arq2;
	b = fopen(nome_arquivo, "r");
	
	char alguma_coisa[1000];
	while(alguma_coisa, sizeof(alguma_coisa), arq2){
		printf("%s", alguma_coisa);
	}
	fclose(b);
}
void main(void){
	setlocale(LC_ALL, "");
	
	FILE *arq;
	arq = fopen("bcaa.txt", "w");
	paciente_c Tanael;
	int idade2, sala;
	if (arq == NULL){
		printf("Arquivo não criado...\n");		
	}
	
	printf("Entre com o nome do paciente: ");
	char nome2[100]; 
	fgets(nome2, sizeof(nome2), stdin);
	strcpy(Tanael.nome, nome2);
	fprintf(arq, "Nome: %s\n", Tanael.nome);
	printf("Idade: ");
	scanf("%d", &idade2);
	Tanael.idade = idade2;
	fprintf(arq, "Idade: %d\n", Tanael.idade);
	printf("Quarto: ");
	scanf("%d", &sala);
	Tanael.quarto = sala;
	fprintf(arq, "Quarto: %d", Tanael.quarto);
	
	fclose(arq);
	exiba(arq, "bcaa.txt");
	
}

