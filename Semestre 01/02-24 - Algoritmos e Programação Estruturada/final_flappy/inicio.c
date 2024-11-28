#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#include "configs.h"
#include "score.h"
#include "instrucao.h"
#include "msg.h"
#include "creditos.h"


void letreiro(void) {
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
    for (i = 0; i < 7; i++) {
        printf("%s%s%s", INTENSO, flutua[i], LIMPA);
    }
    for (i = 0; i < 7; i++) {
        for (k = 0; k < 48; k++) {
            printf(" ");
        }
        if (i % 2 == 0) {
            printf("%s%s%s",PISCAAM, passaro[i], LIMPA);
        } else {
            printf("%s%s%s",PISCA, passaro[i], LIMPA);
        }
    }
}

void menu() {
    int op;
    criacao_caixa(33);

    do {
        bool registros_existem = verificar_registros();
        system("cls");
        system("chcp 850 > nul");

        printf("%s", LIMPA);
        letreiro();

        criacao_caixa(33);
        printf("\n\t\t\xBA\t[%s1%s]\t%sNOVO JOGO%s\t\xBA\n", PISCA, LIMPA,
               PISCA, LIMPA);
        if (registros_existem) {
            printf("\t\t\xBA\t[%s2%s]\t%sJOGAR NOVAMENTE%s\t\xBA\n", PISCA,
                   LIMPA, PISCAAM, LIMPA);
        }
        printf("\t\t\xBA\t[%s3%s]\tPLACAR\t\t\xBA\n", PISCA, LIMPA);
        printf("\t\t\xBA\t[%s4%s]\tMENSAGEM\t\xBA\n", PISCA, LIMPA);
        printf("\t\t\xBA\t[%s5%s]\tCREDITOS\t\xBA\n", PISCA, LIMPA);
        printf("\t\t\xBA\t[%s6%s]\tSAIR\t\t\xBA\n", PISCA, LIMPA);
        criacao_caixa(33);

        scanf("%d", &op);

        if (op < 1 || op > 6) {
            printf(
                "Opcao invalida! Por favor, escolha uma opcao entre 1 e 6.\n");
            system("cls");
            continue;
        }

        switch (op) {
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
            /*passaro();*/
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
                exit(EXIT_FAILURE);
            default:
                break;
        }
    } while (op != 6);
}
