//Engenharia de Software - UCB
//Prof: Jefferson Salomão
//Lista de Exercícios 07
// Created by natan on 12/10/2024.
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "");
    /*Escreva um programa que contenha duas variáveis inteiras.
    Compare seus endereços e exiba o maior endereço.*/
    int num1 = 10, num2 = 100;
    int *ptr1 = &num1, *ptr2 = &num2;

    printf("Valor de N1:\t%d | Endereço de N1: \t%p\n", num1, &num1);
    printf("Valor de P1:\t%d | Endereço de P1: \t%p\n", *ptr1, ptr1);

    printf("Valor de N1:\t%d | Endereço de N1: \t%p\n", num2, &num2);
    printf("Valor de P1:\t%d | Endereço de P1: \t%p\n", *ptr2, ptr2);
    int *maior = (ptr1 > ptr2) ? ptr1 : ptr2;
    printf("\nO maior endereço é: %p e corresponde a: %d\n", maior, *maior);
}
