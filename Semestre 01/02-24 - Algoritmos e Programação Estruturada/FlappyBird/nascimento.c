#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

typedef struct {
    int dia;
    int mes;
    int ano;
} data_t;


data_t leitura_nasc() {
    data_t nasc;

    printf("\tEntre com a data de seu nascimento: \n");
    printf("Dia: ");
    scanf("%d", &nasc.dia);
    printf("M�s: ");
    scanf("%d", &nasc.mes);
    printf("Ano: ");
    scanf("%d", &nasc.ano);

    return nasc;
}


int dias_de_vida(data_t nascimento) {
    time_t now = time(0);
    struct tm *tlocal = localtime(&now);

    
    data_t data_atual;
    data_atual.dia = tlocal->tm_mday;
    data_atual.mes = tlocal->tm_mon + 1; 
    data_atual.ano = tlocal->tm_year + 1900;

   
    struct tm data_nascimento = {0};
    data_nascimento.tm_mday = nascimento.dia;
    data_nascimento.tm_mon = nascimento.mes - 1; 
    data_nascimento.tm_year = nascimento.ano - 1900;

   
    time_t t_nascimento = mktime(&data_nascimento);
    time_t t_atual = mktime(tlocal);

    // Calcula a diferen�a de segundos e converte para dias
    double diferenca = difftime(t_atual, t_nascimento);
    int dias = diferenca / (60 * 60 * 24);

    return dias;
}

void main(void) {
	setlocale(LC_ALL, "");

    data_t nascimento = leitura_nasc();

    int dias = dias_de_vida(nascimento);
    char velho_demais[1000] = "\tEu nasci h� dez mil dias atr�s\n\tE n�o tem nada nesse mundo\n\tQue eu n�o saiba demais\n\t�, eu nasci h� dez mil dias atr�s\n\tE n�o tem nada nesse mundo\n\tQue eu n�o saiba demais\n\tEu vi Cristo ser crucificado\n\tO amor nascer e ser assassinado\n\tEu vi as bruxas pegando fogo\n\tPra pagarem seus pecados, eu vi\n\tEu vi Mois�s cruzar o Mar Vermelho\n\tVi Maom� cair na terra de joelhos\n\tEu vi Pedro negar Cristo por tr�s vezes\n\tDiante do espelho, eu vi\n\tEu nasci (eu nasci)\n\tH� dez mil dias atr�s\n\t(Eu nasci h� dez mil dias)\n\tE n�o tem nada nesse mundo\n\tQue eu n�o saiba demais...\n"; 
    if (dias <= 0){
    	printf("� o Button?\n");
    	exit(0);
	} else if (dias >= 10000){
		 
		printf("%s", velho_demais);
	}
    printf("(%d dias).\n", dias);
}

