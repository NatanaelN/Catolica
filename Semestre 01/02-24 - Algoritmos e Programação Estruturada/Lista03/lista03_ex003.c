/* Algoritmos e Programa��o Estruturada
1� Semestre. Aluno =  Natanael Ferreira Neves
Lista de Exerc�cios 03*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	/*Acrescentar uma mensagem de �VALOR INV�ALIDO� no exerc��cio 1 caso o segundo valor informado seja ZERO.*/
	
	int v1, v2;
	float divisao;
	
	printf("Entre com o primeiro valor: ");
	scanf("%d", &v1);
	
	printf("Entre com o segundo valor: ");
	scanf("%d", &v2);
	
	if (v2 == 0){
		//printf("O valor digitado � inv�lido!\n");
		while ( v2 == 0 ){
			printf("O valor digitado � inv�lido!\n");
			printf("Insira um novo valor para o divisor: ");
			scanf("%d", &v2);	
		}
	}
	divisao = v1 / v2;
	printf("%d / %d = %.2f.", v1, v2, divisao);

	return 0;
}
