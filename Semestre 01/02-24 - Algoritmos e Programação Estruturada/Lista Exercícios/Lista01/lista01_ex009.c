/* Algoritmos e Programa��o Estruturada
1� Semestre. Aluno =  Natanael Ferreira Neves
Lista de Exerc�cios 01*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	//Fa�a um algoritmo que leia tr�s notas de um aluno, calcule e escreva a m�dia final deste aluno. Considerar
	//que a m�dia � ponderada e que o peso das notas � 2, 3 e 5. F�rmula para o c�lculo da m�dia final �:
	//mf = (2n1 + 3n2 + 5n3)/10
	float nota_01, nota_02, nota_03;
	int peso_n1 = 2, peso_n2 = 3, peso_n3 = 5;
	
	printf("Declare o valor da 1� nota: ");
	scanf("%f", &nota_01);
	
	printf("Declare o valor da 2� nota: ");
	scanf("%f", &nota_02);
	
	printf("Declare o valor da 3� e �ltima nota: ");
	scanf("%f", &nota_03);
	
	//float testep1 = (nota_01 * peso_n1 + nota_02 * peso_n2 + nota_03 * peso_n3);
	//float testep2 = peso_n1 + peso_n2 + peso_n3;
	//float mp_final = (float) testep1 / testep2;
	float mp_final = (float) (nota_01 * peso_n1 + nota_02 * peso_n2 + nota_03 * peso_n3) / (peso_n1 + peso_n2 + peso_n3);
	
	//printf("\nParte 01: %f\n", testep1);
	//printf("Parte 02: %f\n", testep2);
	
	printf("\nNota 01: %.2f.\nNota 02: %.2f.\nNota 03: %.2f.\nSua m�dia � %.2f.", nota_01, nota_02, nota_03, mp_final);
	return 0;
}
