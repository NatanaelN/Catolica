/* Algoritmos e Programa��o Estruturada
1� Semestre. Aluno =  Natanael Ferreira Neves
Lista de Exerc�cios 03*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	/*Uma loja est� levantando o valor total de todas as mercadorias em estoque. 
	Escreva um algoritmo que permita a entrada das seguintes informa��es: 
	a) o n�mero total de mercadorias no estoque; 
	b) o valor de cada mercadoria. 
	Ao final imprimir o valor total em estoque e a m�dia de valor das mercadorias.*/
	int i, mercadoria; 
	float valor, media, estoque;
	
	printf("Mercadinho Tonho da Lua\n");
	printf("Quantidade de Mercadorias: ");
	scanf("%d", &mercadoria);
	
	for(i = 1; i <= mercadoria; i++){
		printf("Digite o valor da mercadoria %d: ", i);
		scanf("%f", &valor);
		estoque += valor;
	}
	media = estoque / mercadoria;
	printf("Total de Mercadoria = %d\tValor do Estoque Total = R$ %.2f\tM�dia R$ por produto = R$ %.2f", mercadoria, estoque, media);


	return 0;
}
