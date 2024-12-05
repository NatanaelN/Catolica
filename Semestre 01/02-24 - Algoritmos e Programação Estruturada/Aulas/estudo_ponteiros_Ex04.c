#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

void juntar(char st1[], char st2[]){ //Strings são PONTEIROS? Apontam diretamente a primeira posição
	printf("Endereço da 1 através do ponteiro: %d.\n", st1);
	printf("Endereço da 2 através do ponteiro: %d.\n", st2);
	printf("Contéudo da 1 através do ponteiro: %s.\n", st1);
	printf("Contéudo da 2 através do ponteiro: %s.\n", st2);
	strcat(st1, st2);
	printf("Concatenação através do falso ponteiro: %s.", st1);
}

void main(void){
	setlocale(LC_ALL, "");

	//Escreva um programa para concatenar duas strings usando somente ponteiros.

	
	char string_1[] = "Bem-vindo ";
	printf("Endereço da 1: %d.\t", &string_1);
	printf("Conteúdo da 1: %s.\n", string_1);
	char string_2[] = "Natanael";
	printf("Endereço da 2: %d.\t", &string_2);
	printf("Conteúdo da 2: %s.\n", string_2);

	juntar(&string_1, &string_2); // chamada de função passando endereço 

}
