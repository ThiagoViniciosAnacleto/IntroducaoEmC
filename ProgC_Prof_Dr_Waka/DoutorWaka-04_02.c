#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    setlocale(LC_ALL, "Portuguese_Brasil");

    //Declaração de um vetor de 5 posições
    //[2, 5, 3, 1, 18]

    int vet[5];

    vet[0] = 2;
    vet[1] = 5;
    vet[2] = 3;
    vet[3] = 1;
    vet[4] = 18;

    for(int i = 0; i < 5; i++){
        printf("Vetor[%d] = %d\n", i, vet[i]);
    }

    return 0;
}
