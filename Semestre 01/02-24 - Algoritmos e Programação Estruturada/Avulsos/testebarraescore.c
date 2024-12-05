#include <stdio.h>

//barra de gráfico para o escore
void bar(){
	int j, pontos;
	for(j = 1; j < pontos; j++){
		printf("\xCD");
	}
	printf("\n");
}
void main(void){
	printf("\x1B[5mNatanael\x1B[0m\t");
	bar(3); // aqui jogarei o escore  e o nome recebido do arquivo.dat
	printf("Wagner\t");
	bar(4);
	printf("Trega Cipri\t");
	bar(2);
	

}
