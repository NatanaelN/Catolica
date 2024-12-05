/* Algoritmos e Programação Estruturada
1º Semestre. Aluno =  Natanael Ferreira Neves
Lista de Exercícios 05*/

#include <stdio.h>
#include<locale.h>
float determina( float matriz[3][3]){
	float result;
	float a =  matriz[0][0];
	float b =  matriz[0][1];
	float c =  matriz[0][2];
	
	float detemA = (a * ((matriz[1][1] * matriz[2][2]) - (matriz[1][2] * matriz[2][1])));
	float detemB = (b * ((matriz[1][0] * matriz[2][2]) - (matriz[1][2] * matriz[2][0])));
	float detemC = (c * ((matriz[1][0] * matriz[2][1]) - (matriz[1][1] * matriz[2][0])));
	
	result = detemA - detemB + detemC;

	return result;

}
void main(){
	setlocale(LC_ALL, "");
	//Faça um algoritmo que leia uma matriz 3 × 3 e calcule o determinante dela.
	float n[3][3];
	int i, j, v;
	for (i = 0; i < 3; i++){
		for (j = 0; j < 3; j++){
			printf("Digite o valor para N[%d][%d]: ", i, j);
			scanf("%d", &v);
			n[i][j] = v;
		}
	}
	 float ret = determina(n);
	 printf("Determinante = %.2f", ret);
}

