#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main (void){

    int qtd1, qtd2, qtd3;

    double valor1, valor2, valor3;

    qtd1 = 10;
    qtd2 = 100;
    qtd3 = 1000;
    
    valor1 = 10.50;
    valor2 = 100.50;
    valor3 = 1000.50;

    printf("%5d %7.2lf\n", qtd1, valor1 );

    printf("%5d %7.2lf\n", qtd2, valor2 );

    printf("%5d %7.2lf\n", qtd3, valor3 );


    return 0;
}