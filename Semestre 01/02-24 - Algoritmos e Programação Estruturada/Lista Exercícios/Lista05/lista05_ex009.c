/* Algoritmos e Programação Estruturada
1º Semestre. Aluno =  Natanael Ferreira Neves
Lista de Exercícios 05*/

#include <stdio.h>
#include<locale.h>
#include <stdbool.h>

void main(){
	setlocale(LC_ALL, "");
	/*O mesmo exercício anterior, mas depois de ordenar os elementos do vetor em ordem crescente, deve ser lido mais um número qualquer
	e inserir esse novo número na posição correta, ou seja, mantendo a ordem crescente do vetor.*/
	    int vet[10];
    int i, num;

    for (i = 0; i < 10; i++) {
        printf("Insira o %dº valor do vetor: ", i + 1);
        scanf("%d", &num);
        vet[i] = num;
    }
    
    printf("\nOrdem normal:\n");
    for (i = 0; i < 10; i++) {
        printf(" %d ", vet[i]);
    }
    printf("\n");

    bool alterar = true;
    while (alterar) {
        alterar = false; 
        for (i = 0; i < 9; i++) { 
            if (vet[i] > vet[i+1]) {
                int anterior = vet[i];
                vet[i] = vet[i+1];
                vet[i+1] = anterior;
                alterar = true; 
            }
        }
    }

    printf("\nOrdem crescente:\n");
    for (i = 0; i < 10; i++) {
        printf(" %d ", vet[i]);
    }
    printf("\n");
 	printf("\nOrdem Decrescente:\n");
    for (i = 9; i >= 0; i--) {
        printf(" %d ", vet[i]);
    }
    int novo;
    printf("\nInsira um novo valor: ");
    scanf("%d", &novo);

    for (i = 9; i >= 0 && vet[i] > novo; i--) {
        vet[i+1] = vet[i]; 
    }
    vet[i+1] = novo; 

    printf("\nNovo vetor:\n");
    for (i = 0; i < 11; i++) {
        printf(" %d ", vet[i]);
    }
    printf("\n");

}

