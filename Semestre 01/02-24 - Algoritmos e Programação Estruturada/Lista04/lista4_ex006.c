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
    /*6. Escreva uma fun��o que receba 3 notas de um aluno e uma letra.
    Se a letra for A a fun��o retorna a m�dia aritm�tica das notas do aluno, 
    se for P, a sua m�dia ponderada (pesos: 5, 3 e 2) 
    e se for H, a sua m�dia harm�nica.*/ 
    float n1, n2, n3; 
    char op;
    
    printf("Insira as notas: "); 
    scanf("%f %f %f", &n1, &n2, &n3); 
    printf("n1 = %.2f\tn2 = %.2f\tn3 = %.2f\t", n1, n2, n3); 
    
    printf("Qual opera��o? (A - P - H) ");
    scanf("%c ", &op);
    medias(n1, n2, n3, op);
    
    
    return 0; 
} 
