/* Algoritmos e Programa��o Estruturada
1� Semestre. Aluno =  Natanael Ferreira Neves
Lista de Exerc�cios 03*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	/*Fa�a um programa que leia um valor inteiro e crie um tri�ngulo de * ao contr�rio. Por exemplo:
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
