/* Algoritmos e Programação Estruturada
1º Semestre. Aluno =  Natanael Ferreira Neves
Lista de Exercícios 02*/

#include <stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "");
	//Ler as notas da 1ª. e 2ª avaliações de um aluno. Calcular a média aritmética simples e;
	//escrever uma mensagem que diga se o aluno foi ou não aprovado.
	//(considerar que nota igual ou maior que 7 o aluno ´e aprovado). Escrever também a média calculada.
	
	float n1, n2, media;
	
	printf("Insira a nota da 1ª avaliação: ");
	scanf("%f", &n1);
	
	printf("Agora a nota da 2ª: ");
	scanf("%f", &n2);
	
	media = (n1 + n2)/ 2;
	
	if ( media >= 7){
		printf("Parabéns!\nAprovado\n|1ª Avaliação: %.2f\t|2ª Avaliação: %.2f\t|Média Final: %.2f|", n1, n2, media);
	} else {
		printf("Oops!!!\nReprovado\n|1ª Avaliação: %.2f\t|2ª Avaliação: %.2f\t|Média Final: %.2f|", n1, n2, media);
	}

	return 0;
}
