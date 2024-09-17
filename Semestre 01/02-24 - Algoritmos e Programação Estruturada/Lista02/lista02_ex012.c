/* Algoritmos e Programação Estruturada
1º Semestre. Aluno =  Natanael Ferreira Neves
Lista de Exercícios 02*/

#include <stdio.h>
#include <locale.h>
#include <stdbool.h>

int main(){
	setlocale(LC_ALL, "");
	//Faça um algoritmo para ler: nª conta cliente, débito  e crédito. Após, calcular e escrever o saldo atual (saldo_atual = saldo - debito + credito)
	//Também testar se saldo atual maior ou igual a 0, escrever positivo, se não Negativo
	
	bool operar = true;
	bool ciclo = true;
	int num_conta, saldo = 0, op, credito, debito;
	
	
    printf("Transações Bancárias do Tanael\t\n");
	
	printf("Qual conta operar? ");
	scanf("%d", &num_conta);
          
	while ( operar ) {
		int valida(){
			while (ciclo != 1 || ciclo != 0){
				  printf("Deseja continuar? (1 - SIM | 0 - NÃO) ");
            	  scanf("%d", &ciclo);
            	  if (ciclo == 1){
			   	  	 break;
			   		 //continue;	
		          } else if (ciclo == 0){
			  	  	printf("\nAgradeçemos pela preferência!!!\nVolte sempre!!!");
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
		
		printf("\nQual operação deseja na conta %d\n", num_conta);
        printf("|01 - Depositar\t| 02 - Sacar|\t03 - Mostrar saldo|\t04 - Sair|\n");
        printf("Entre com a opção desejada: ");
		scanf("%d", &op);
          
        switch (op){
        	case 1:
                printf("\nValor a ser depositado: R$ ");
                scanf("%d", &credito);
                saldo = saldo += credito;
                printf("Valor de R$ %.2f creditado com sucesso na conta: %d", (float) credito, num_conta);
				printf("\nO saldo atual é de R$ %.2f.\n", (float) saldo);
				valida();
				break;
				                      
		    case 2:
		    	if (saldo  == 0){
		    		printf("\nNecessário realizar um primeiro aporte\nPara após realizar transações de retirada!\n");
                    break;
                    continue;
                } else {
                	printf("\nValor a ser sacado: R$ ");
                    scanf("%d", &debito);
                    if (saldo - debito < 0){
                    	printf("\nOperação não completada\nSaldo Insuficiente!");
				    } else{
				    	saldo = saldo -= debito;
						printf("Saque de R$ %.2f realizado com sucesso!", (float) debito);
                        printf("\nO saldo atual é de R$ %.2f.\n", (float) saldo);
                        break;
				    }
     			}
     			valida();
     			break;
                      
            case 3:
		        printf("\nO saldo da atual da conta: %d é R$ %.2f.\n", num_conta, (float) saldo);
				break;
	        
			case 4:
				printf("Agradeçemos pela preferência!!!\nVolte sempre!!!");
                operar = false;
                break;
                      
			default:
                printf("Operação inválida!");
                break;
        }
    }    
	return 0;
}
