/* Algoritmos e Programa��o Estruturada
1� Semestre. Aluno =  Natanael Ferreira Neves
Lista de Exerc�cios 02*/

#include <stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "");
	//Ler um valor e escrever a mensagem E MAIOR QUE 10! se o valor lido for maior que 10, caso contr�rio
	//escrever NAO� E MAIOR QUE 10!
	int valor;
	
	printf("Insira um valor: ");
	scanf("%d", &valor);
	
	if (valor > 10){
		printf("O valor declarado (%d) � maior que 10.", valor);
	} else if (valor == 10){
		printf("O valor declarado � 10.");
	} else {
		printf("O valor declarado (%d) � menor que 10.", valor);
	}
	return 0;
}
