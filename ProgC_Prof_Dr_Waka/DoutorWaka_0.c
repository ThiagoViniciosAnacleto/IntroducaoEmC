#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main(){

    SetConsoleOutputCP(CP_UTF8);

    setlocale(LC_ALL, "Portuguese_Brasil");
    
    float peso;

    float altura;

    float imc;

    printf( " Por favor, nos informe o seu peso:\n " );
    scanf( "%f", &peso);

    
    printf( " Por favor, nos informe também sua altura:\n " );
    scanf( "%f", &altura);

    imc = peso / ( altura * altura );

    printf( "De acordo com nossos cálculos o IMC com peso %f e altura %f é de: %f\n", peso, altura, imc);

    return 0;
}