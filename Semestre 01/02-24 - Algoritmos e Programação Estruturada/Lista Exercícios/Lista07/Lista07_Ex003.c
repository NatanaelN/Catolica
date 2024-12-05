//Engenharia de Software - UCB
//Prof: Jefferson Salomão
//Lista de Exercícios 07
// Created by natan on 12/10/2024.
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void chama(int *x, int *y){
	int otr;
	printf("Valor de A original:\t%d \n", *x);
	printf("Valor de B original:\t%d \n", *y);
	otr = *x;
	*x = *y;
	*y = otr;
	printf("Valor de A após alterar: %d \n", *x);
	printf("Valor de B após alterar: %d \n", *y);	
	
}
void main() {
    setlocale(LC_ALL, "");
    /*Faça um programa que leia 2 valores inteiros e chame uma função que receba estas 2 variáveis e troque o seu conteúdo,
	ou seja, esta função é chamada passando duas variáveis A e B por exemplo e, após a execução da função,
	A conterá o valor de B e B terá o valor de A. Exiba os valores na função main.*/
	
	int a, b;
	printf("Entre com o valor de A: ");
	scanf("%d", &a);
	printf("Entre com o valor de B: ");
	scanf("%d", &b);
	
	printf("\nA = %d\tB = %d\n", a, b);
	chama(&a, &b);
	printf("\nA = %d\tB = %d\n", a, b);


}
