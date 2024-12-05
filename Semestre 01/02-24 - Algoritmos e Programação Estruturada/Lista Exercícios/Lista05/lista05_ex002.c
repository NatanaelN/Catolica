/* Algoritmos e Programação Estruturada
1º Semestre. Aluno =  Natanael Ferreira Neves
Lista de Exercícios 05*/

#include <stdio.h>
#include<locale.h>

void main(){
	setlocale(LC_ALL, "");
	/*Ler um vetor Q de 20 posi¸c˜oes (aceitar somente n´umeros positivos). Escrever a seguir o valor do maior 
	elemento de Q e a respectiva posi¸c˜ao que ele ocupa no vetor.*/
	int q[20];
	int i, maior = 0, posp = 0, posn, valor;
	
	for (i = 1; i <= 20; i++){
		printf("valor %d: ", i);
		scanf("%d", &valor);
		if (valor < 0){
			i--;
		} else{
			q[i] = valor;
			if (q[i] > maior){
				maior = valor;
			}
		}
	}
	for (i = 1; i <= 20; i++){
		posp ++;
		if (q[i] == maior){
			break;
		}
		
	}
	printf("Maior = %d encontrado na posição: %d.\n", maior, posp);

}

