/* Algoritmos e Programa��o Estruturada
1� Semestre. Aluno =  Natanael Ferreira Neves
Lista de Exerc�cios 02*/

#include <stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "");
	//Ler o ano atual e o ano de nascimento de uma pessoa. 
	//Escrever uma mensagem que diga se ela poder� ou n�o votar este ano (n�o � necess�rio considerar o m�s em que a pessoa nasceu).

	int ano_nasc, ano_atual = 2024;
	
	printf("Avalia��o Pr�-Eleitoral!\n");
	printf("Em que ano nasceu: ");
	scanf("%d", &ano_nasc);
	
	if (ano_atual == ano_nasc){
		printf("� o Button?!");
	} else if (ano_atual < ano_nasc) {
		printf("Viajante do Futuro!");
	} else if (ano_atual > ano_nasc && (ano_atual - ano_nasc) >= 18){
		printf("Com %d anos, podes votar!", ano_atual - ano_nasc);
	} else {
		printf("Ainda n�o pode votar");
	}
	return 0;
}
