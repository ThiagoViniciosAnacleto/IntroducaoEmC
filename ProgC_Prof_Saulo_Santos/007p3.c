#include <stdio.h>
#include <locale.h>

int main (void){

    setlocale (LC_ALL, "Portuguese");

    //calcular a quantidade de dias que faltam para o fim do ano

    // usuario digita dia e mes atual

    // adotar 30 dias para todos os meses do ano

    int dia, mes, ano;
    int fim_do_ano;

    int dia_atual, mes_atual;

    printf("Usuario qual o dia de hoje?");
    scanf("%d", &dia_atual);
    
    return 0;
}