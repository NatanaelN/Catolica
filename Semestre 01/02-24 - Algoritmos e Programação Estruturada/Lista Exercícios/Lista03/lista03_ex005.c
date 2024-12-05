/* Algoritmos e Programação Estruturada
1º Semestre. Aluno =  Natanael Ferreira Neves
Lista de Exercícios 03*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	/*Escreva um algoritmo para ler as notas da 1a. e 2a. avaliações de um aluno, calcule e imprima a média
	(simples) desse aluno. S´o devem ser aceitos valores válidos durante a leitura (0 a 10) para cada nota.*/
	
	float av1, av2, media;
	
	printf("Insira a nota da primeira avaliação: ");
	scanf("%f", &av1);
	while ( (av1 > 10) || (av1 < 0)){
		printf("Nota incorreta\nInsira uma nota válida : (0-10) ");
		scanf("%f", &av1);		
	}
	
	printf("Insira a nota da segunda avaliação: ");
	scanf("%f", &av2);
	while ( (av2 > 10) || (av2 < 0)){
		printf("Nota incorreta\nInsira uma nota válida : (0-10) ");
		scanf("%f", &av2);		
	}	
	media = (av1 + av2)/ 2;
	printf("\t1ª Avaliação = %.2f\n\t2ª Avaliação = %.2f\n\tMédia Final = %.2f\n", av1, av2, media);
	return 0;
}
