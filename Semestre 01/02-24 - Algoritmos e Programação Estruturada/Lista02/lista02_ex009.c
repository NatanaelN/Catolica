/* Algoritmos e Programação Estruturada
1º Semestre. Aluno =  Natanael Ferreira Neves
Lista de Exercícios 02*/

#include <stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "");
	/*A jornada de trabalho semanal de um funcionário é de 40 horas. O funcionário que trabalhar mais de 40
	horas receberá hora extra, cujo cálculo é o valor da hora regular com um acréscimo de 50%. 
	Escreva um algoritmo que leia o número de horas trabalhadas em um mês, o salário por hora e escreva o salário total do
	funcionário, que deverá ser acrescido das horas extras, caso tenham sido trabalhadas. 
	(Considere que o mês possua 4 semanas exatas).*/
	int hora, v_hora;
	int semana = 40, mes = semana * 4;
	float salario;
	
	printf("Quantas horas foram trabalhadas no mês: ");
	scanf("%d", &hora);
	
	printf("Qual o valor pago por hora?: ");
	scanf("%d", &v_hora);
	
	if (hora > mes){
		int saldo_mais = hora - mes;
		float horaex = v_hora + (v_hora * 0.5) ;
		salario = mes * v_hora + saldo_mais * horaex;
		printf("O funcionário trabalhou %d horas a mais.\nTendo por salário o valor de R$ %.2f.\n", saldo_mais, salario);
		printf("Salario base: R$ %d\t -> Hora Extra: %.2f\t -> Acrescimo Hora Extra: R$ %.2f", mes * v_hora, horaex, saldo_mais * horaex);
	} else if (hora > 0 && hora <= mes){
		salario = hora * v_hora;
		printf("%d horas trabalhadas equivalem a: R$ %.2f.", hora, salario);
	} else {
		printf("Fica ligeiro e para de morcegar");
	}

	return 0;
}
