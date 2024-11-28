#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

#define LARGURAC 10  // Largura da caixa
#define TAM 50

#define LARGURA 20 //usado na estrutura do jogo
#define ALTURA 10 //usado na estrutura do jogo
#define PASSARO_X 5
#define MAX_PILARES 5


#define VERDE "\033[32m"
#define AMARELO "\033[33m"
#define AZUL "\033[34m"
#define PADRAO "\033[m"

#define LIMPA "\x1B[m"
#define INTENSO "\x1B[1m"
#define SUB "\x1B[4m"
#define PISCA "\x1B[5m"
#define PISCAAM "\x1B[5m\033[33m"

void criacao_caixa(int tamanho){
    printf("\t\t");
    int i;
    for (i = 0; i < tamanho; i++) {
        printf("\xCD");
    }
}

void centralizar_retornos(char *texto) {
    int comprimento_texto = strlen(texto);
    int espacos_esquerda = (TAM - 2 - comprimento_texto) / 2;
    int espacos_direita = TAM - 2 - comprimento_texto - espacos_esquerda;

    printf("\xBA");
    int i;
    for (i = 0; i < espacos_esquerda; i++) {
        printf(" ");
    }

    printf("%s", texto);

    for (i = 0; i < espacos_direita; i++) {
        printf(" ");
    }
    printf("\xBA\n");
}

void numerozao(void) {
    // Representação dos números 5 a 1 como arrays de strings
    char *num5[] = {
        " ***** ",
        "*      ",
        "*      ",
        " ***** ",
        "      *",
        "      *",
        " ***** "
    };

    char *num4[] = {
        "*    *",
        "*    *",
        "*    *",
        " *****",
        "     *",
        "     *",
        "     *"
    };

    char *num3[] = {
        " ***** ",
        "      *",
        "      *",
        " ***** ",
        "      *",
        "      *",
        " ***** "
    };

    char *num2[] = {
        " ***** ",
        "      *",
        "      *",
        " ***** ",
        "*      ",
        "*      ",
        " ***** "
    };

    char *num1[] = {
        "     * ",
        "    ** ",
        "   * * ",
        "     * ",
        "     * ",
        "     * ",
        " ***** "
    };

    // Vetor com ponteiros para os números
    char **numeros[] = {num5, num4, num3, num2, num1};

    // Laço para exibir os números em contagem regressiva
    int i, n;
    for(n = 0; n < 5; n++) { // Percorre os números de 5 a 1
        system("cls");
        criacao_caixa(TAM);
        printf("\n");
        for(i = 0; i < 7; i++) { // Exibe cada linha do número atual
            printf("\t\t");
            centralizar_retornos(numeros[n][i]);
        }
        criacao_caixa(TAM);
        Sleep(300);

        //printf("\n"); // Linha em branco entre os números
    }

}

void centralizar_nomepadrao(char *nome, int tam, int op_grafico) {
    int comprimento_texto = strlen(nome);
    int espacos_esquerda = (tam - 2 - comprimento_texto) / 2;
    int espacos_direita = tam - 2 - comprimento_texto - espacos_esquerda;

    char grafico = (op_grafico == 0) ? '|' : '\xBA';

    printf("%c", grafico);

    int i;
    for (i = 0; i < espacos_esquerda; i++) {
        printf(" ");
    }
    printf("%s", nome);

    for (i = 0; i < espacos_direita; i++) {
        printf(" ");
    }

    printf("%c", grafico);
}

void centralizar_numpadrao(int *num, int tam, int grafico) {
    char buffer[100]; /*Buffer para o número convertido em string*/

    /*Converte o número apontado por 'num' para string*/
    snprintf(buffer, sizeof(buffer), "%d", *num);

    /*Chama a função centralizar_nomepadrao passando o número como string*/
    centralizar_nomepadrao(buffer, tam, grafico);
}

void centralizar_textoind(char *texto) {
    int k;
    int esp = (48 - strlen(texto) - 4) / 2;
    printf("\t\t\xBA%s%s%s:", PISCA, texto, LIMPA);
    for (k = 0; k < esp; k++) {
        printf(" ");
    }
}

char *bar(int pontos) {

    char *barra = (char *) malloc((pontos + 1) * sizeof(char));
    if (barra == NULL) {

        printf("Erro ao alocar memória.\n");
        exit(EXIT_FAILURE);
    }

    int j;
    for (j = 0; j < pontos; j++) {
        barra[j] = '\xCD';
    }
    barra[pontos] = '\0';
    return barra;
}
