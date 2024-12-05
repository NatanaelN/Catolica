#include <stdio.h>
#include <stdlib.h>

void main(void){
	FILE *arq;
	arq = fopen("numeros.dat", "r");
	size_t fread (void *data, size_t size, size_t count, arq);
	
	if (arq == NULL){
		perror("Erro ao abrir o arquivo");
		exit(1);
	}
	fclose(arq);
	exit(0);
}
