/* Algoritmos e Programação Estruturada
1º Semestre. Aluno =  Natanael Ferreira Neves
Lista de Exercícios 03*/
#include <stdio.h>
#include <string.h>
//
// Created by natan on 24/09/2024.
//
void main() {
    /*2. Faça um algoritmo que leia uma string e calcule o seu tamanho.
    (a) Calcule utilizando o strlen.
    (b) Calcule sem utilizar o strlen.
    (c) Compare os dois resultados.*/
    char string[1000];
    printf("Entre com uma frase: ");
    fgets(string, 1000, stdin);
    int len = strlen(string);
    int i, cont = 0;
	for (i = 0; i < 1000; i++){
		if (string[i] == '\0'){
			break;
		} else
		cont++;
	}

    printf("Usando o strlen = %d.\n", len);
    printf("Usando o for = %d.\n", cont);
    if (cont == len){
    	printf("Valores Iguais.\n");
	} else
	printf("Valores Divergentes.\n");

}
