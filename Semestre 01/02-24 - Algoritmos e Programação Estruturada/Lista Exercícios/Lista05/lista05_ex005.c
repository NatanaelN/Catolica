/* Algoritmos e Programação Estruturada
1º Semestre. Aluno =  Natanael Ferreira Neves
Lista de Exercícios 05*/

#include <stdio.h>
#include<locale.h>

void main(){
	setlocale(LC_ALL, "");
	/*Faça um algoritmo para ler 20 números e armazenar em um vetor.
	Após a leitura total, o algoritmo deve escrever esses 20 números lidos na ordem inversa.*/
	int verso[20];
	int i, num;
	
	for(i = 0; i < 20; i++){
		printf("Numero %2d ", i +1);
		scanf("%d", &num);
		verso[i] = num;
	}
	for(i = 19; i >= 0; i--){
		if (i == 0){
			printf("%d.", verso[i]);
		} else{
			printf("%d -> ", verso[i]);
		}
		
}
}

