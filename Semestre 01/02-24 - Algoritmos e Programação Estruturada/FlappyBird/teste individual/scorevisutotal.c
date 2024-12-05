
#include "scorevisu1.c" //excluir importação
#define NORMAL "\x1B[0m"
#define INTENSO "\x1B[1m"
#define SUB "\x1B[4m"

void visualizar_todos() {
    FILE *file = fopen("data.dat", "rb");
    if (file == NULL) {
        printf("Nenhum jogador cadastrado ainda...\n");
        system("pause");
    } else {
    	jogadores_t jogador;
    	printf("\n=== TODOS OS JOGADORES ===\n");
    	printf("|  ID\t||\t\tNOME\t\t||PARTIDAS|| PONTUACAO TOTAL |\n");
    	while (fread(&jogador, sizeof(jogadores_t), 1, file)) {
    		
    	//padronizar nome em 34 caracteres no máximo
        printf("|% .5d\t||%s\t||%d\t||%d\t|\n",
               jogador.id, jogador.nome, jogador.partidas, jogador.pontuacao_total);
    	}

    	fclose(file);
    	char resp;
    	printf("Pontuação individual: (s|n)\n");
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
		  		printf("Opção Inválida\nRetornando ao menu inicial...");
		  		break;
		  		//menu();	
		}
	}
    system("pause");
}
/*
void main(){
	visualizar_todos();
}*/
