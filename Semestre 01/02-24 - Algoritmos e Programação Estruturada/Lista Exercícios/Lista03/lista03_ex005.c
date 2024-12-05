/* Algoritmos e Programa��o Estruturada
1� Semestre. Aluno =  Natanael Ferreira Neves
Lista de Exerc�cios 03*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	/*Escreva um algoritmo para ler as notas da 1a. e 2a. avalia��es de um aluno, calcule e imprima a m�dia
	(simples) desse aluno. S�o devem ser aceitos valores v�lidos durante a leitura (0 a 10) para cada nota.*/
	
	float av1, av2, media;
	
	printf("Insira a nota da primeira avalia��o: ");
	scanf("%f", &av1);
	while ( (av1 > 10) || (av1 < 0)){
		printf("Nota incorreta\nInsira uma nota v�lida : (0-10) ");
		scanf("%f", &av1);		
	}
	
	printf("Insira a nota da segunda avalia��o: ");
	scanf("%f", &av2);
	while ( (av2 > 10) || (av2 < 0)){
		printf("Nota incorreta\nInsira uma nota v�lida : (0-10) ");
		scanf("%f", &av2);		
	}	
	media = (av1 + av2)/ 2;
	printf("\t1� Avalia��o = %.2f\n\t2� Avalia��o = %.2f\n\tM�dia Final = %.2f\n", av1, av2, media);
	return 0;
}
