//Engenharia de Software - UCB
//Prof: Jefferson Salom�o
//Lista de Exerc�cios 07
// Created by natan on 12/10/2024.
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(void) {
    setlocale(LC_ALL, "");
    /*Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real, e char.
     *Associe as vari�veis aos ponteiros (use &).
     *Modifique os valores de cada vari�vel usando os ponteiros.
     *Imprima os valores das vari�veis antes e ap�s a modifica��o.
    */
    printf("Original\tAlterado\n");
    int numero = 1000, * ptrnumero;
    ptrnumero = &numero;
    printf("%8.d\t", numero);
    *ptrnumero = 1010;
    printf("%d\n", numero);

    float real = 4.5, * ptrreal;
    ptrreal = &real;
    printf("%8.2f\t", real);
    *ptrreal = 5.5;
    printf("%.2f\n", real);

    char phrase = 'C', * ptrphrase;
    ptrphrase = &phrase;
    printf("%8.c\t", phrase);
    *ptrphrase = 'J';
    printf("%c\n", phrase);




}
