/* Algoritmos e Programa��o Estruturada
1� Semestre. Aluno =  Natanael Ferreira Neves
Lista de Exerc�cios 05*/

#include <stdio.h>
#include<locale.h>

void main(){
	setlocale(LC_ALL, "");
	/*Fa�a um algoritmo para ler 20 n�meros e armazenar em um vetor.
	Ap�s a leitura total, o algoritmo deve escrever esses 20 n�meros lidos na ordem inversa.*/
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

