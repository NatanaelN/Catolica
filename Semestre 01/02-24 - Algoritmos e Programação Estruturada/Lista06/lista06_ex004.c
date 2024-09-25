#include <stdio.h>
#include <string.h>
void main() {
    /*4. Fa?a um programa que, dada uma string, diga se ela e um pal??ndromo ou n?ao. Lembrando que um pal??ndromo
    e uma palavra que tenha a propriedade de poder ser lida tanto da direita para a esquerda como da esquerda
    para a direita. Exemplo:
    ? ovo
    ? arara
    ? Socorram-me, subi no ?onibus em Marrocos.
    ? Anotaram a data da maratona*/

    char frase[100];
    char frase2[100];
    
    printf("Entre com uma frase: ");
    fgets(frase, 100, stdin);
    int len = strlen(frase);
    int i;
    int pos = len;
    for (i = 0; i < len; i++){
        frase2[i] = frase[pos-2];
        pos--;
    }
    printf("%s\t%d\n", frase, len);
    printf("frase: %s", frase2);
    printf("%d", pos);
}
