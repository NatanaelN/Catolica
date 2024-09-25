/* Algoritmos e Programa��o Estruturada
1� Semestre. Aluno =  Natanael Ferreira Neves
Lista de Exerc�cios 06*/
#include <stdio.h>
#include <string.h>

//
// Created by natan on 24/09/2024.
//

void main() {
    /*3. Faça um programa que receba uma string e a imprima de trás-para-frente.*/
    char frase[200];
    //printf("%d\n", strlen(frase));
    printf("Digite uma frase:");
    fgets(frase, 100, stdin);
    int len = strlen(frase);
    
    printf("%s\n", frase);
    //printf("%d\n", len);
    int i;
    for (i = len; i > -1; i--){
    	printf("%c", frase[i]);
	}

}
