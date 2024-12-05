
#include <stdio.h>
#include <stdlib.h>

typedef struct Aluno {
    char nome[100];
    int faltas;
    float nota;
} aluno_t;

int main()
{
    aluno_t *aluno;
    aluno = malloc(sizeof(aluno_t));
    if (aluno == NULL) {
        printf("Memória não alocada\n");
        return 1;
    }

    int total_aulas; 
    printf("Digite o total de aulas ministradas: ");
    scanf("%d", &total_aulas);
    fflush(stdin);

    printf("Entre com o nome do aluno: ");
    fgets(aluno->nome, 100, stdin);
    
    printf("Quantas faltas? ");
    scanf("%d", &aluno->faltas);
    fflush(stdin);
    
    printf("Qual a nota? ");
    scanf("%f", &aluno->nota);


    float frequencia = ((float)(total_aulas - aluno->faltas) / total_aulas) * 100;

    if (aluno->nota >= 7.0 && frequencia >= 75.0) {
        printf("Aluno %sfoi aprovado! Nota: %.2f, Frequência: %.2f%%\n", aluno->nome, aluno->nota, frequencia);
    } else {
        printf("Aluno %sfoi reprovado! Nota: %.2f, Frequência: %.2f%%\n", aluno->nome, aluno->nota, frequencia);
    }

    free(aluno);

    return 0;
}

