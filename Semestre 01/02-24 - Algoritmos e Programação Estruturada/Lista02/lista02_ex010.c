/* Algoritmos e Programação Estruturada
1º Semestre. Aluno =  Natanael Ferreira Neves
Lista de Exercícios 02*/

#include <stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "");
	/*Crie um algoritmo para, tendo como dados de entrada o nome, a altura e o sexo (M ou F) de uma pessoa,
	calcule e mostre seu peso ideal, utilizando as seguintes f´ormulas:
			• para sexo masculino: peso ideal = (72, 7 × altura) - 58
			• para sexo feminino: peso ideal = (62, 1 × altura) - 44, 7*/
	
	char nome[10];
	char sexo;
	int altura_cm; 

	
	float peso;
	
	printf("Cálculo Peso Irreal\n");
	printf("Qual o nome:");
	scanf("%s", &nome);
	
	printf("Qual o sexo:");
	scanf("%s", &sexo);
	
	printf("E a altura da benção? (em cm):");
	scanf("%d", &altura_cm);
	
	float altura = altura_cm / 100.;
	
	switch (sexo) {
		case 'm':
			peso = 72.7 * altura - 58;
			printf("|Nome: %c\t|Sexo: %c\t|Altura (cm): %.2f\t|Peso Ideal: %.2fKg\n\t", nome, sexo, altura, peso);
			break;
		case 'f':
			peso = 62.1 * altura - 44.7;
			printf("|Nome: %s\t|Sexo: %c\t|Altura (cm): %.2f\t|Peso Ideal: %.2fKg\n\t", nome, sexo, altura, peso);
			break;
		default:
			printf("Binário nem é gente!");
			break;
	}
	
	



	return 0;
}
