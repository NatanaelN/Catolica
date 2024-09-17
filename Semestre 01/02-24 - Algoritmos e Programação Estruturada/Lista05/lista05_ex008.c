/* Algoritmos e Programação Estruturada
1º Semestre. Aluno =  Natanael Ferreira Neves
Lista de Exercícios 05*/

#include <stdio.h>
#include <locale.h>
#include <stdbool.h>

void main(){
	setlocale(LC_ALL, "");
	/*Faça um algoritmo para ler 10 números e armazenar em um vetor.
	Após isto, o algoritmo deve ordenar os números no vetor em ordem crescente.
	Escrever o vetor ordenado.*/
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


}
