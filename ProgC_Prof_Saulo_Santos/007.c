#include <stdio.h>
#include <locale.h>

int main(void){

    setlocale (LC_ALL, "Portuguese");

    int a,b,c;
    float media;

    //entrada de dados

    a = 10;
    b = 11;
    c = 12;

    //processamento de dados

    media = (float)(a + b + c) / 3;

    //saida de dados

    printf ("Média: %f\n", media);






    return 0;
}