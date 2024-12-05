/* Algoritmos e Programação Estruturada
1º Semestre. Aluno =  Natanael Ferreira Neves
Lista de Exercícios 01*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	//Faça um algoritmo que leia três notas de um aluno, calcule e escreva a média final deste aluno. Considerar
	//que a média é ponderada e que o peso das notas é 2, 3 e 5. Fórmula para o cálculo da média final é:
	//mf = (2n1 + 3n2 + 5n3)/10
	float nota_01, nota_02, nota_03;
	int peso_n1 = 2, peso_n2 = 3, peso_n3 = 5;
	
	printf("Declare o valor da 1ª nota: ");
	scanf("%f", &nota_01);
	
	printf("Declare o valor da 2ª nota: ");
	scanf("%f", &nota_02);
	
	printf("Declare o valor da 3ª e última nota: ");
	scanf("%f", &nota_03);
	
	//float testep1 = (nota_01 * peso_n1 + nota_02 * peso_n2 + nota_03 * peso_n3);
	//float testep2 = peso_n1 + peso_n2 + peso_n3;
	//float mp_final = (float) testep1 / testep2;
	float mp_final = (float) (nota_01 * peso_n1 + nota_02 * peso_n2 + nota_03 * peso_n3) / (peso_n1 + peso_n2 + peso_n3);
	
	//printf("\nParte 01: %f\n", testep1);
	//printf("Parte 02: %f\n", testep2);
	
	printf("\nNota 01: %.2f.\nNota 02: %.2f.\nNota 03: %.2f.\nSua média é %.2f.", nota_01, nota_02, nota_03, mp_final);
	return 0;
}
