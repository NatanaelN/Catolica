/* Algoritmos e Programa��o Estruturada
1� Semestre. Aluno =  Natanael Ferreira Neves
Lista de Exerc�cios 02*/

#include <stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "");
	//Ler as notas da 1�. e 2� avalia��es de um aluno. Calcular a m�dia aritm�tica simples e;
	//escrever uma mensagem que diga se o aluno foi ou n�o aprovado.
	//(considerar que nota igual ou maior que 7 o aluno �e aprovado). Escrever tamb�m a m�dia calculada.
	
	float n1, n2, media;
	
	printf("Insira a nota da 1� avalia��o: ");
	scanf("%f", &n1);
	
	printf("Agora a nota da 2�: ");
	scanf("%f", &n2);
	
	media = (n1 + n2)/ 2;
	
	if ( media >= 7){
		printf("Parab�ns!\nAprovado\n|1� Avalia��o: %.2f\t|2� Avalia��o: %.2f\t|M�dia Final: %.2f|", n1, n2, media);
	} else {
		printf("Oops!!!\nReprovado\n|1� Avalia��o: %.2f\t|2� Avalia��o: %.2f\t|M�dia Final: %.2f|", n1, n2, media);
	}

	return 0;
}
