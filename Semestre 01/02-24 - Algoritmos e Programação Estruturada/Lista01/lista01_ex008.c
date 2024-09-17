/* Algoritmos e Programação Estruturada
1º Semestre. Aluno =  Natanael Ferreira Neves
Lista de Exercícios 01*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	//Escreva um algoritmo para ler uma temperatura em graus Fahrenheit, calcular e escrever o valor correspondente em graus Celsius (baseado na fórmula abaixo):
	//c/5 = (f -32)/ 9 ex: 100C = 212F
	int graus_fahrenheit, graus_celsius;
	
	printf("Bom dia!\nEstá fazendo quantos graus? (F) ");
	scanf("%d", &graus_fahrenheit);
	
	graus_celsius = ((graus_fahrenheit - 32 ) / 9) * 5;
	
	printf("%dºF equivalem a %dºC.", graus_fahrenheit, graus_celsius);
	
	return 0;
}
