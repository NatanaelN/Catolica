/* Algoritmos e Programação Estruturada
1º Semestre. Aluno =  Natanael Ferreira Neves
Lista de Exercícios 02*/

#include <stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "");
	//Ler a hora de início e a hora de fim de um jogo de Xadrez (considere apenas horas inteiras, sem os minutos)
	//e calcule a duração do jogo em horas, sabendo-se que o tempo máximo de duração do jogo é de 24 horas e
	//que o jogo pode iniciar em um dia e terminar no dia seguinte.
	int hora_inicio, hora_fim, duracao, duracao_t = 24;
	
	printf("Que horas comecou a jogar: ");
	scanf("%d", &hora_inicio);
	printf("E que horas parou: ");
	scanf("%d", &hora_fim);
	
	duracao = hora_fim - hora_inicio;
	
	if (duracao == 0){
	   printf("Parabéns!\nOu tens mais o que fazer ou literalmente não tem nada para fazer...");
	   
    } else if ( duracao < 0 && duracao_t - duracao >= 8){
	   printf("Tem vida social não?\n");
	   printf("ficou um total de %dhs jogando...", duracao_t + duracao);
    } else if (duracao >= 1 && duracao <= 3){
	   printf("%dhs é um bom tempo de jogo.\nSempre bom relaxar...", duracao);
    } else if (duracao >= 4 && duracao <= 8){
	   printf("%dhs é um tempo consideral!\nSe exercite e beba água.", duracao);
    } else {
	   printf("Tem vida social não?\n");
	   printf("ficou um total de %dhs jogando...", duracao);
    }
	
	return 0;
}
