//Engenharia de Software - UCB
//Prof: Jefferson Salom�o
//Lista de Exerc�cios 07
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
    /*Escreva uma fun��o que dado um n�mero real passado como par�ametro,
	retorne a parte inteira e a parte fracion�ria deste n�mero.
	Escreva um programa que chama esta fun��o.
	Prot�tipo:	void frac(float num, int* inteiro, float* frac);*/
    float num_t;
    int fracp;
    float fracc;

    printf("Digite um n�mero: ");
    scanf("%f", &num_t);
    
    frac(num_t, &fracp, &fracc);

    printf("N�mero antes altera��o:\t%.2f\n", num_t);
    printf("Peda�o: \t%d\n", fracp);
    printf("Casquinha: \t%.2f\n", (float) fracc);
    printf("N�mero ap�s altera��o:\t%.2f", num_t);
}
