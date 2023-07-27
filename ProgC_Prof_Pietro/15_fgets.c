#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese"); //permito a adição de assentuação no código.

    char texto[10];

    printf(" Digite um texto:\n");
    gets(texto); // entrada de dados a partir do GETS
    
    printf(" Você digitou: %s.\n", texto);

}