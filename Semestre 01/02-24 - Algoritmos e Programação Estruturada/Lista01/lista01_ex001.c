/* Algoritmos e Programa��o Estruturada
1� Semestre. Aluno =  Natanael Ferreira Neves
Lista de Exerc�cios 01*/

#include <stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "");
	//Escreva um algoritmo para ler um valor (do teclado) e escrever (na tela) o seu antecessor.
	
	int enter_num;
	
	printf("Digite um n�mero aleat�rio:");
	scanf("%d", &enter_num);
	
	printf("O antecessor do seu n�mero �: %d\nE seu sucessor corresponde a: %d", enter_num - 1, enter_num + 1);
	
	return 0;
}

