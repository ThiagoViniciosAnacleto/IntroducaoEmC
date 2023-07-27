#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

int main (void){

	SetConsoleOutputCP(CP_UTF8);

	setlocale(LC_ALL, "Portuguese_Brasil");

	int hoje; // determino que o dia de hoje e um valor inteiro
	int dia_evento; // aqui determino que o dia do evento sera um valor inteiro
	int dias_faltantes; // determino que os dias do mes sao valores inteiros
	
	
    printf( "  Calculador de dias para o próximo evento V1.0\n" );
	
	
	printf( "  By Thiago Anacleto\n" );
	
	
	printf( "  Atual Treinee\n" );
	
	
	printf( "  Por favor me diga o dia do mês de hoje!\n" );
	scanf( "%d", &hoje);
	
	
	printf( "  Por favor me diga o dia do mês que será seu próximo evento!\n" );
	scanf( "%d", &dia_evento);		
	
	
	dias_faltantes = dia_evento - hoje; // aqui determino que os dias faltantes serao a subtracao do dia do evento sobre o dia de hoje
	
	
	printf( "  Faltam %d dias para o seu evento! \n " , dias_faltantes );
	

	system("pause");
	return 0;
	
}
