/* Algoritmos e Programa��o Estruturada
1� Semestre. Aluno =  Natanael Ferreira Neves
Lista de Exerc�cios 02*/

#include <stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "");
	//Ler um valor e escrever se �e positivo ou negativo (considere o valor zero como positivo).
	int valor;
	
	printf("Informe um valor: ");
	scanf("%d", &valor);
	
	if (valor >= 0){
		printf("O n�mero: %d � POSITIVO.", valor);
	} else {
		printf("O n�mero: %d � NEGATIVO.", valor);
	}
	
	return 0;
}
