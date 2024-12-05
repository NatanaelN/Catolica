#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

#include <stdio.h>

void numerozao(void) {
    // Representa��o dos n�meros 5 a 1 como arrays de strings
    char *num5[] = {
        " ***** ",
        "*      ",
        "*      ",
        " ***** ",
        "      *",
        "      *",
        " ***** "
    };

    char *num4[] = {
        "*    *",
        "*    *",
        "*    *",
        " *****",
        "     *",
        "     *",
        "     *"
    };

    char *num3[] = {
        " ***** ",
        "      *",
        "      *",
        " ***** ",
        "      *",
        "      *",
        " ***** "
    };

    char *num2[] = {
        " ***** ",
        "      *",
        "      *",
        " ***** ",
        "*      ",
        "*      ",
        " ***** "
    };

    char *num1[] = {
        "     * ",
        "    ** ",
        "   * * ",
        "     * ",
        "     * ",
        "     * ",
        " ***** "
    };

    // Vetor com ponteiros para os n�meros
    char **numeros[] = {num5, num4, num3, num2, num1};

    // La�o para exibir os n�meros em contagem regressiva
    int i, n;
    for(n = 0; n < 5; n++) { // Percorre os n�meros de 5 a 1
        for(i = 0; i < 7; i++) { // Exibe cada linha do n�mero atual
            printf("\t\t%s\n", numeros[n][i]);
            
        }
        Sleep(300);
        system("cls");
        //printf("\n"); // Linha em branco entre os n�meros
    }
}

int main() {
    numerozao();
    return 0;
}



