#include "score.c"


void adicionar_jogador() {
    srand(time(NULL));

    int id = gerar_id_unico();
    if (id == -1) {
        //return;
        system("pause");
    }

    FILE *file = fopen("data.dat", "ab");
    if (file == NULL) {
        perror("Erro ao gerar o arquivo!");
        //return;
        system("pause");
    }

    jogadores_t novo_jogador;
    novo_jogador.id = id;

    printf("Digite o nome do jogador: ");
    fflush(stdin);
    fgets(novo_jogador.nome, sizeof(novo_jogador.nome), stdin);
    novo_jogador.nome[strcspn(novo_jogador.nome, "\n")] = '\0';

    novo_jogador.partidas = 1;
    novo_jogador.pontuacoes[0] = 0;
	novo_jogador.pontuacao_total = 0;
    

    fwrite(&novo_jogador, sizeof(jogadores_t), 1, file);
    printf("Id: %d\tJogador %s adicionado com sucesso!\n", novo_jogador.id, novo_jogador.nome);
    //AQUI DEVE COMEÇAR O JOGO

    fclose(file);
    system("pause");
}

/*
void main(){
	adicionar_jogador();
}*/
