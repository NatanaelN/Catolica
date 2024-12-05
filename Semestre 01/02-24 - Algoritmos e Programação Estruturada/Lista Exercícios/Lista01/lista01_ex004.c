/* Algoritmos e Programa��o Estruturada
1� Semestre. Aluno =  Natanael Ferreira Neves
Lista de Exerc�cios 01*/

#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "");
	//Escreva um algoritmo para ler o n�mero total de eleitores de um munic�pio, o n�mero de votos brancos, nulos e v�lidos.
	//Calcular e escrever o percentual que cada um representa em rela��o ao total de eleitores.
	
	int eleitores, v_branco, v_nulo, v_validos;
	
	printf("Mensura��o de votos!\n");
	printf("Quantos eleitores existem na cidade? ");
	scanf("%d", &eleitores);
	
	printf("Quantos foram os votos v�lidos? ");
	scanf("%d", &v_validos);
	
	printf("Quantos foram os votos em Branco? ");
	scanf("%d", &v_branco);
	
	printf("E os votos nulos?? ");
	scanf("%d", &v_nulo);
	
	float p_validos = (float) v_validos / eleitores * 100.0;
	float p_branco = (float) v_branco / eleitores * 100.0;
	float p_nulo = (float) v_nulo / eleitores * 100.0;
	
	
	printf("\n");
	printf("Total de votos v�lidos: %d. Taxa de %.2f %% de votos.\n", v_validos, p_validos);
	printf("Total de votos em branco: %d. Taxa de %.2f %% de votos.\n", v_branco, p_branco);
	printf("Total de votos nulo: %d. Taxa de %.2f %% de votos.\n", v_nulo, p_nulo);
	
	return 0;
}
