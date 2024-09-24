#include <locale.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int main(){
	setlocale(LC_ALL, "");
	/*8 - Faça um programa que receba vários números, calcule e mostre:
	a) A soma dos números digitados;
	b) A quantidade de números digitados;
	c) A média dos números digitados;
	d) O maior número digitado;
	e) O menor número digitado;
	f) A média dos números pares;
	g) A percentagem dos números ímpares entre todos os números digitados.
	Finalize a entrada de dados com a digitação do número 30000. Entende-se que o usuário
	não possa digitar valor maior que 30000.*/
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
	printf("Foi digitado %d números!\n", qtd);
	printf("A soma dos números é: %d.\n", soma);
	printf("O maior número é: %d\n", maior);
	printf("O menor número é: %d\n", menor);
	printf("A média dos números é: %.2f.\n", media_dig);
	printf("A média dos números PARES é: %.2f.\n", media_par);
	printf("Tendo %d ímpares de um total de %d números.\nO percentual de números impares é: %.2f%%.\n", qtd_impar, qtd, (float) perc);
	
}
