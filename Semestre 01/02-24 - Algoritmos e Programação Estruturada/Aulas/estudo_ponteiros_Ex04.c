#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

void juntar(char st1[], char st2[]){ //Strings s�o PONTEIROS? Apontam diretamente a primeira posi��o
	printf("Endere�o da 1 atrav�s do ponteiro: %d.\n", st1);
	printf("Endere�o da 2 atrav�s do ponteiro: %d.\n", st2);
	printf("Cont�udo da 1 atrav�s do ponteiro: %s.\n", st1);
	printf("Cont�udo da 2 atrav�s do ponteiro: %s.\n", st2);
	strcat(st1, st2);
	printf("Concatena��o atrav�s do falso ponteiro: %s.", st1);
}

void main(void){
	setlocale(LC_ALL, "");

	//Escreva um programa para concatenar duas strings usando somente ponteiros.

	
	char string_1[] = "Bem-vindo ";
	printf("Endere�o da 1: %d.\t", &string_1);
	printf("Conte�do da 1: %s.\n", string_1);
	char string_2[] = "Natanael";
	printf("Endere�o da 2: %d.\t", &string_2);
	printf("Conte�do da 2: %s.\n", string_2);

	juntar(&string_1, &string_2); // chamada de fun��o passando endere�o 

}
