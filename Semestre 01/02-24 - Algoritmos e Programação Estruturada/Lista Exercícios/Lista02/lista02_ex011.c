/* Algoritmos e Programa��o Estruturada
1� Semestre. Aluno =  Natanael Ferreira Neves
Lista de Exerc�cios 02*/

#include <stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "");
	//Ler o sal�rio fixo e o valor das vendas efetuadas pelo vendedor de uma empresa.
	//Sabendo-se que ele recebe uma comiss�o de 3% sobre o total de vendas at� 1500,00 +
	//5% sobre o que ultrapassar ese valor, calcular e escreber seu salario final
	float sal_fixo, sal_final, total_vendas, comis_base = 0.03, comis_acres = 0.05;
	
	printf("Qual o valor base do funcion�rio? ");
	scanf("%f", &sal_fixo);
	
	printf("Qual o valor total de vendas ");
	scanf("%f", &total_vendas);
	
	if (total_vendas <= 1500){
       sal_final = sal_fixo + total_vendas * comis_base;
       printf("O sal�rio final � de R$ %.2f.", sal_final);
    } else {
           sal_final = sal_fixo + 1500 * comis_base + (total_vendas - 1500) * comis_acres;
           printf("O sal�rio final � de R$ %.2f.", sal_final);
    }


	return 0;
}
