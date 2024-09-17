/* Algoritmos e Programação Estruturada
1º Semestre. Aluno =  Natanael Ferreira Neves
Lista de Exercícios 02*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	/*Fa¸ca um algoritmo para ler: quantidade atual em estoque, quantidade m´axima em estoque e quantidade
	m´inima em estoque de um produto. Calcular e escrever a quantidade m´edia ((quantidade m´edia = quantidade
	m´axima + quantidade m´inima)/2). Se a quantidade em estoque for maior ou igual a quantidade m´edia escrever
	a mensagem ’N˜ao efetuar compra’, sen˜ao escrever a mensagem ’Efetuar compra’.*/
	
	char produto[100];
	int qtd_atual, qtd_max, qtd_min;
	
	
	printf("Digite o nome do produto: ");
	scanf("%s", produto);
	
	printf("Entre com o estoque atual do %s: ", produto);
	scanf("%d", &qtd_atual);
	
	printf("Qual a quantidade máxima aceita: ");
	scanf("%d", &qtd_max);
	
	printf("E a quantidade mínima: ");
	scanf("%d", &qtd_min);
	
	float qtd_med = (qtd_max + qtd_min) / 2 ;
	
	if (qtd_med > qtd_atual){
		printf("\nEfetuar compra de %s", produto);
	} else {
		printf("\nNão efetuar compra de %s", produto);
		
	}

	return 0;
}
