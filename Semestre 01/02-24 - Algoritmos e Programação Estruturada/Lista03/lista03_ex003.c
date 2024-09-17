/* Algoritmos e Programação Estruturada
1º Semestre. Aluno =  Natanael Ferreira Neves
Lista de Exercícios 03*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	/*Acrescentar uma mensagem de ’VALOR INV´ALIDO’ no exerc´ýcio 1 caso o segundo valor informado seja ZERO.*/
	
	int v1, v2;
	float divisao;
	
	printf("Entre com o primeiro valor: ");
	scanf("%d", &v1);
	
	printf("Entre com o segundo valor: ");
	scanf("%d", &v2);
	
	if (v2 == 0){
		//printf("O valor digitado é inválido!\n");
		while ( v2 == 0 ){
			printf("O valor digitado é inválido!\n");
			printf("Insira um novo valor para o divisor: ");
			scanf("%d", &v2);	
		}
	}
	divisao = v1 / v2;
	printf("%d / %d = %.2f.", v1, v2, divisao);

	return 0;
}
