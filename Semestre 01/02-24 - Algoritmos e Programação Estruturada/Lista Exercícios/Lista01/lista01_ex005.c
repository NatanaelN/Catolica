/* Algoritmos e Programa��o Estruturada
1� Semestre. Aluno =  Natanael Ferreira Neves
Lista de Exerc�cios 01*/

#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "");
	//Escreva um algoritmo para ler o sal�rio mensal atual de um funcion�rio e o percentual de reajuste.
	//Calcular e escrever o valor do novo sal�rio.
	char nome[100];
	float salario, reajuste;
	
	printf("Reajuste Salarial!\n");
	printf("Qual o nome do felizardo? ");
	scanf("%s", nome);
	
	printf("Qual o sal�rio atual do %s?", nome);
	scanf("%f", &salario);
	
	printf("E qual o percentual de reajuste? ");
	scanf("%f", &reajuste);
	
	float reajuste_monetario = (float) salario * reajuste / 100.;
	float novo_saldo = salario + reajuste_monetario;
	
	printf("\nParab�ns %s!\nSeu sal�rio sofreu reajuste de R$ %.2f.\nAgora recebera o valor de R$ %.2f.", nome, reajuste_monetario, novo_saldo);
	
	return 0;
}
