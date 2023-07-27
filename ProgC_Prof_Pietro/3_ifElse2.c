#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#include <string.h>

int main(){

    SetConsoleOutputCP(CP_UTF8);

	setlocale(LC_ALL, "Portuguese_Brasil");
	
    char resposta[9];

	printf("É verdade que o palmeiras não tem mundial? Digite 'verdade' ou 'mentira':");
	scanf("%s", resposta); // aqui não é necessário utilizar o operador de endereço novamente pois o 
	//nome de um array já representa um ponteiro para o primeiro elemento do array.

	if (strcmp(resposta, "verdade") == 0){

        printf("Resposta correta");

	}

	else if( strcmp(resposta, "mentira") == 0){

		printf("Resposta incorreta");
	}

	else{

		printf("Resposta inválida, por favor digite 'verdade' ou 'mentira'");

	}

	return 0;
}