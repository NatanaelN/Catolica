/* Algoritmos e Programa��o Estruturada
1� Semestre. Aluno =  Natanael Ferreira Neves
Lista de Exerc�cios 05*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

void main(){
	setlocale(LC_ALL, "");
	srand(time(NULL));
	/*algoritmo que permita a leitura das notas de uma turma de 20 alunos.
	Calcular a m�dia da turma e contar quantos alunos obtiveram nota acima desta m�dia calculada.
	Escrever a m�dia da turma e o resultado da contagem.*/
	float aluno[20], media = 0, soma = 0;
	int i, nota_boa;
	for (i = 1; i <= 20; i++){
		float nota_aleatoria = rand() % 10;
		aluno[i] = nota_aleatoria;
		soma += nota_aleatoria;
		printf("Aluno %2d: %.2f\n", i, nota_aleatoria);
	}
	media = soma / 20;
	printf("M�dia = %.2f\n", media);
	for (i = 1; i <= 20; i++){
		if (aluno[i] > media){
			nota_boa++;
		}
	}
	printf("Temos um total de %d alunos com nota acima da m�dia.", nota_boa);
}

