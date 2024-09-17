/* Algoritmos e Programação Estruturada
1º Semestre. Aluno =  Natanael Ferreira Neves
Lista de Exercícios 03*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	/*Acrescentar uma mensagem de VALOR INVÁLIDO no exercício 2 caso o segundo valor informado seja ZERO.*/
	
	float v1, v2;
	float divisao;
	
	printf("Entre com o primeiro valor: ");
	scanf("%f", &v1);
		
	printf("Entre com o segundo valor: ");
	scanf("%f", &v2);		
	
	do {
		if (v2 == 0){
			printf("O valor digitado é inválido!\n");
	   		printf("Insira um novo valor para o divisor: ");
	   		scanf("%f", &v2);
		}  
		
	} while (v2 == 0);
	
	divisao = v1 / v2;
	printf("%.f / %.f = %.2f.", v1, v2, divisao);

	return 0;
}
