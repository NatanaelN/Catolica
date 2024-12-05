#include <stdio.h>
#include <string.h>

void tela_instrucao() {
    system("cls");
    printf("\t\tBem vindo ao Flappy Bird!\n");
    printf("\t\t\tInstrucees:\n");
    printf("\t\t1. Pressione espaco para flutuar.\n");
    printf("\t\t2. Nao bata nos pilares!\n");
    printf("\t\t3. Pontue passando pelos espacos.\n");
    system("pause");
    adicionar_jogador();
}

/*void main(void){

	printf("\n\xC9\xCD\xBB\n");
	printf("\xBA \xBA\n");
	printf("\xC8\xCD\xBC\n");
	system("pause");
	showWelcomeScreen();
	
}*/
