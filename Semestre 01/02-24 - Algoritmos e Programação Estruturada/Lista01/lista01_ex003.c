/* Algoritmos e Programação Estruturada
1º Semestre. Aluno =  Natanael Ferreira Neves
Lista de Exercícios 01*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	//Faça um algoritmo que leia a idade de uma pessoa expressa em anos, meses e dias; 
	//e escreva a idade dessa pessoa expressa apenas em dias. Considerar ano com 365 dias e mês com 30 dias.
	int dia, mes, ano, idade;
	int dia_atual = 18, mes_atual = 8, ano_atual = 2024;
	int acrescimo_mes, decrescimo_mes, ajuste_mes;
	int saldo_dia, saldo_mes, falta_dias, dias_contados;
	
	printf("Qual o dia de seu nascimento? ");
	scanf("%d", &dia);
	
	printf("De qual mês? ");
	scanf("%d", &mes);
	
	printf("E qual o ano seu nascimento? ");
	scanf("%d", &ano);
	
	idade = ano_atual - ano;
	if (idade < 0){
		printf("Precoce demais!");
		
	} else if (idade == 0){
		printf("João 3:4");
	} else {
		if (mes_atual == mes && dia_atual == dia && idade > 0){
			dias_contados = idade * 365;
			printf("Parabéns!\nHoje é seu aniversário!\nEstas a completar %d anos!\n", idade);
			printf("Possui %d dias vividos!", dias_contados);
		} 
		if (mes_atual > mes && dia_atual == dia && idade > 0){// completa ano e tens acrescimo de dias
			acrescimo_mes = (mes_atual - mes);
			ajuste_mes = acrescimo_mes * 30;
			dias_contados = (idade * 365) + ajuste_mes;
			printf("Tens %d anos e %d dias", idade, dias_contados);
		} else if (mes_atual < mes && dia_atual == dia && idade > 0){//não completa ano e tens acrescimo correspondente de dias para meses vivivdos
			ajuste_mes = (mes - mes_atual) * 30;
			dias_contados = (idade * 365) - ajuste_mes;
			printf("Tens %d anos e %d dias", --idade, dias_contados);
		}
		if (mes_atual == mes && dia_atual > dia && idade > 0){ //acrescimo somente de dias
			saldo_dia = dia_atual - dia;
			dias_contados = (idade * 365) + saldo_dia;
			printf("Tens %d anos e %d dias", idade, dias_contados);
		} else if (mes_atual == mes && dia_atual < dia && idade > 0){ //descrecimo de dias
			falta_dias = dia - dia_atual;
			dias_contados = (idade * 365) - falta_dias;
			printf("Tens %d anos e %d dias", --idade, dias_contados);
		} else {
			if (idade > 0 && mes_atual != mes && dia_atual != dia){
				if (mes > mes_atual){
					saldo_mes = (mes_atual * 30);
				} else {
					saldo_mes = (mes_atual - mes) * 30;
				}
				if (dia > dia_atual){
					saldo_dia = dia_atual;
				} else {
					saldo_dia = dia_atual - dia;
				}
				dias_contados = saldo_mes + saldo_dia + --idade * 365;
				printf("saldo de dia :%d\n", saldo_dia);
				printf("saldo de mes :%d\n", saldo_mes);
				
				printf("Natanael 27/11/1994 -> 18/08/2024: %d", dias_contados);
			} 
			
		}
	}
		
		
	return 0;
}
