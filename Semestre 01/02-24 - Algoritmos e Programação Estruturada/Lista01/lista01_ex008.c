/* Algoritmos e Programa��o Estruturada
1� Semestre. Aluno =  Natanael Ferreira Neves
Lista de Exerc�cios 01*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	//Escreva um algoritmo para ler uma temperatura em graus Fahrenheit, calcular e escrever o valor correspondente em graus Celsius (baseado na f�rmula abaixo):
	//c/5 = (f -32)/ 9 ex: 100C = 212F
	int graus_fahrenheit, graus_celsius;
	
	printf("Bom dia!\nEst� fazendo quantos graus? (F) ");
	scanf("%d", &graus_fahrenheit);
	
	graus_celsius = ((graus_fahrenheit - 32 ) / 9) * 5;
	
	printf("%d�F equivalem a %d�C.", graus_fahrenheit, graus_celsius);
	
	return 0;
}
