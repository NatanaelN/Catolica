/* Algoritmos e Programação Estruturada
1º Semestre. Aluno =  Natanael Ferreira Neves
Lista de Exercícios 02*/

#include <stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "");
	//Ler dois valores (considere que não serão lidos valores iguais) e escrevê-los em ordem crescente.
	
	int v1, v2;
	
	printf("Insira o primeiro valor: ");
	scanf("%d", &v1);
	
	printf("Insira o segundo valor: ");
	scanf("%d", &v2);
	
	if (v1 > v2){
		printf("(%d, %d).", v1, v2);
	} else{
		printf("(%d, %d).", v2, v1);
	}
	
	return 0;
}
