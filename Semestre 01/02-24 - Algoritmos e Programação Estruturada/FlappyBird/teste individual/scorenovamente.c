#include "score.c"

void jogar_novamente() {
    int id;
    printf("Digite o ID do jogador para continuar o jogo: ");
    scanf("%d", &id);

    FILE *file = fopen("data.dat", "rb+");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return;
    }

    jogadores_t jogador;
    bool encontrado = false; //flag

    while (fread(&jogador, sizeof(jogadores_t), 1, file)) {
        if (jogador.id == id) {
            encontrado = true;

            int pontuacao;
            
            
            //PARTE DEBAIXO SAI
			printf("Digite a pontuação obtida na nova partida: ");
            scanf("%d", &pontuacao);
            
            //AQUI A PONTUAÇÂO DEVE RECEBER O RESULTADO DA PARTIDA
            

            if (jogador.partidas < 100) {
                jogador.pontuacoes[jogador.partidas] = pontuacao;
                jogador.partidas++;
                jogador.pontuacao_total += pontuacao;

                long posicao = ftell(file) - sizeof(jogadores_t);
                fseek(file, posicao, SEEK_SET);
                fwrite(&jogador, sizeof(jogadores_t), 1, file);

                printf("Pontuação registrada com sucesso!\n");
            } else {
                printf("O jogador já atingiu o limite máximo de 100 partidas.\n");
            }
            break;
        }
    }

    if (!encontrado) {
        printf("Jogador com ID %d não encontrado.\n", id);
    }

    fclose(file);
    system("pause");
}

void main(){
	jogar_novamente();
}
