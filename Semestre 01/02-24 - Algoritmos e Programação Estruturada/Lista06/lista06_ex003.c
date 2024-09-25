/* Algoritmos e Programação Estruturada
1º Semestre. Aluno =  Natanael Ferreira Neves
Lista de Exercícios 06*/
#include <stdio.h>
#include <strings.h>

//
// Created by natan on 24/09/2024.
//

void main() {
    /*3. FaÂ¸ca um programa que receba uma string e a imprima de trÂ´as-para-frente.*/
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
