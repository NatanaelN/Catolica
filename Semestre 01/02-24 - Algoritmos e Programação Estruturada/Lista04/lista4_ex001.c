#include <stdio.h>
#include <locale.h>


int main(){
    setlocale(LC_ALL, "");
    //Escreva uma fun��o que receba dois n�meros inteiros retorne o menor n�mero. 
    float menor(float a, float b){
          float result;
          if ( a > b){
               result = a;
          } else if ( b > a){
                 result = b;
          } else { 
                 printf("N�meros iguais"); 
          } 
          return result;
    } 

return 0; 

}
