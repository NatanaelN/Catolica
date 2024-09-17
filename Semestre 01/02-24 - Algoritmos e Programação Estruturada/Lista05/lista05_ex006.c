/* Algoritmos e Programação Estruturada
1º Semestre. Aluno =  Natanael Ferreira Neves
Lista de Exercícios 05*/

#include <stdio.h>
#include<locale.h>

void main(){
	setlocale(LC_ALL, "");
	/*Faça um algoritmo para ler um valor N qualquer (que será o tamanho dos vetores).
	Após, ler dois vetores A e B (de tamanho N cada um) e depois armazenar em um terceiro vetor Soma
	a soma dos elementos do vetor A com os do vetor B (respeitando as mesmas posições) e escrever o vetor Soma.*/
	int i, j, num, tam;
	printf("Qual o tamanho dos vetores: ");
	scanf("%d", &tam);
	
	int a[tam]; 
	int b[tam];
	int soma[tam];
	
	for (i = 0; i < 2; i++){
		for (j = 0; j < tam; j++){
			printf("Insira o %d valor do Vetor %d: ", j+1, i);
			scanf("%d", &num);
			if (i == 0){
				a[j] = num;
			} else if ( i == 1){
				b[j] = num;
			}
		}
	}
	for (i = 0; i < tam; i++){
		soma[i] = a[i] + b[i];
	}
	printf("| V A \t| V B \t| Soma |\n");
	for (i = 0; i < tam; i++){
		soma[i] = a[i] + b[i];
		printf("| %3d \t| %3d \t| %3d |\n", a[i], b[i], soma[i]);
	}

}

