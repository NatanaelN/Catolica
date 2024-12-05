#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

void calc_s(char corda[]){
	int i = 0, t = 0;
	char * ptr;
	ptr = corda;
	
	while(*ptr != '\0'){
		t++;
		ptr++;
	}
	printf("A String '%s'\nPossui %d caracteres!.", corda, t);
}
void main(void){
	setlocale(LC_ALL, "");
	//Escreva um programa para calcular o tamanho de uma string usando somente ponteiros.
	char frase[] = "Cuscuz é vida.";
	calc_s(&frase);
	printf("%d", strlen(frase));
}
