#include <stdio.h>
#include <locale.h>


int main(){
    setlocale(LC_ALL, "");
    //Escreva uma função que receba dois números inteiros retorne o menor número. 
    float menor(float a, float b){
          float result;
          if ( a > b){
               result = a;
          } else if ( b > a){
                 result = b;
          } else { 
                 printf("Números iguais"); 
          } 
          return result;
    } 

return 0; 

}
