#include "score.c"
#include <string.h>
#include <stdio.h>
#include <stdbool.h>

#define LARGURA 10  // Largura da caixa
#define TAM 50
#define NORMAL "\x1B[0m"
#define INTENSO "\x1B[1m"
#define SUB "\x1B[4m"
#define PISCA "\x1B[5m"
#define LIMPA "\x1B[0m"

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


void centralizar_texto(char *texto) {
	int k, esp;
	esp = (TAM - strlen(texto) - 4) / 2;
	printf("\t\t\xBA%s%s%s:", PISCA, texto, LIMPA);
	for(k = 0; k < esp; k++) {
		printf(" ");
	}
}

void visualizar_individual(){
	void linhacaixa(){
        printf("\t\t");
        int i;
        for (i = 0; i < TAM; i++) { //cria a parte de cima da caixa
            printf("\xCD");
    	}
	}
        
    int id;
    printf("Digite o ID do jogador: ");
    scanf("%d", &id);

    FILE *file = fopen("data.dat", "rb");
    if (file == NULL) {
        printf("%sNenhum jogador cadastrado ainda%s.\n", SUB, NORMAL);
        system("pause");
        //menu();
    }

    jogadores_t jogador;
    bool encontrado = false;

    while (fread(&jogador, sizeof(jogadores_t), 1, file)) {
        if (jogador.id == id) {
            encontrado = true;
            linhacaixa();
        
            printf("\n\t\t\xBA************ %sINFORMAÇÕES DO JOGADOR%s ************\xBA\n", SUB, LIMPA);
            centralizar_texto("ID");
            printf("% 23d\xBA\n", jogador.id);
            centralizar_texto("NOME");
			printf("% 22s\xBA\n", jogador.nome);
            centralizar_texto("Partidas Jogadas");
			printf("% 16d\xBA\n", jogador.partidas);
            //centralizar_texto("Pontuações por partida");            
            int i;
            if (jogador.pontuacoes[i] == 0){
            	printf("\t\t\xBA                                  \xBA\n");
            }	
			else{
                for (i = 0; i < jogador.partidas; i++) {
                	printf("\t\t\xBAPartida %d:                            % 3d pontos\xBA\n", i + 1, jogador.pontuacoes[i]);				
				}
			}
            centralizar_texto("Pontuação Total");
			printf("% 17d\xBA\n", jogador.pontuacao_total);
            linhacaixa();
            break;
        }
    }

    if (!encontrado) {
        printf("Jogador com ID %d não encontrado.\n", id);
    }
    fclose(file);
    //system("pause");
}


void main(){
	visualizar_individual();
}
