/* Algoritmos e Programa��o Estruturada
1� Semestre. Aluno =  Natanael Ferreira Neves
Lista de Exerc�cios 01*/
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	//Escreva um algoritmo para ler as dimens�es de um ret�ngulo (base e altura), calcular e escrever a �rea do ret�ngulo.
	
	int base, altura, area;
	
	printf("Bom dia!\nMensura��o de Ret�ngulos!\nPrimeiro me informe o valor da Base: ");
	scanf("%d", &base);
	
	printf("Agora me informe a Altura do ret�ngulo: ");
	scanf("%d", &altura);
	
	area = base * altura;
	printf("\n\nPara o ret�ngulo de base: %d e altura: %d.Temos por �rea: %d", base, altura, area);
	
	return 0;
}
