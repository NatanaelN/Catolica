/* Algoritmos e Programação Estruturada
1º Semestre. Aluno =  Natanael Ferreira Neves
Lista de Exercícios 03*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	/*Faça um programa que leia um valor inteiro e crie um triângulo de * ao contrário. Por exemplo:
	Para n = 5:
	*****
	****
	***
	**
	**/
    int i, j, aux, num = 5;
    aux = num;

    for (i = 1; i <= num; i++) {
        for (j = 1; j <= aux; j++) {
            printf("*");
        }
        aux--;  
        printf("\n");
    }


	return 0;
}
