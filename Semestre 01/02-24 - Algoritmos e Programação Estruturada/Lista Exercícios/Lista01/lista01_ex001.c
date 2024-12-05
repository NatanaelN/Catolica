/* Algoritmos e Programação Estruturada
1º Semestre. Aluno =  Natanael Ferreira Neves
Lista de Exercícios 01*/

#include <stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "");
	//Escreva um algoritmo para ler um valor (do teclado) e escrever (na tela) o seu antecessor.
	
	int enter_num;
	
	printf("Digite um número aleatório:");
	scanf("%d", &enter_num);
	
	printf("O antecessor do seu número é: %d\nE seu sucessor corresponde a: %d", enter_num - 1, enter_num + 1);
	
	return 0;
}

