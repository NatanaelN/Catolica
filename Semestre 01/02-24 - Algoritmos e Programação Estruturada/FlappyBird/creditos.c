#include <stdio.h>

#define PISCA "\x1B[5m"
#define NORMAL "\x1B[0m"
#define INTENSO "\x1B[1m"
#define SUB "\x1B[4m"


void creditos(){
	system("cls");
    char alunos[7][100] = {
	"Emerson Silva",
	"Gabriel Alberto Duarte de Andrade",  //Ajudou
	"Juliano Arthur da Silva Braga",
	"Luis Felipe Trega Cipriano",
	"Natanael Ferreira Neves", //Ajudou
	"Thiago Antonio Vieira",
	"Wagner Serpa Porto"}; //Ajudou
	
    int i;
    char cabecalho[4][100] = {
	"Pro-Reitoria Academica",
	"Escola de Educacao, Tecnologia e Comunicacao",
	"Curso de Bacharelado em Engenharia de Software",
	"Trabalho de Algoritmos e Programacao Estruturada"};
	
    for(i = 0; i < 4; i++){
        printf("\t%s%s\n", INTENSO, cabecalho[i]);
    }
	printf("\n\n");
	printf("%sProjeto desenvolvido pelos alunos%s: \n\n", SUB, NORMAL);
	for(i = 0; i < 7; i++){
        printf("\t\t%s\n", alunos[i]);
    }
    printf("\n\t%sOrientador%s: %sProf. Me. Jefferson Salomão Rodrigues\n", SUB, NORMAL, INTENSO);
    system("pause");
    //chamar o main do jogo novamente
}

/*void main(void){
	creditos();
}*/
