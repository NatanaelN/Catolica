//Engenharia de Software - UCB
//Prof: Jefferson Salomão
//Lista de Exercícios 07
// Created by natan on 12/10/2024.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>
#define TAM 1000
int tamanho( char str_[]){
	int tam = 0;
	char *ptr = str_;
	
	while(*ptr != '\0'){
		ptr++;
		tam++;
	}
	return tam;
}

void primeiro(char *ptrx, char *ptry, int tama_y){
	setlocale(LC_ALL, "");
	char *testeb = ptry;
	char *testea = ptrx;
    int verifica = 0;
    bool bom = false;
    do {
		while(*ptrx != *ptry){
			ptrx++;
			if(*ptrx == '\0' || *ptry == '\0'){
				break;
			}
			if (*ptrx == *ptry){
		   		verifica++;
		   		ptry++;
			}
		}//novo
		if(*ptrx == '\0' || *ptry == '\0'){
			break;
		}
			
		   	verifica++;
		   	ptry++;
		   	ptrx++;
		    
	} while (*ptry != '\o');
	 	if (verifica == tama_y){
			bom = true;
		} else{
			bom = false;
	   	}
	   	if (bom){
		   printf("O termo '%s\nconsta na string: '%s", testeb, testea);
		} else
	  	   printf("O termo '%s\nnão consta na string: '%s", testeb, testea);
	      
        }

void procura( char str_a[], char str_b[], int tama_a, int tama_b){
	
	char *ptra = str_a;
	char *ptrb = str_b;
	int verifica = 0;
	char select = (tama_a > tama_b) ?  'a' : 'b';
	switch (select){
	    case 'a':
	        primeiro(ptra, ptrb,tama_b);
	        break;
	    case 'b':
	        primeiro(ptrb, ptra,tama_a);
	        break;
	}
}
void main() {
    setlocale(LC_ALL, "");
    /*Elabore uma função que receba duas strings como parâmetros e verifique se a segunda string ocorre dentro da primeira.
	Use aritmética de ponteiros para acessar os caracteres das strings. Não utilize string.h.*/
	char string_a[TAM];
	fgets(string_a, TAM, stdin);

	char string_b[TAM];
	fgets(string_b, TAM, stdin);
	

	procura(string_a, string_b, tamanho(string_a), tamanho(string_b));
}

