#include <stdio.h> 
#include <locale.h> 
#include <conio.h> 

  

int verifica_valor(int valor){
	if (valor % 2 == 0){
	//printf("1"); 
	return 1; 
	} else{
	  //printf("0");
	  return 0; 
    } 
} 

int sit (int num){
	if (num < 0){ 
	   return -1; 
	
	} else if (num == 0){ 
	  return 0; 
	} else{
	  return 1; 
	} 
	
} 

  

int testes(int vezes_consecutivas){ 
	int i; 
	for (i= -10; i <= vezes_consecutivas; i++){ 
		int teste = verifica_valor(i); 
		int sit2 = sit(i); 
		printf("%3d -> %d\t| -> ", i, teste);
		printf("%2d.\n", sit2); 
	
	} 

} 

int main(){ 
/*7. Faça uma função que receba um valor inteiro e verifica se o valor é par. 
A função deve retornar 1 se o número for par e 0, se impar. 

 
8. Faça uma função que receba um valor inteiro e verificar se o valor é positivo, negativo ou zero. 
A função deve retornar 1 para positivos, -1 para negativos e 0 para zero;*/ 

testes(15); 

getch(); 

return 100; 

} 
