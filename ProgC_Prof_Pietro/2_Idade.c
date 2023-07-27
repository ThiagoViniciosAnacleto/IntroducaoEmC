#include <stdio.h>
#include <stdlib.h>

int main()
{
	
	int idade, idade_nova; // aqui estou definindo que as variaveis idade e idade nova serao valores inteiros 
	
	
	printf("Insira a sua idade:\n"); //solicitei ao visualizador que insira a idade a partir de uma mensagem de texto
	
	
	scanf("%d", &idade);// aqui o usuario escreve a idade, sendo que o scanf "seta" a variavel que voce determinou 
	

    idade_nova = idade + 1; // aqui estou somando qual o valor da idade nova a partir da idade setada no scanf
    

	printf("No ano que vem você terá %d anos.\n", idade_nova); // aqui informo ao usuario sua nova idade 
	
	
	system("pause");//somente para windows e so funciona com a biblioteca stdlib.h
	return 0;	
}
