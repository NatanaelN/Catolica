#include <stdio.h>
#include <locale.h>

int absoluto( int valor){
    int result;
    if (valor < 0){
              result = valor * -1;
    } else {
           result = valor;
    } 
    //pritf("%d", result); 
    return result; 
} 

int main(){
    setlocale(LC_ALL, "");
    //Escreva um programa em C que leia 5 valores inteiros e imprima para cada um o seu correspondente valor absoluto.
    //Para obter o valor absoluto do número implemente uma função chamada Absoluto. 
    int a, b, c, d, e; 
     
    printf("Entre com 1: "); 
    scanf("%d", &a);
    absoluto(a); 
    
    printf("Entre com 2: "); 
    scanf("%d", &b); 
    absoluto(b); 
    
    printf("Entre com 3: "); 
    scanf("%d", &c); 
    absoluto(c); 
    
    printf("Entre com 4: "); 
    scanf("%d", &d); 
    absoluto(d); 
    
    printf("Entre com 5: "); 
    scanf("%d", &e); 
    absoluto(e); 
    
    return 0; 
} 

 
