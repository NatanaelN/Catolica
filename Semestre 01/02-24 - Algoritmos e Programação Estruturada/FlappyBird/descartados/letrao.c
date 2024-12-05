#include <stdio.h>
#include <unistd.h> // Para usar a função sleep

#define LARGURA 30  // Largura da caixa
#define ALTURA 10 // Altura da caixa


#include <stdio.h>

void letrao(char letra) {
    switch (letra) {
        case 'F':
            printf("FFFFFFF\n");
            printf("F      \n");
            printf("F      \n");
            printf("FFFF   \n");
            printf("F      \n");
            printf("F      \n");
            printf("F      \n");
            break;

        case 'L':
            printf("L      \n");
            printf("L      \n");
            printf("L      \n");
            printf("L      \n");
            printf("L      \n");
            printf("L      \n");
            printf("LLLLLLL\n");
            break;

        case 'A':
            printf("   A   \n");
            printf("  A A  \n");
            printf(" A   A \n");
            printf("AAAAAAA\n");
            printf("A     A\n");
            printf("A     A\n");
            printf("A     A\n");
            break;

        case 'P':
            printf("PPPPPP \n");
            printf("P     P\n");
            printf("P     P\n");
            printf("PPPPPP \n");
            printf("P      \n");
            printf("P      \n");
            printf("P      \n");
            break;

        case 'Y':
            printf("Y     Y\n");
            printf(" Y   Y \n");
            printf("  Y Y  \n");
            printf("   Y   \n");
            printf("   Y   \n");
            printf("   Y   \n");
            printf("   Y   \n");
            break;

        case 'B':
            printf("BBBBB  \n");
            printf("B    B \n");
            printf("B    B \n");
            printf("BBBBB  \n");
            printf("B    B \n");
            printf("B    B \n");
            printf("BBBBB  \n");
            break;

        case 'I':
            printf(" IIIII \n");
            printf("   I   \n");
            printf("   I   \n");
            printf("   I   \n");
            printf("   I   \n");
            printf("   I   \n");
            printf(" IIIII \n");
            break;

        case 'R':
            printf("RRRRR  \n");
            printf("R    R \n");
            printf("R    R \n");
            printf("RRRRR  \n");
            printf("R   R  \n");
            printf("R    R \n");
            printf("R     R\n");
            break;

        case 'D':
            printf("DDDDD  \n");
            printf("D    D \n");
            printf("D     D\n");
            printf("D     D\n");
            printf("D     D\n");
            printf("D    D \n");
            printf("DDDDD  \n");
            break;

    }
}

void main(){
	char nome[] = "FLAPPYBIRD";
	int i;
    while (nome[i] != '\0'){
		if (nome[i] != ' ') { // Ignora espaços
			letrao(nome[i]);
			sleep(1);
			//system("cls");
        }
        //printf("\n"); // Separação entre as letras
        i++;	
    }
}
