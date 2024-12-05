#include <stdlib.h>
#include <stdio.h>

void main(void){
	long int num;
	FILE *ptrArq;
	char arquivo_jef = "C:\\Users\\natan\\OneDrive\\Documentos\\Universidade Católica de Brasília - UCB\\Catolica\\Semestre 01\\02-24 - Algoritmos e Programação Estruturada\\numeros.dat";
	ptrArq = fopen("numeros.dat", "rb");
	if (ptrArq == NULL){
		printf("Arquivo com erro\n");
		system("Pause");
	} else
	printf("Abrindo o arquivo");
	
	fread(num, sizeof(num), 1, ptrArq);
	printf("Verificação dos números");
	int i;
	for (i = 0; i < 15000; i++){
		printf("%ld", num);
		
	}
	
	
	fclose(ptrArq);
}
