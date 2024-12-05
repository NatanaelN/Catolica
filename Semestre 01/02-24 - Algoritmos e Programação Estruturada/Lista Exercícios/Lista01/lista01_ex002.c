/* Algoritmos e Programação Estruturada
1º Semestre. Aluno =  Natanael Ferreira Neves
Lista de Exercícios 01*/
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	//Escreva um algoritmo para ler as dimensões de um retângulo (base e altura), calcular e escrever a área do retângulo.
	
	int base, altura, area;
	
	printf("Bom dia!\nMensuração de Retãngulos!\nPrimeiro me informe o valor da Base: ");
	scanf("%d", &base);
	
	printf("Agora me informe a Altura do retângulo: ");
	scanf("%d", &altura);
	
	area = base * altura;
	printf("\n\nPara o retângulo de base: %d e altura: %d.Temos por Área: %d", base, altura, area);
	
	return 0;
}
