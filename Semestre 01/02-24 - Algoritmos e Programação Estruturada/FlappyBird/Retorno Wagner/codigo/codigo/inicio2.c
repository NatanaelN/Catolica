/*#include <stdio.h>

#include "creditos.c"
#include "msg.c"
#include "testetela.c"
#include "score.c"
#include <FlappyBird.c>*/

#include <stdio.h>
#include <stdbool.h>

#define INTENSO "\x1B[1m"
#define PISCA "\x1B[5m"
#define PISCAAM "\x1B[5m\033[33m"
#define LIMPA "\x1B[0m"


void letreiro(void){
		char flutua[7][60] = {
		"FFFFFFF\tL      \t   A   \tPPPPPP \tPPPPPP \tY     Y\n",
		"F      \tL      \t  A A  \tP     P\tP     P\t Y   Y \n",
		"F      \tL      \t A   A \tP     P\tP     P\t  Y Y  \n",
		"FFFF   \tL      \tAAAAAAA\tPPPPPP \tPPPPPP \t   Y   \n",
		"F      \tL      \tA     A\tP      \tP      \t   Y   \n",
		"F      \tL      \tA     A\tP      \tP      \t   Y   \n",
		"F      \tLLLLLLL\tA     A\tP      \tP      \t   Y   \n"
	};

	char passaro[7][60] = {
		"BBBBB  \t IIIII \tRRRRR  \tDDDDD  \n",
		"B    B \t   I   \tR    R \tD    D \n",
		"B    B \t   I   \tR    R \tD     D\n",
		"BBBBB  \t   I   \tRRRRR  \tD     D\n",
		"B    B \t   I   \tR   R  \tD     D\n",
		"B    B \t   I   \tR    R \tD    D \n",
		"BBBBB  \t IIIII \tR     R\tDDDDD  \n"
	};

	int i, k;
	for (i=0; i<7; i++) {
		/*if (i % 2 != 0){
			printf("%s%s%s", PISCA, flutua[i], LIMPA);
		} else {
			printf("%s", flutua[i]);
		}*/
		printf("%s%s%s", INTENSO, flutua[i], LIMPA);
	}
	for(i=0; i<7; i++) {
		for (k=0; k<48; k++) {
			printf(" ");
		}
		if (i % 2 == 0){
		   printf("%s%s%s",PISCAAM, passaro[i], LIMPA);
		} else{
			printf("%s%s%s",PISCA, passaro[i], LIMPA);
		}
		
	}
	
}

void menu(){
	int op;
    void linhacaixa(){
        printf("\t\t");
        int i;
        for (i = 0; i < 33; i++) { //cria a parte de cima/baixo da caixa
            printf("\xCD");
        }
    }

    do {
		bool registros_existem = verificar_registros();
	   	system("cls"); 
	   	system("chcp 850 > nul"); // Configura o c digo de p gina para gr ficos (Windows)
	   	printf("\x1B[0m"); // Reseta estilos ANSI
    	letreiro();
        // Exibe o menu
		linhacaixa();
    	printf("\n\t\t\xBA\t[%s1%s]\t%sNOVO JOGO%s\t\xBA\n", PISCA, LIMPA, PISCA, LIMPA);
		if(registros_existem) {
			printf("\t\t\xBA\t[%s2%s]\t%sJOGAR NOVAMENTE%s\t\xBA\n", PISCA, LIMPA, PISCA, LIMPA);
		}
    	printf("\t\t\xBA\t[%s3%s]\tPLACAR\x1B[0m\t\t\xBA\n", PISCA, LIMPA);
    	printf("\t\t\xBA\t[%s4%s]\tMENSAGEM\x1B[0m\t\xBA\n", PISCA, LIMPA);
    	printf("\t\t\xBA\t[%s5%s]\tCREDITOS\x1B[0m\t\xBA\n", PISCA, LIMPA);
    	printf("\t\t\xBA\t[%s6%s]\tSAIR\t\x1B[0m\t\xBA\n", PISCA, LIMPA);
    	linhacaixa();
    
    	scanf("%d", &op);

        // Valida a entrada
        if (op < 1 || op > 6) {
            printf("Opção inválida! Por favor, escolha uma opção entre 1 e 6.\n");
            system("cls");
            continue;
        }
        // Processa as op  es
    	switch(op){
			case 1:
				system("cls");
				tela_instrucao();
            	break;
			case 2:
				system("cls");
             if (registros_existem) {
                    jogar_novamente();
                } else {
                    printf("Nenhum jogador cadastrado para jogar novamente.\n");
                }
				//passaro();
            	break;
			case 3:
				system("cls");
				visualizar_todos();
            	break;
			case 4:
        		system("cls");
            	msg();
            	break;
			case 5:
        		system("cls");
            	creditos();
           		break;
			case 6:
				printf("Saindo do jogo...");
            	exit(1);
            	break;
    		}

    //} while (opcao != 6); // Loop enquanto a op  o n o for 6 (sair)
    } while (op != 6); // Loop enquanto a op  o n o for 6 (sair)
}



/*void main(void){

	menu();

}*/
