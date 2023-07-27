#include <stdio.h>
#include <stdlib.h>

int main()
{
	
	int dado = 10; // aqui estou definindo que minha variavel é 10
	
	
	printf("Digite algo diferente de 0:\n");
	
	
	scanf("%d", &dado); // aqui estou coletando o dado informado pelo usuario
	
	if(dado == 0 ){ 
		
		//aqui estou determinando que se o dado informado pelo usuario for igual a 0 deve-se executar abaixo:
	
		printf("Valor incorreto\n"); //como o valor informado foi igual a 0 então estou dizendo que está errado
		
		
	} else { //Aqui determino que caso o dado informado pelo usuário for >= 1 execute o determinado abaixo
	
		printf("Valor correto\n"); //como o valor informado foi qualquer outro numero diferente de 0 informo que esta correto
	
	}
		
		
	system("pause");//somente para windows e só funciona com a biblioteca stdlib.h
	return 0;
}
