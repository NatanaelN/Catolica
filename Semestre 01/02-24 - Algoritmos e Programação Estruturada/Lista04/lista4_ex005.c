#include <stdio.h>
#include <locale.h>


//funcao verificacao
//funcao somadivisores
int SomaDivisiores(int a){
    int i, soma = 0;
    while (a <= 0){
          printf("Favor inserir somente números positivos e inteiros\n");
          printf("Insira novo valor: ");
          scanf("%d", &a);
    }
    for (i = 1; i < a; i++){
        if (a % i == 0){
              soma += i;
        }   
    }
return soma;
}
int main(){
    setlocale(LC_ALL, "");
    /*5. Escreva um programa que leia 5 números inteiros positivos (utilize uma funçãao que leia esse n´umero e verifique
    se ele ´e positivo). Para cada n´umero informado escrever a soma de seus divisores (exceto ele mesmo). Utilize
    a fun¸c˜ao SomaDivisores para obter a soma:
    • Nome: SomaDivisores
    • Descri¸c˜ao: Calcula a soma dos divisores do n´umero informado (exceto ele mesmo).
    • Entrada: Um n´umero inteiro e positivo.
    • Sa´ida: A soma dos divisores.
    • Exemplo: Para o valor 8: 1 + 2 + 4 = 7*/
    int i, valor;
    
    for (i=1; i<=5; i++){
        printf("Insira o %d valor: ", i);
        scanf("%d", &valor);
        SomaDivisores(valor);
    }

return 0;
}
