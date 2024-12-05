/* Algoritmos e Programa��o Estruturada
1� Semestre. Aluno =  Natanael Ferreira Neves
Lista de Exerc�cios 03*/

#include <stdio.h>
#include <locale.h>
#include <stdbool.h>

int main(){
	setlocale(LC_ALL, "");
	/*O mesmo exerc�cio anterior, mas agora n�o ser� informado o n�mero de mercadorias em estoque.
	Ent�o o funcionamento dever� ser da seguinte forma: 
	ler o valor da mercadoria e perguntar �MAIS MERCADORIAS (S/N)?�.
	Ao final, imprimir o valor total em estoque e a m�dia de valor das mercadorias em estoque.*/
	
	int i, contador = 0;
	bool mercadoria = true; 
	float valor, media, estoque;
	char continuar;
	
	printf("Mercadinho Tonho da Lua\n");
	while ( mercadoria ){
	    printf("Digite o valor da mercadoria %d: ", contador + 1);
	    scanf("%f", &valor);
        estoque += valor;
        contador++;
        
        printf("Mais Mercadorias (s/n) ");
        scanf("%s", &continuar);
        
        if (continuar == 'n'){
        	mercadoria = false;
		}
	}
	
	media = estoque / contador;
	printf("Total de Mercadoria = %d\tValor do Estoque Total = R$ %.2f\tM�dia R$ por produto = R$ %.2f", contador, estoque, media);
	
	return 0;
}
