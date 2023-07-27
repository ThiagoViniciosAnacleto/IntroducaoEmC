#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

int main(void){

	SetConsoleOutputCP(CP_UTF8);

	setlocale(LC_ALL, "Portuguese_Brasil");
	
	int data, mes, ano; // aqui estou determinando que as variaveis serao numeros inteiros
	
	
	printf("Insira a data de seu nascimento:\n"); //
	scanf("%d", &data);
	
	
	printf("Insira o mes de seu nascimento:\n"); // nas tres solicitacoes digo ao usuario " setar " o a variavel 
	scanf("%d", &mes);
	
	
	printf("Insira o ano de seu nascimento:\n"); //
	scanf("%d", &ano);
	
	if (data == 17 && mes == 2 && ano == 2003){ // aqui estou determinando que caso o numero inteiro informado pelo usuario for igual aos numeros do if, ele execute o determinado abaixo:
	
	printf("Que legal, voce faz aniversário em %d/%d/%d e por isso voce é foda\n", data, mes, ano);	}
	
	
	    else { printf("Que aniversário ruim ein\n"); // caso o valor setado pelo usuario for diferente do if digo que foi ruim com o else 
		}
	
	
	system("pause");//somente para windows e so funciona com a biblioteca stdlib.h
	return 0;
}
