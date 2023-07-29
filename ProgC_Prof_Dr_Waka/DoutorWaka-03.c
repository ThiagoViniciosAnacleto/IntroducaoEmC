//Desenvolva o código em C de um programa que soma números inteiros informados pelo usuário até que um
//número negativo seja informado e então imprime o resultado da soma na tela.

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    setlocale(LC_ALL, "Portuguese_Brasil");

    int valor;
    int somatoria;

    printf("Digite um número inteiro positivo ou negativo: ");
    scanf("%d", &valor);

    somatoria = 0;

    while(valor >= 0){

        somatoria = somatoria + valor; 
        printf("Digite um novo numero inteiro positivo ou negativo: \n");
        scanf("%d", &valor);
    }

    printf("O resultado da somatória dos valores citados anteriormente é: %d", somatoria);
    printf("\n");

    return 0;
}
