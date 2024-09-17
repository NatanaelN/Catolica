/* Algoritmos e Programação Estruturada
1º Semestre. Aluno =  Natanael Ferreira Neves
Lista de Exercícios 01*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	//O custo de um carro novo ao consumidor ´e a soma do custo de fábrica com a porcentagem do distribuidor
	//e dos impostos (aplicados ao custo de f´abrica). Supondo que o percentual do distribuidor seja de 28% e os
	//impostos de 45%, escrever um algoritmo para ler o custo de f´abrica de um carro, calcular e escrever o custo
	//final ao consumidor.
	
	float carro_fabrica;
	float taxa_imposto = 0.45;
	float perc_distr = 0.28;
	
	printf("Qual o valor do carro na montadora? R$");
	scanf("%f", &carro_fabrica);
	
	float carro_novo = (float) carro_fabrica + carro_fabrica * taxa_imposto +  carro_fabrica * perc_distr;
	
	printf("O preço do carro novo é R$ %.2f.", carro_novo);
	
	return 0;
}
