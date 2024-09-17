/* Algoritmos e Programação Estruturada
1º Semestre. Aluno =  Natanael Ferreira Neves
Lista de Exercícios 02*/

#include <stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "");
	// As maçãs custam R$1,30 cada se forem compradas menos de uma d´uzia, e R$1, 00 se forem compradas pelo
	//menos 12. Escreva um programa que leia o n´umero de ma¸c˜as compradas, calcule e escreva o custo total da compra.
	int qtd;
	float valor;
	
	printf("Mini-Horta do Tanael\n\n");
	printf("|Quantidade mínima\t|Preço Unitário|\t\t\t\n");
	printf("|Até 11 unidades\t|R$ 1,30|\t\n");
	printf("|Acima de 12 unidades\t|R$ 1,00|\t\n\n");
	
	printf("Deseja quantas maçãs? ");
	scanf("%d", &qtd);
	
	if (qtd >= 12){
		valor = 1 * qtd;
		printf("Preço promocional!\n");
	} else {
		valor = 1.30 * qtd;
	}
	printf("%d maças saem por R$ %.2f", qtd, valor);
	
	return 0;
}
