#include <stdio.h>
#include <string.h>
#include <ctype.h>

//
// Created by natan on 24/09/2024.
//
void main() {
    /*Faça um algoritmo para ler uma senha, com as seguintes especificações:
    (a) Mínimo de 8 caracteres.
    (b) Pelo menos um número.
    (c) Pelo menos uma letra maiúscula.
    (d) Pelo menos uma letra minúscula.
    (e) Máximo de 100 caracteres.*/

    char senha[100];
    
    printf("Entre com uma senha: ");
    fgets(senha, 100, stdin);
    int len = strlen(senha);
    int i, caixa_alta = 0, caixa_baixa = 0, num = 0, especial = 0;
    if (len < 9){
        printf("Senha insuficiente!\nNecessário no mínimo 8 caracteres.\n");
    } 
    else if (len >= 100){
        printf("Senha demasiadamente grande!\nQuero ver colocar de cabeça!.");
    } else {
        for (i = 0; i < len -1; i++){
            if (isalnum(senha[i])){
                if (isupper(senha[i])){
                    caixa_alta++;
                }
                else if (islower(senha[i])){
                    caixa_baixa++;
                } else if (isdigit((int)(senha[i]))){
                    num++;
                }
            }
            else {
                especial++;
            }
        }
    
    /*printf("Números: %d.\n", num);    
    printf("Letras Maiúsculas: %d.\n", caixa_alta);
    printf("Letras Minúsculas: %d.\n", caixa_baixa);
    printf("Caracateres especiais: %d.\n", especial);*/
    }
    if( caixa_alta == 0){
        printf("Requisito de letra maiúscula não atendido.\n");
    }
    if( caixa_baixa == 0){
        printf("Requisito de letra minúscula não atendido.\n");
    }
    if( num == 0){
        printf("Requisito de número não atendido.\n");
    }
}