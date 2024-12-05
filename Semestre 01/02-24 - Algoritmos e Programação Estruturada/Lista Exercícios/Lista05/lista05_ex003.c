/* Algoritmos e Programação Estruturada
1º Semestre. Aluno =  Natanael Ferreira Neves
Lista de Exercícios 05*/

#include <stdio.h>
#include<locale.h>

void main(){
	setlocale(LC_ALL, "");
	//O mesmo exerc´icio anterior, mas agora deve escrever o menor elemento do vetor e a respectiva posi¸c˜ao dele nesse vetor.
		int q[20];
	int i = 0, maior = 0, menor, posp = 0, posn = 0 , valor;
	int t = 20;
	while ( i < 20){
	
		printf("Digite um valor: ");
		scanf("%d", &valor);
		q[i] = valor;
		if ( i == 0){
			maior = valor;
			menor = valor;
		} else {
			if (q[i] > maior){
				maior = valor;
				posp = i;
			}
			if (q[i] < menor){
				menor = valor;
				posn = i;
			}
		}
		i++;
	}
		
		

	printf("Maior = %d encontrado na posição: %d.\n", maior, posp);
	printf("Menor = %d encontrado na posição: %d.\n", menor, posn);

}

