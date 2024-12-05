#include <stdio.h>
#include <locale.h>

float potencia(float base, int expoente){
      int i, result = 0;
      for (i = 1; i <= expoente; i++){
          result *= base;
       }
       printf("%f", &result);
       return result; 
}
int main(){ 
    setlocale(LC_ALL, "");
    //Escreva uma função potencia(base, expoente) que, quando chamada, retorna baseexpoente.
    //Por exemplo, potencia(3, 4) deve retornar 81. Assuma que expoente é um inteiro maior ou igual a 1. 
     potencia (3,4); 
     
return 0; 

} 
