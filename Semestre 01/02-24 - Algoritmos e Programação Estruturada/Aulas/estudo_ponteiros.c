/*Escreva um programa que leia 10 inteiros da entrada padr�o, armazene-os em um vetor e os escreva
na sa�da padr�o na ordem contr�ria a de leitura; todos os acessos ao vetor devem ser feitos usando
somente ponteiros, sem usar �ndices de vetor (vet[i], etc).

Mude o programa anterior para ordenar o vetor usando o algoritmo da bolha.

Escreva um programa para calcular o tamanho de uma string usando somente ponteiros.

Escreva um programa para concatenar duas strings usando somente ponteiros.
*/

#include <stdio.h>
#include <stdlib.h>

//Passagem por valor
/*void troca(int x, int y){
	int temp;
	temp = x;
	x = y;
	y = temp;
	printf("Valor de X depois da troca: %d.\n", x);
	printf("Valor de Y depois da troca: %d.\n", y);
	printf("\n");
}*/

//Passagem por refer�ncia
void troca(int *x, int *y){
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
	printf("Valor de X depois da troca: %d \n", *x);
	printf("Valor de Y depois da troca: %d \n", *y);
	printf("\n");
}

void main(void){
	int a, b;
	printf("X: ");
	scanf("%d", &a);
	printf("Y: ");
	scanf("%d", &b);
	printf("Valor de X: %d.\n", a);
	printf("Valor de Y: %d.\n", b);
	//para valor: troca(a, b);
	troca(&a, &b); //passa-se o ENDERE�O como argumento, n�o a vari�vel
	printf("Valor de X apos a troca: %d.\n", a);
	printf("Valor de Y apos a troca: %d.\n", b);
}
