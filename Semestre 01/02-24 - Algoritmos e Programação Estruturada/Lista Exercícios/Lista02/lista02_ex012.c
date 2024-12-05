/* Algoritmos e Programa��o Estruturada
1� Semestre. Aluno =  Natanael Ferreira Neves
Lista de Exerc�cios 02*/

#include <stdio.h>
#include <locale.h>
#include <stdbool.h>

int main(){
	setlocale(LC_ALL, "");
	//Fa�a um algoritmo para ler: n� conta cliente, d�bito  e cr�dito. Ap�s, calcular e escrever o saldo atual (saldo_atual = saldo - debito + credito)
	//Tamb�m testar se saldo atual maior ou igual a 0, escrever positivo, se n�o Negativo
	
	bool operar = true;
	bool ciclo = true;
	int num_conta, saldo = 0, op, credito, debito;
	
	
    printf("Transa��es Banc�rias do Tanael\t\n");
	
	printf("Qual conta operar? ");
	scanf("%d", &num_conta);
          
	while ( operar ) {
		int valida(){
			while (ciclo != 1 || ciclo != 0){
				  printf("Deseja continuar? (1 - SIM | 0 - N�O) ");
            	  scanf("%d", &ciclo);
            	  if (ciclo == 1){
			   	  	 break;
			   		 //continue;	
		          } else if (ciclo == 0){
			  	  	printf("\nAgrade�emos pela prefer�ncia!!!\nVolte sempre!!!");
				    ciclo = false;
					operar = false;
  	     			break;
  	     			
			      } else {
			  	  	printf("\nSistema encerrado por mal uso!\nTente novamente mais tarde...");
			  		ciclo = false;
			        operar = false;
			  		break;
			      }
			}				  
		}
		
		printf("\nQual opera��o deseja na conta %d\n", num_conta);
        printf("|01 - Depositar\t| 02 - Sacar|\t03 - Mostrar saldo|\t04 - Sair|\n");
        printf("Entre com a op��o desejada: ");
		scanf("%d", &op);
          
        switch (op){
        	case 1:
                printf("\nValor a ser depositado: R$ ");
                scanf("%d", &credito);
                saldo = saldo += credito;
                printf("Valor de R$ %.2f creditado com sucesso na conta: %d", (float) credito, num_conta);
				printf("\nO saldo atual � de R$ %.2f.\n", (float) saldo);
				valida();
				break;
				                      
		    case 2:
		    	if (saldo  == 0){
		    		printf("\nNecess�rio realizar um primeiro aporte\nPara ap�s realizar transa��es de retirada!\n");
                    break;
                    continue;
                } else {
                	printf("\nValor a ser sacado: R$ ");
                    scanf("%d", &debito);
                    if (saldo - debito < 0){
                    	printf("\nOpera��o n�o completada\nSaldo Insuficiente!");
				    } else{
				    	saldo = saldo -= debito;
						printf("Saque de R$ %.2f realizado com sucesso!", (float) debito);
                        printf("\nO saldo atual � de R$ %.2f.\n", (float) saldo);
                        break;
				    }
     			}
     			valida();
     			break;
                      
            case 3:
		        printf("\nO saldo da atual da conta: %d � R$ %.2f.\n", num_conta, (float) saldo);
				break;
	        
			case 4:
				printf("Agrade�emos pela prefer�ncia!!!\nVolte sempre!!!");
                operar = false;
                break;
                      
			default:
                printf("Opera��o inv�lida!");
                break;
        }
    }    
	return 0;
}
