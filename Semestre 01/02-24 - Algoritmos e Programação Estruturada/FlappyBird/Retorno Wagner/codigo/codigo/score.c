#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <stdbool.h>

#define LARGURAC 10  // Largura da caixa
#define TAM 50
#define NORMAL "\x1B[0m"
#define INTENSO "\x1B[1m"
#define SUB "\x1B[4m"
#define PISCA "\x1B[5m"
#define LIMPA "\x1B[0m"

typedef struct jogador {
    int id; //gerado de forma aleat�ria pela biblioteca time e stdlib
    char nome[100];
    int partidas;
    int pontuacoes[100]; // M�ximo de 100 partidas, cada posi��o ser� o resultado de uma partida
    int pontuacao_total; //soma o resultado das partidas
} jogadores_t;


bool verificar_registros(){ // Verifica se h� registros no arquivo
    FILE *file = fopen("data.dat", "rb");
    if (file == NULL) {
        return false; //Falso significa que o arquivo n�o foi criado, logo n�o temos registro
    }

    jogadores_t jogador;
    bool possui_registros = fread(&jogador, sizeof(jogadores_t), 1, file) > 0;
    fclose(file);
    return possui_registros; //Positivo significa que o arquivo foi criado, logo temos registro
}

// Gera um ID �nico para o jogador
int gerar_id_unico() {
    FILE *file = fopen("data.dat", "rb");
    if (file == NULL) {
        return rand() % 10 + 1; // Retorna um ID aleat�rio entre 1 e 10 se o arquivo ainda n�o existir
    }

    jogadores_t jogador;
    int ids_usados[10] = {0};
    int total_jogadores = 0;

    while (fread(&jogador, sizeof(jogadores_t), 1, file)) {
        ids_usados[jogador.id - 1] = 1;
        total_jogadores++;
    }

    fclose(file);

    if (total_jogadores >= 10) {
        printf("Limite de 10 jogadores atingido!\nN�o � poss�vel adicionar novos jogadores.\n");
        return -1;
    }

    int novo_id;
    do {
        novo_id = rand() % 10 + 1;
    } while (ids_usados[novo_id - 1] == 1);

    return novo_id;
}

void adicionar_jogador(){
    srand(time(NULL));

    int id = gerar_id_unico();
    if (id == -1) {
        //return;
        system("pause");
    }

    FILE *file = fopen("data.dat", "ab");
    if (file == NULL) {
        perror("Erro ao gerar o arquivo!");
        return;
        //system("pause");
    }

    jogadores_t novo_jogador;
    novo_jogador.id = id;

    printf("Digite o nome do jogador: ");
    fflush(stdin);
    fgets(novo_jogador.nome, sizeof(novo_jogador.nome), stdin);
    novo_jogador.nome[strcspn(novo_jogador.nome, "\n")] = '\0';

    novo_jogador.partidas = 0;
	novo_jogador.pontuacao_total = 0;
    int i;
	for(i = 0; i < 100; i++){
		novo_jogador.pontuacoes[i] = 0;
	}

    fwrite(&novo_jogador, sizeof(jogadores_t), 1, file);
    printf("Id: %d\tJogador %s adicionado com sucesso!\n", novo_jogador.id, novo_jogador.nome);
    fclose(file); 

    //AQUI DEVE COME�AR O JOGO
    int pontuacao = flappy();
    file = fopen("data.dat", "rb+");
    if (file == NULL) {
        perror("Erro ao abrir o arquivo para atualiza��o!");
        return;
    }

    bool encontrado = false;
    while (fread(&novo_jogador, sizeof(jogadores_t), 1, file)) {
        if (novo_jogador.id == id) {
            encontrado = true;
            // Atualiza as informa��es do jogador
            novo_jogador.pontuacoes[novo_jogador.partidas] = pontuacao; // Registra a pontua��o
            novo_jogador.partidas++;                                   // Incrementa o n�mero de partidas
            novo_jogador.pontuacao_total += pontuacao;                 // Atualiza a pontua��o total
            
            // Move o cursor para reescrever os dados do jogador no arquivo
            long posicao = ftell(file) - sizeof(jogadores_t);
            fseek(file, posicao, SEEK_SET);
            fwrite(&novo_jogador, sizeof(jogadores_t), 1, file);
            printf("Pontua��o inicial registrada com sucesso para o jogador %s!\n", novo_jogador.nome);
            break;
        }
    }

    if (!encontrado) {
        printf("Erro: Jogador n�o encontrado no arquivo ap�s adicionar!\n");
    }

    fclose(file);
    system("pause");
}

void jogar_novamente(){
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
            int pontuacao = flappy();
            //PARTE DEBAIXO SAI
			//printf("Digite a pontua��o obtida na nova partida: ");
            //scanf("%d", &pontuacao);
            
            //AQUI A PONTUA��O DEVE RECEBER O RESULTADO DA PARTIDA
            

            if (jogador.partidas < 100) {
                jogador.pontuacoes[jogador.partidas] = pontuacao;
                jogador.partidas++;
                jogador.pontuacao_total += pontuacao;

                long posicao = ftell(file) - sizeof(jogadores_t);
                fseek(file, posicao, SEEK_SET);
                fwrite(&jogador, sizeof(jogadores_t), 1, file);

                printf("Pontua��o registrada com sucesso!\n");
            } else {
                printf("O jogador j� atingiu o limite m�ximo de 100 partidas.\n");
            }
            break;
        }
    }

    if (!encontrado) {
        printf("Jogador com ID %d n�o encontrado.\n", id);
    }

    fclose(file);
    system("pause");
}


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
    char buffer[100]; // Buffer para o n�mero convertido em string

    // Converte o n�mero apontado por 'num' para string
    snprintf(buffer, sizeof(buffer), "%d", *num);

    // Chama a fun��o centralizar_nomepadrao passando o n�mero como string
    centralizar_nomepadrao(buffer, tam, g);
}


void centralizar_textoind(char *texto){
	int k, esp;
	esp = (48 - strlen(texto) - 4) / 2;
	printf("\t\t\xBA%s%s%s:", PISCA, texto, LIMPA);
	for(k = 0; k < esp; k++) {
		printf(" ");
	}
}


char* bar(int pontos) {
    // Aloca mem�ria para a string (inclui +1 para o caractere nulo '\0')
    char* barra = (char*)malloc((pontos + 1) * sizeof(char));
    if (barra == NULL) { // Verifica falha na aloca��o de mem�ria
        printf("Erro ao alocar mem�ria.\n");
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
        
            printf("\n\t\t\xBA%s************ %sINFORMA��ES DO JOGADOR%s ", INTENSO, SUB, LIMPA);
            printf("%s************%s\xBA\n", INTENSO, LIMPA);
            centralizar_textoind("ID");
            printf("% 24d\xBA\n",jogador.id);
            centralizar_textoind("NOME");
			printf("%s% 23s%s\xBA\n", INTENSO, jogador.nome, LIMPA);
            centralizar_textoind("Partidas Jogadas");
			printf("% 17d\xBA\n", jogador.partidas);
            //centralizar_texto("Pontua��es por partida");            
			int i; // Declare e inicialize antes
			for (i = 0; i < jogador.partidas; i++) {
    			if (jogador.pontuacoes[i] != 0) {
   				char partida[11];
   				sprintf(partida, "Partida % .2d", i + 1);
    				   centralizar_textoind(partida);
        			   printf("% .2d", jogador.pontuacoes[i]);				
        			   char * grafico = bar(jogador.pontuacoes[i]);	
        			   centralizar_nomepadrao(grafico, 17, 0);
					   		
        			   printf("\xBA\n");				
    			}
			}
            centralizar_textoind("Pontua��o Total");
			printf("% 18d\xBA\n", jogador.pontuacao_total);
            linhacaixa();
            break;
        }
    }
    if (!encontrado) {
        printf("Jogador com ID %d n�o encontrado.\n", id);
    }
    fclose(file);
    printf("\n");
    //system("pause");
}


void visualizar_todos(){
    FILE *file = fopen("data.dat", "rb");
    if (file == NULL){
        printf("Nenhum jogador cadastrado ainda...\n");
        //system("pause");
    } else{
    jogadores_t jogador;
    printf("\n===============*** ");
    centralizar_nomepadrao("TODOS OS JOGADORES", TAM, 0);
    printf(" ***===============\n");
    centralizar_nomepadrao("ID", 8, 1);
	centralizar_nomepadrao("NOME", TAM, 1);
	centralizar_nomepadrao("Partidas", 11, 1);
	centralizar_nomepadrao("PONTUA��O TOTAL", 19, 1);
    while (fread(&jogador, sizeof(jogadores_t), 1, file)) {
    	int tam = strlen(jogador.nome);
    	if (tam < 50){
    		tam = 50;
		}
    	printf("\n");
    	centralizar_numpadrao(&jogador.id, 8, 1);
        //printf("\n\xBA% .d\t",jogador.id);
        centralizar_nomepadrao(jogador.nome, TAM, 1);
        centralizar_numpadrao(&jogador.partidas, 11, 1);
        //printf("% .9d\t|", jogador.partidas);
		centralizar_numpadrao(&jogador.pontuacao_total, 19, 1);     
    }
    printf("\n========================================================================================\n");

    fclose(file);
    char resp;
    printf("Pontua��o individual: (s|n)");
    fflush(stdin);
    resp = getchar();
    switch(resp){
    	case 's':
    		visualizar_individual();
    		break;
   		case 'n':
   			//menu();
   			break;
  		default:
		  printf("Op��o Inv�lida\nRetornando ao menu inicial...");
		  break;
		  //menu();	
	}
		}
    system("pause");
}


