//Engenharia de Software - UCB
//Prof: Jefferson Salom�o
//Lista de Exerc�cios 07
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
	printf("Valor de A ap�s alterar: %d \n", *x);
	printf("Valor de B ap�s alterar: %d \n", *y);	
	
}
void main() {
    setlocale(LC_ALL, "");
    /*Fa�a um programa que leia 2 valores inteiros e chame uma fun��o que receba estas 2 vari�veis e troque o seu conte�do,
	ou seja, esta fun��o � chamada passando duas vari�veis A e B por exemplo e, ap�s a execu��o da fun��o,
	A conter� o valor de B e B ter� o valor de A. Exiba os valores na fun��o main.*/
	
	int a, b;
	printf("Entre com o valor de A: ");
	scanf("%d", &a);
	printf("Entre com o valor de B: ");
	scanf("%d", &b);
	
	printf("\nA = %d\tB = %d\n", a, b);
	chama(&a, &b);
	printf("\nA = %d\tB = %d\n", a, b);


}
