#include <locale.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int main(){
	setlocale(LC_ALL, "");
	/*8 - Fa�a um programa que receba v�rios n�meros, calcule e mostre:
	a) A soma dos n�meros digitados;
	b) A quantidade de n�meros digitados;
	c) A m�dia dos n�meros digitados;
	d) O maior n�mero digitado;
	e) O menor n�mero digitado;
	f) A m�dia dos n�meros pares;
	g) A percentagem dos n�meros �mpares entre todos os n�meros digitados.
	Finalize a entrada de dados com a digita��o do n�mero 30000. Entende-se que o usu�rio
	n�o possa digitar valor maior que 30000.*/
	int num, soma = 0, soma_par = 0, qtd = 0, qtd_par = 0, qtd_impar,  maior, menor;
	float media_dig, media_par, perc;
	bool continuar = true;
	
	while (continuar){
		printf("Digite num: ");
		scanf("%d", &num);
		if (num == 30000){
			continuar = false;
		} else{
			soma += num;
			qtd++;
			if (qtd == 1){
				maior = num;
				menor = num;
			} else {
				if (num > maior){
					maior = num;
				} else if (num < menor){
					menor = num;
				}
			}
			if ( num % 2 == 0){
				qtd_par++;
				soma_par += num;
			} else{
				qtd_impar++;
			}
			
		}
	}
	media_dig = (float)soma / qtd;
	media_par = soma_par / qtd_par;
	perc = ( (float) qtd_impar / qtd);
	printf("Foi digitado %d n�meros!\n", qtd);
	printf("A soma dos n�meros �: %d.\n", soma);
	printf("O maior n�mero �: %d\n", maior);
	printf("O menor n�mero �: %d\n", menor);
	printf("A m�dia dos n�meros �: %.2f.\n", media_dig);
	printf("A m�dia dos n�meros PARES �: %.2f.\n", media_par);
	printf("Tendo %d �mpares de um total de %d n�meros.\nO percentual de n�meros impares �: %.2f%%.\n", qtd_impar, qtd, (float) perc);
	
}
