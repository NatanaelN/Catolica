/* Algoritmos e Programa��o Estruturada
1� Semestre. Aluno =  Natanael Ferreira Neves
Lista de Exerc�cios 02*/

#include <stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "");
	//Ler dois valores (considere que n�o ser�o lidos valores iguais) e escrev�-los em ordem crescente.
	
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
