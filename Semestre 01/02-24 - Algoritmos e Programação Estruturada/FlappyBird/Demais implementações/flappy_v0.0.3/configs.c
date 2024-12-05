#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

#define LARGURAC 10  // Largura da caixa
#define TAM 50

#define NORMAL "\x1B[0m"
#define INTENSO "\x1B[1m"
#define SUB "\x1B[4m"
#define PISCA "\x1B[5m"
#define PISCAAM "\x1B[5m\033[33m"

void centralizar_retornos(char *texto){
    int espacos_esquerda, espacos_direita, comprimento_texto;
    comprimento_texto = strlen(texto);
    espacos_esquerda = (TAM - 2 - comprimento_texto) / 2;
    espacos_direita = TAM - 2 - comprimento_texto - espacos_esquerda;

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


void centralizar_nomepadrao(char *nome, int tam, int g) {
    int espacos_esquerda, espacos_direita, comprimento_texto;
    comprimento_texto = strlen(nome);

    espacos_esquerda = (tam - 2 - comprimento_texto) / 2;
    espacos_direita = tam - 2 - comprimento_texto - espacos_esquerda;
    
    char grafico = (g == 0) ? '|' : '\xBA';
    
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

void centralizar_numpadrao(int *num, int tam, int g) {
    char buffer[100]; // Buffer para o nÃºmero convertido em string

    // Converte o nÃºmero apontado por 'num' para string
    snprintf(buffer, sizeof(buffer), "%d", *num);

    // Chama a funÃ§Ã£o centralizar_nomepadrao passando o nÃºmero como string
    centralizar_nomepadrao(buffer, tam, g);
}

void centralizar_textoind(char *texto){
	int k, esp;
	esp = (48 - strlen(texto) - 4) / 2;
	printf("\t\t\xBA%s%s%s:", PISCA, texto, NORMAL);
	for(k = 0; k < esp; k++) {
		printf(" ");
	}
}

char* bar(int pontos) {
    // Aloca memória para a string (inclui +1 para o caractere nulo '\0')
    char* barra = (char*)malloc((pontos + 1) * sizeof(char));
    if (barra == NULL) { // Verifica falha na alocação de memória
        printf("Erro ao alocar memória.\n");
        exit(1);
    }
    // Preenche a string com o caractere '\xCD'
    int j;
    for (j = 0; j < pontos; j++) {
        barra[j] = '\xCD';
    }
    barra[pontos] = '\0'; // Termina a string com o caractere nulo
    return barra;
}
