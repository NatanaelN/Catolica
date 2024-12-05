
/*void main(void){
	setlocale(LC_ALL, "");
	/*int a = 10;
	int *ptr;
	ptr = &a;
	
	printf("A = %d \n", a);
	printf("Endereço de A = %d \n", &a);
	printf("Conteúdo de PTR = %d \n", ptr); //O contéudo é o ENDEREÇO da variável apontdada
	printf("Endereço de PTR = %d \n", &ptr); //O ponteiro tbm possui endereço
	printf("Conteudo Apontado pelo PTR = %d \n", *ptr); //Acessar o valor da variável apontada pelo PTR
	*ptr+= 5; //A altereção do ponteiro repercute tbm na variável apontada.
	printf("Valor de A = %d \n", a);
	printf("Valor apontado = %d \n", *ptr);
	*/
	
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>
int tamanho( char str_[]){
	int tam = 0;
	char *ptr = str_;
	
	while(*ptr != '\0'){
		//if(*ptr != '\0'){
		ptr++;
		tam++;
		//}
	}
	//printf("Tamanho a: %d", tam_a);
	//printf("Tamanho b: %d", tam_b);
	return tam;
}

void procura( char str_a[], char str_b[], int tama_a, int tama_b){
	bool bom = true;
	char *ptra = str_a;
	char *ptrb = str_b;
	int verifica = 0;
	
	char select = (tama_a > tama_b) ?  'a' : 'b';
	switch (select){
	    case 'a':
	        do {
			   if (*ptra == *ptrb){
		   		  verifica++;
				}
				if(*ptrb == '\0'){
			 	    //bom = false;
			 	    break;
				}
				ptra++;
			 	ptrb++;

			 
	 		} while (*ptrb != '\o');
	 		if (verifica == tama_b){
				//printf("A palavra consta na string");
				bom = true;
				break;
			} else{
				bom = false;
			 	break;
	   		}
	   		if (bom){
			   printf("A palavra consta na string");
		   	} else
	  	  	   printf("A palavra não consta na string");
	        break;
	    case 'b':
	        printf("SWITCH %d", tama_b);
	        break;
	}

}
void main() {
    setlocale(LC_ALL, "");
    /*Elabore uma funï·¿ï·¿o que receba duas strings como parï·¿metros e verifique se a segunda string ocorre dentro da primeira.
	Use aritmï·¿tica de ponteiros para acessar os caracteres das strings. Nï·¿o utilize string.h.*/
	char string_a[] = "Cuscuz é bom";
	char string_b[] = "Cuscuz";
	
	procura(string_a, string_b, tamanho(string_a), tamanho(string_b));
}

