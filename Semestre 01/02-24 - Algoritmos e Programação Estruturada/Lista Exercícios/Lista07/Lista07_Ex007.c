//Engenharia de Software - UCB
//Prof: Jefferson Salomão
//Lista de Exercícios 07
// Created by natan on 12/10/2024.
#include <stdio.h>
#include <locale.h>
#include <math.h>

void frac(float num, int *pedaco, float *casquinha) {
    *pedaco = (int)num;
    *casquinha = num - *pedaco;
}

void main() {
    setlocale(LC_ALL, "");
    /*Escreva uma função que dado um número real passado como parâ†ametro,
	retorne a parte inteira e a parte fracionária deste número.
	Escreva um programa que chama esta função.
	Protótipo:	void frac(float num, int* inteiro, float* frac);*/
    float num_t;
    int fracp;
    float fracc;

    printf("Digite um número: ");
    scanf("%f", &num_t);
    
    frac(num_t, &fracp, &fracc);

    printf("Número antes alteração:\t%.2f\n", num_t);
    printf("Pedaço: \t%d\n", fracp);
    printf("Casquinha: \t%.2f\n", (float) fracc);
    printf("Número após alteração:\t%.2f", num_t);
}
