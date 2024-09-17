/* Algoritmos e Programação Estruturada
1º Semestre. Aluno =  Natanael Ferreira Neves
Lista de Exercícios 02*/

#include <stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "");
	//Ler um valor e escrever se ´e positivo ou negativo (considere o valor zero como positivo).
	int valor;
	
	printf("Informe um valor: ");
	scanf("%d", &valor);
	
	if (valor >= 0){
		printf("O número: %d é POSITIVO.", valor);
	} else {
		printf("O número: %d é NEGATIVO.", valor);
	}
	
	return 0;
}
