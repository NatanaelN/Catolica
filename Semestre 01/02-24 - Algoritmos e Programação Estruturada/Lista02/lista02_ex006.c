/* Algoritmos e Programa��o Estruturada
1� Semestre. Aluno =  Natanael Ferreira Neves
Lista de Exerc�cios 02*/

#include <stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "");
	//Ler dois valores (considere que n�o ser�o lidos valores iguais) e escrever o maior deles.
	
	int v1, v2;
	
	printf("Insira o primeiro valor: ");
	scanf("%d", &v1);
	
	printf("Insira o segundo valor: ");
	scanf("%d", &v2);
	
	if (v1 > v2){
		printf("%d", v1);
	} else{
		printf("%d", v2);
	}
	return 0;
}
