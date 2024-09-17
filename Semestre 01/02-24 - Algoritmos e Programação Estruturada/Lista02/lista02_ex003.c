/* Algoritmos e Programa��o Estruturada
1� Semestre. Aluno =  Natanael Ferreira Neves
Lista de Exerc�cios 02*/

#include <stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "");
	// As ma��s custam R$1,30 cada se forem compradas menos de uma d�uzia, e R$1, 00 se forem compradas pelo
	//menos 12. Escreva um programa que leia o n�umero de ma�c�as compradas, calcule e escreva o custo total da compra.
	int qtd;
	float valor;
	
	printf("Mini-Horta do Tanael\n\n");
	printf("|Quantidade m�nima\t|Pre�o Unit�rio|\t\t\t\n");
	printf("|At� 11 unidades\t|R$ 1,30|\t\n");
	printf("|Acima de 12 unidades\t|R$ 1,00|\t\n\n");
	
	printf("Deseja quantas ma��s? ");
	scanf("%d", &qtd);
	
	if (qtd >= 12){
		valor = 1 * qtd;
		printf("Pre�o promocional!\n");
	} else {
		valor = 1.30 * qtd;
	}
	printf("%d ma�as saem por R$ %.2f", qtd, valor);
	
	return 0;
}
