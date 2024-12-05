/* Algoritmos e Programa��o Estruturada
1� Semestre. Aluno =  Natanael Ferreira Neves
Lista de Exerc�cios 03*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	/*Acrescente uma mensagem NOVO C�LCULO (S/N)?� ao final do exerc�cio 5. Se for respondido �S� deve
	retornar e executar um novo c�lculo, caso contr�rio dever� encerrar o algoritmo.*/
	float av1, av2, media;
	char novo_calc;
	
	do {
		printf("Insira a nota da primeira avalia��o: ");
		scanf("%f", &av1);
	
		printf("Insira a nota da segunda avalia��o: ");
		scanf("%f", &av2);
	
		while ( ((av1 > 10) || (av1 < 0)) || ( (av2 > 10) || (av2 < 0)) ){
			  if (((av1 > 10) || (av1 < 0))){
			  	 printf("\nNota Av1 inv�lida\nInsira novamente a nota da 1� avalia��o: ");
				 scanf("%f", &av1);
              }
			  if ((av2 > 10) || (av2 < 0)){
			  	 printf("Nota Av2 inv�lida\nInsira novamente a nota da 2� avalia��o: ");
				 scanf("%f", &av2);
	          }
        }	
		media = (av1 + av2)/ 2;
		printf("\t1� Avalia��o = %.2f\n\t2� Avalia��o = %.2f\n\tM�dia Final = %.2f\n", av1, av2, media);
		
		printf("Novo c�lculo? (s/n) ");
		scanf("%s", &novo_calc);
		if (novo_calc == 'n'){
			break;
		}
	} while (novo_calc == 's');
	
	return 0;
}
