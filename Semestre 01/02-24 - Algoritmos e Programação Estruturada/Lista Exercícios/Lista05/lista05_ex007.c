/* Algoritmos e Programação Estruturada
1º Semestre. Aluno =  Natanael Ferreira Neves
Lista de Exercícios 05*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

void main(){
	setlocale(LC_ALL, "");
	/*Faça um algoritmo para ler e armazenar em um vetor a temperatura média de todos os dias do ano.
	Calcular e escrever:
	(a) Menor temperatura do ano;
	(b) Maior temperatura do ano;
	(c) Temperatura média anual;
	(d) O número de dias no ano em que a temperatura foi inferior a média anual.*/
	srand(time(NULL));
	
	float temp_anual[365];
	float  temp_dia, temp_media, soma = 0, menor_temp, maior_temp;
	int i, inf_media, sup_media;
	for (i = 0; i < 365; i++){
		float min = -4.0, max = 50.0;
		float random_float = (float) rand() / RAND_MAX * (max - min);
		temp_anual[i] = random_float;
		if (i == 0){
			menor_temp = random_float;
			maior_temp = random_float;
		} else {
			if (random_float > maior_temp){
				maior_temp = random_float;
			} else if (random_float < menor_temp){
				menor_temp = random_float;
			}
		}
		
		soma += random_float;
	}
	temp_media = soma / 365;
	for (i = 0; i < 365; i++){
		if (temp_anual[i] > temp_media){
			sup_media++;
		}
		if (temp_anual[i] < temp_media){
			inf_media++;
		}	
	}
	printf("A menor temperatura do ano foi %.2fºC.\n", menor_temp);
	printf("A maior temperatura do ano foi %.2fºC.\n", maior_temp);
	printf("A temperatura média do ano foi %.2fºC.\n", temp_media);
	printf("Tivemos um total de %d dias abaixo da temperatura média.\n", inf_media);
	printf("Tivemos um total de %d dias acima da temperatura média.\n", sup_media); //Apresenta valor diferente do ideal.
}


