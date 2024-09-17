/* Algoritmos e Programação Estruturada
1º Semestre. Aluno =  Natanael Ferreira Neves
Lista de Exercícios 01*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	//Uma revendedora de carros usados paga a seus funcion´arios vendedores um sal´ario fixo por mˆes, mais uma
	//comiss˜ao tamb´em fixa para cada carro vendido e mais 5% do valor das vendas por ele efetuadas. Escrever um
	//algoritmo que leia o n´umero de carros por ele vendidos, o valor total de suas vendas, o sal´ario fixo e o valor
	//que ele recebe por carro vendido. Calcule e escreva o sal´ario final do vendedor.
	
	char vendedor[100];
	int qtd_carros;
	float salario_base, perc_comissao, totaldin_vendas, ticket_medio;
	float comissao_vendas = 0.05;
	
	printf("Cálculo de Folha Salarial!\nDigite o nome do vendedor: ");
	scanf("%s", vendedor);
	
	printf("\nQual valor total das vendas? R$");
	scanf("%f", &totaldin_vendas);
	
	float perc_vendas = comissao_vendas * totaldin_vendas;
	
	printf("\nQuantos carros foram vendidos? ");
	scanf("%d", &qtd_carros);
	
	ticket_medio = totaldin_vendas / qtd_carros;
	
	printf("Qual a comissão por venda? (R$)");
	scanf("%f", &perc_comissao);
	
	float comissao_ind = (float) perc_comissao * qtd_carros;
	printf("Qual o salário base do %s:", vendedor);
	scanf("%f", &salario_base);
	
	float salario_final = (float) salario_base + perc_vendas + comissao_ind;
	
	printf("\nCom um ticket médio de vendas de R$ %.2f.\n", ticket_medio);
	printf("O salário final de %s, é de R$ %.2f.", vendedor, salario_final);
	
	return 0;
}
