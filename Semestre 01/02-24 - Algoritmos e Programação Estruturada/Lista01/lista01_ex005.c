/* Algoritmos e Programação Estruturada
1º Semestre. Aluno =  Natanael Ferreira Neves
Lista de Exercícios 01*/

#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "");
	//Escreva um algoritmo para ler o salário mensal atual de um funcionário e o percentual de reajuste.
	//Calcular e escrever o valor do novo salário.
	char nome[100];
	float salario, reajuste;
	
	printf("Reajuste Salarial!\n");
	printf("Qual o nome do felizardo? ");
	scanf("%s", nome);
	
	printf("Qual o salário atual do %s?", nome);
	scanf("%f", &salario);
	
	printf("E qual o percentual de reajuste? ");
	scanf("%f", &reajuste);
	
	float reajuste_monetario = (float) salario * reajuste / 100.;
	float novo_saldo = salario + reajuste_monetario;
	
	printf("\nParabéns %s!\nSeu salário sofreu reajuste de R$ %.2f.\nAgora recebera o valor de R$ %.2f.", nome, reajuste_monetario, novo_saldo);
	
	return 0;
}
