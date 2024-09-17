/* Algoritmos e Programação Estruturada
1º Semestre. Aluno =  Natanael Ferreira Neves
Lista de Exercícios 02*/

#include <stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "");
	//Ler um valor e escrever a mensagem E MAIOR QUE 10! se o valor lido for maior que 10, caso contrário
	//escrever NAO˜ E MAIOR QUE 10!
	int valor;
	
	printf("Insira um valor: ");
	scanf("%d", &valor);
	
	if (valor > 10){
		printf("O valor declarado (%d) é maior que 10.", valor);
	} else if (valor == 10){
		printf("O valor declarado é 10.");
	} else {
		printf("O valor declarado (%d) é menor que 10.", valor);
	}
	return 0;
}
