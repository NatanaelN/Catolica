#include <stdio.h>
#include <locale.h>
/*Faça um programa que simule a urna eletrônica:
tela 
1 Jair Rodrigues
2 Carlos Luz
3 Neves Rocha
4 Nulo
5 Branco*/

int main(){
	setlocale(LC_ALL,"");
	
    int candidato, voto_jr = 0, voto_cl = 0, voto_nr = 0, voto_null = 0, voto_white = 0, total_votos = 0;
    float perc_null, perc_white;

    do {
        printf("\t******************\n");
        printf("\t1 - Jair Rodrigues\n");
        printf("\t2 - Carlos Luz\n");
        printf("\t3 - Neves Rocha\n");
        printf("\t4 - Nulo\n");
        printf("\t5 - Branco\n");
        printf("\t******************");
        
        printf("\nSeu voto vai para qual candidato: ");
        scanf("%d", &candidato);
        
        switch (candidato){
               case 1:
                    voto_jr += 1;
                    break;
               case 2:
                    voto_cl += 1;
                    break;
               case 3:
                    voto_nr += 1;
                    break;
               case 4:
                    voto_null += 1;
                    break;
               case 5:
                    voto_white += 1;
                    break;
               case 6:
                    break;
               default:
                       printf("\nNúmero digitado inválido\nPress 6 para sair...\n");
                       break;
               }
               if (candidato >=1 && candidato <=5){
                             total_votos += 1;
               }
    
               } while (candidato != 6);
    perc_null = voto_null / total_votos;
    perc_white = voto_white / total_votos;
    
    //o programa deverá ler os votos dos eleitores e quando for entrado 6, apresentar as seguintes informações
    //o numero de vtoso de cada candidato
    printf("\t******************\n");
    printf("Candidato: Jair Rodrigues: %d de votos\n", voto_jr);
    printf("Candidato: Carlos Luz: %d de votos\n", voto_cl);
    printf("Candidato: Neves Rocha: %d de votos\n", voto_nr);
    printf("Votos Nulo: %.2f de votos\n", perc_null);
    printf("Votos em Branco: %.2f de votos\n", perc_white);
    printf("******************\n");
    if (voto_jr > voto_cl && voto_cl > voto_nr){
    	printf("\nCaptando um total de %d votos. O Vencedor da eleição é: Jair Rodrigues\n", voto_jr);
	} else if (voto_jr < voto_cl && voto_cl > voto_nr) {
		printf("\nCaptando um total de %d votos. O Vencedor da eleição é: Carlos Luz\n", voto_cl);
	} else if (voto_nr >){
		printf("\nCaptando um total de %d votos. O Vencedor da eleição é: Neves Rocha\n", voto_nr);
	}
	
    printf("\t******************\n");
    
    //a porcentagem de votos nulo
    //a porcentagem de votos branco
    //o candidato vencedor
    return 0;
}
