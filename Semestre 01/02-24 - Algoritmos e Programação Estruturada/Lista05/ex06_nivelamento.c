#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
int fat( int a){
	int i, result = 1;
	while (a != 1){
		result *= a;
		a--;
	}
	printf("%d",result);
	return result;
}
void main(){
	setlocale(LC_ALL, "");
	/*- Fa�a um programa que calcule o valor aproximado de cos(x) pela s�rie de Taylor, dado pela aproxima��o abaixo:
	cos(x) = 1 - (x**2/2!) + (x**4/4!) - (x**6/6!) + ...*/
	int i, num, teste;
	printf("Entre com o n�m: ");
	scanf("%d", &num);
	for (i = 2; i <= 6; i+2){
		float retorno = pow(num, i);
		printf("%f", retorno);
	}
	
	//pow(, 2)/fat() + pow(, i)/fat();
	
}
