#include <stdio.h>
#include <stdlib.h>
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

    printf( "Seu IMC com peso %f e altura %f é de: %f\n\n", peso, altura, imc);

    if(imc <= 18.5){

        printf("Sua classificação é 'Abaixo do Peso'\n");
    }
    else if(imc >= 18.6 && imc <= 24.9){

        printf("Sua classificação é 'Peso Ideal'\n");

    }

    else if(imc >= 25.0 && imc <= 29.9){

        printf("Sua classificação é 'Levemente Acima do Peso'\n");

    }

    else if(imc >= 30.0 && imc <= 34.9){

        printf("Sua classificação é 'Obesidade grau 1'\n");

    }

    else if(imc >= 35.0 && imc <= 39.9){

        printf("Sua classificação é 'Obesidade grau 2'\n");

    }

    else if(imc >= 40.0 && imc <= 45.0){

        printf("Sua classificação é 'Obesidade grau 3' Procure um médico!\n");

    }

    else{

        printf("IMC fora do padrão, por gentileza procure um médico");
        
    }

    return 0;
}