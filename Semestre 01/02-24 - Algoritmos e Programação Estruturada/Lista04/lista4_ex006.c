#include <stdio.h>
#include <locale.h>

float medias( float a, float b, float c, char l[1]){
    float result, soma = a + b + c; 
    int pa = 5 , pb = 3, pc = 2; 
    
    switch ('l')
    {
           case 'a':
                result = soma / 3;
                break; 
           case 'p':
                result = (a * pa + b * pb + c * pc)/ (pa + pb + pc);
                break;
           case 'h':
                //result = 
                break; 
           default: break;
    }	 
    return result; 
} 

int main(){
    setlocale(LC_ALL, ""); 
    /*6. Escreva uma função que receba 3 notas de um aluno e uma letra.
    Se a letra for A a função retorna a média aritmética das notas do aluno, 
    se for P, a sua média ponderada (pesos: 5, 3 e 2) 
    e se for H, a sua média harmônica.*/ 
    float n1, n2, n3; 
    char op;
    
    printf("Insira as notas: "); 
    scanf("%f %f %f", &n1, &n2, &n3); 
    printf("n1 = %.2f\tn2 = %.2f\tn3 = %.2f\t", n1, n2, n3); 
    
    printf("Qual operação? (A - P - H) ");
    scanf("%c ", &op);
    medias(n1, n2, n3, op);
    
    
    return 0; 
} 
