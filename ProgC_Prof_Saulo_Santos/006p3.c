#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main (void){

    int a = 7 , b = 2;
    int soma, subtracao, produto, divisao, resto;

    soma = a + b;
    subtracao = a - b;
    produto = a * b;
    divisao = a / b;
    resto = a % b; 
    
    printf("%d %d %d %d %d", soma, subtracao, produto, divisao, resto );

    return 0;
}