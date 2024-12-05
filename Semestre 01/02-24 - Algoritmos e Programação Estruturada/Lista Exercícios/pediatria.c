/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Estrutura do Paciente
typedef struct Paciente {
    char nome[100];
    int idade;
    float peso;
    float altura;
    char genero;
    struct Paciente *prox;
} paciente_t;

// Enum para IMC Infantil
typedef enum {
    ABAIXO,
    NORMAL,
    SOBREPESO,
    OBESIDADE
} IMCInfantil;


paciente_t *primeiro_paciente(char *nome, int idade, float peso, float altura, char genero) {
    paciente_t *novo = (paciente_t *)malloc(sizeof(paciente_t));
    if (!novo) {
        printf("Erro ao alocar memória.\n");
        exit(1);
    }

    strncpy(novo->nome, nome, 100);
    novo->idade = idade;
    novo->peso = peso;
    novo->altura = altura;
    novo->genero = genero;
    novo->prox = NULL;

    return novo;
}

// Função para adicionar um novo paciente ao final da lista
void novo_paciente(paciente_t *primeiro, char *nome, int idade, float peso, float altura, char genero) {
    paciente_t *atual = primeiro;

    // Percorre a lista até encontrar o último elemento
    while (atual->prox != NULL) {
        atual = atual->prox;
    }

    // Cria um novo paciente
    paciente_t *novo = (paciente_t *)malloc(sizeof(paciente_t));
    if (!novo) {
        printf("Erro ao alocar memória.\n");
        exit(1);
    }

    strncpy(novo->nome, nome, 100);
    novo->idade = idade;
    novo->peso = peso;
    novo->altura = altura;
    novo->genero = genero;
    novo->prox = NULL;

    // Adiciona o novo paciente ao final da lista
    atual->prox = novo;
}

// Função para calcular o IMC Infantil
IMCInfantil calcula_imc(paciente_t *crianca) {
    // Verifica se os dados do paciente são válidos
    if (!crianca || crianca->idade < 6 || crianca->idade > 15) {
        printf("Dados do paciente inválidos ou idade fora do intervalo suportado (6-15 anos).\n");
        return ABAIXO;
    }

    // Calcula o IMC
    float imc = crianca->peso / (crianca->altura * crianca->altura);

    // Tabelas de referência para meninos e meninas
    const float limites_meninos[10][4] = {
        {14.5, 16.6, 18.0, 100.0}, //6
		{15.0, 17.3, 19.1, 100.0}, //7
		{15.6, 16.7, 20.3, 100.0}, //8
        {16.1, 18.8, 21.4, 100.0}, //9
		{16.7, 19.6, 22.5, 100.0}, //10
		{17.2, 20.3, 23.7, 100.0}, //11
        {17.8, 21.1, 24.8, 100.0}, //12
		{18.5, 21.9, 25.9, 100.0}, //13
		{19.2, 22.7, 26.9, 100.0}, //14
        {19.9, 23.6, 27.7, 100.0}}; //15
        
    const float limites_meninas[10][4] = {
        {14.3, 16.1, 17.4, 100.0}, //6
		{14.9, 17.1, 18.9, 100.0}, //7
		{15.6, 18.1, 20.3, 100.0}, //8
        {16.3, 19.1, 21.7, 100.0}, //9 
		{17.0, 20.1, 23.2, 100.0}, //10
		{17.6, 21.1, 24.5, 100.0}, //11
        {18.3, 22.1, 25.9, 100.0}, //12 
		{18.9, 23.0, 27.7, 100.0}, //13 
		{19.3, 23.8, 27.9, 100.0}, //14
        {19.6, 24.2, 28.8, 100.0}}; //15

  
    const float (*limites)[4] = (crianca->genero == 'M') ? limites_meninos : limites_meninas;

    
    int indice = crianca->idade - 6;
    float limite_abaixo = limites[indice][0];
    float limite_normal = limites[indice][1];
    float limite_sobrepeso = limites[indice][2];

    // Classifica o IMC
    if (imc < limite_abaixo) {
        return ABAIXO;
    } else if (imc <= limite_normal) {
        return NORMAL;
    } else if (imc <= limite_sobrepeso) {
        return SOBREPESO;
    } else {
        return OBESIDADE;
    }
}

// Testando o código
int main() {
    // Criação do primeiro paciente
    paciente_t *lista = primeiro_paciente("Felipe", 10, 35.0, 1.4, 'M');

    
    novo_paciente(lista, "Wagner", 8, 30.0, 1.35, 'F');
    novo_paciente(lista, "Bruna S", 15, 60.0, 1.6, 'M');

    // Itera pela lista e calcula o IMC de cada paciente
    paciente_t *atual = lista;
    while (atual != NULL) {
        IMCInfantil imc_class = calcula_imc(atual);
        printf("Paciente: %s, IMC: %s\n", atual->nome,
               (imc_class == ABAIXO) ? "Abaixo do Normal" :
               (imc_class == NORMAL) ? "Normal" :
               (imc_class == SOBREPESO) ? "Sobrepeso" : "Obesidade");
        atual = atual->prox;
    }

    return 0;
}

