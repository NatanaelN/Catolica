/* Algoritmos e Programação Estruturada
1º Semestre. Aluno =  Natanael Ferreira Neves
Lista de Exercícios 02*/

#include <stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "");
	//Ler o ano atual e o ano de nascimento de uma pessoa. 
	//Escrever uma mensagem que diga se ela poderá ou não votar este ano (não é necessário considerar o mês em que a pessoa nasceu).

	int ano_nasc, ano_atual = 2024;
	
	printf("Avaliação Pré-Eleitoral!\n");
	printf("Em que ano nasceu: ");
	scanf("%d", &ano_nasc);
	
	if (ano_atual == ano_nasc){
		printf("É o Button?!");
	} else if (ano_atual < ano_nasc) {
		printf("Viajante do Futuro!");
	} else if (ano_atual > ano_nasc && (ano_atual - ano_nasc) >= 18){
		printf("Com %d anos, podes votar!", ano_atual - ano_nasc);
	} else {
		printf("Ainda não pode votar");
	}
	return 0;
}
