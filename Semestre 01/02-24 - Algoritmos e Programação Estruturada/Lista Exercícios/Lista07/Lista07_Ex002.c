//Engenharia de Software - UCB
//Prof: Jefferson Salom�o
//Lista de Exerc�cios 07
// Created by natan on 12/10/2024.
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "");
    /*Escreva um programa que contenha duas vari�veis inteiras.
    Compare seus endere�os e exiba o maior endere�o.*/
    int num1 = 10, num2 = 100;
    int *ptr1 = &num1, *ptr2 = &num2;

    printf("Valor de N1:\t%d | Endere�o de N1: \t%p\n", num1, &num1);
    printf("Valor de P1:\t%d | Endere�o de P1: \t%p\n", *ptr1, ptr1);

    printf("Valor de N1:\t%d | Endere�o de N1: \t%p\n", num2, &num2);
    printf("Valor de P1:\t%d | Endere�o de P1: \t%p\n", *ptr2, ptr2);
    int *maior = (ptr1 > ptr2) ? ptr1 : ptr2;
    printf("\nO maior endere�o �: %p e corresponde a: %d\n", maior, *maior);
}
