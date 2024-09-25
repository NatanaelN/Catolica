#include <stdio.h>
#include <string.h>
void main() {
    /*4. Faça um programa que, dada uma string, diga se ela e um palíndromo ou não. Lembrando que um palíndromo
    e uma palavra que tenha a propriedade de poder ser lida tanto da direita para a esquerda como da esquerda
    para a direita. Exemplo:
    ? ovo
    ? arara
    ? Socorram-me, subi no ?onibus em Marrocos.
    ? Anotaram a data da maratona*/

    char frase[100];
    char r_frase[100];
    char space[] = {' ','\0'};
    printf("Frase: ");
    fgets(frase, 100, stdin);
    
    int len = strlen(frase) - 1;
    int i, j, pos = len;
    for (i = 0; i < len + 1; i++){
        frase[pos] = tolower(frase[pos]);
        r_frase[i] = frase[pos];
        pos--;
    }
    for (j = 0; j < len + 1; j++){
        if (frase[j] != r_frase[j]){
            printf("Não é palíndromo.\n");
            printf("%s\n", frase);
            printf("%s\n", r_frase);
            break;           
        } else {
            printf("É um palíndromo.\n");
            printf("%s\n", frase);
            printf("%s\n", r_frase);
        }
    }
}