#include <stdio.h>
#include <unistd.h> // Para usar a função sleep
//#include "testetela.c"

#define LARGURA 10  // Largura da caixa
#define ALTURA 5 // Altura da caixa


#include <stdio.h>


// Função para desenhar a caixa e centralizar a letra
void caixa(char letra) {
    system("cls");

    // Desenha o topo da caixa
    int i;
    for (i = 0; i < LARGURA; i++) { //cria a parte de cima da caixa
        printf("xCD");
    }
    printf("\n");

    for (i = 0; i < ALTURA - 2; i++) { //cria  o corpo em si da caixa
        printf("xBA");

        // Espaços dentro da caixa
        if (i == (ALTURA - 2) / 2) { // Linha do meio para centralizar a letra
            int esp = (LARGURA - 2) / 2; // Espaço antes da letra
            int j;
            for (j = 0; j < esp - 1; j++) {
                printf(" ");
    		}
            printf("%c ", letra); // Exibe a letra
            if (letra == '\0'){
            	system("cls");
            	//showWelcomeScreen();
			}
            for (j = 0; j < esp - 1; j++) {
                printf(" ");
            }
        } else {
        	int j;
            for (j = 0; j < LARGURA - 2; j++) {
                printf(" ");
            }
        }
        printf("\xBA\n");
    }

    // Desenha a base da caixa
    for (i = 0; i < LARGURA; i++) {
        printf("\xCD");
    }
    printf("\n");
}

int main() {
    char nome[] = "321";
    int tamanho = sizeof(nome) / sizeof(nome[0]);
    
    int i;
    for (i = 0; i < tamanho; i++) {
    	if(nome[i] == '\0'){
    		system("cls");
    		break;
    		
		}
        caixa(nome[i]); // Desenha a caixa com a letra
        sleep(1);
    }
    return 0;
}
