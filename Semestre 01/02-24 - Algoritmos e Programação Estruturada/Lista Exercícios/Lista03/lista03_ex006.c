/* Algoritmos e Programação Estruturada
1º Semestre. Aluno =  Natanael Ferreira Neves
Lista de Exercícios 03*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	/*Acrescente uma mensagem NOVO CÁLCULO (S/N)?’ ao final do exercício 5. Se for respondido ’S’ deve
	retornar e executar um novo cálculo, caso contrário deverá encerrar o algoritmo.*/
	float av1, av2, media;
	char novo_calc;
	
	do {
		printf("Insira a nota da primeira avaliação: ");
		scanf("%f", &av1);
	
		printf("Insira a nota da segunda avaliação: ");
		scanf("%f", &av2);
	
		while ( ((av1 > 10) || (av1 < 0)) || ( (av2 > 10) || (av2 < 0)) ){
			  if (((av1 > 10) || (av1 < 0))){
			  	 printf("\nNota Av1 inválida\nInsira novamente a nota da 1ª avaliação: ");
				 scanf("%f", &av1);
              }
			  if ((av2 > 10) || (av2 < 0)){
			  	 printf("Nota Av2 inválida\nInsira novamente a nota da 2ª avaliação: ");
				 scanf("%f", &av2);
	          }
        }	
		media = (av1 + av2)/ 2;
		printf("\t1ª Avaliação = %.2f\n\t2ª Avaliação = %.2f\n\tMédia Final = %.2f\n", av1, av2, media);
		
		printf("Novo cálculo? (s/n) ");
		scanf("%s", &novo_calc);
		if (novo_calc == 'n'){
			break;
		}
	} while (novo_calc == 's');
	
	return 0;
}
