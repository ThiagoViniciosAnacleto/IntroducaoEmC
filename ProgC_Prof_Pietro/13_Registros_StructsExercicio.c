#include <stdio.h>

struct produto{

    int cod;
    float valor;

};

int main (){

    struct produto p;

    printf(" Digite o codigo do produto");
    scanf( "%d", &p.cod);

    printf( "Digite o valor do produto em reais");
    scanf( "%f", &p.valor);

    printf( "Os dados sao:\n");
    printf( "Codigo: %d.\n", p.cod);
    printf( "Valor: R$ %.2f.\n", p.valor);

    return 0;
}