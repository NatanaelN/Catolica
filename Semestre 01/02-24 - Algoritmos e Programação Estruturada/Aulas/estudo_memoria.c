//Crie um programa que troque os valores de duas variáveis usando ponteiros.
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(void){
	int *p, *p1;
	p = (int*) malloc(5 * sizeof(int));
	p1 = (int*) calloc(5, sizeof(int));
	
	int *mp = malloc(5 * (sizeof(int)));
	int *cp = calloc(5, sizeof(int));
	if (mp == NULL || cp == NULL){
		printf("Erro de memória");
		exit(1);
	}
	int i;
	for(i = 0; i < 5; i++){
		printf("| %d |\tMalloc : %d |\tCalloc : %d\n",i, mp[i], cp[i]);
		printf("| %d |\tMallocP: %d |\tCallocP: %d\n",i, p[i], p1[i]);
		
	}
}
