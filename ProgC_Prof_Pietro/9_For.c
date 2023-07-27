#include <stdio.h>

int main(){
	
	int i;


	for( i = 1; i <= 15; ){ 
	
	// dentro dos parenteses do FOR ( sintaxe )
	// o primeiro valor declara a inicialização da variavel,
	// o segundo valor declara a condição de quando para,
	// o terceiro declara o incremento ou decremento ( atualização da variavel de controle )
		
		printf(" %d ", i);
		
		i = i + 2;
	}
	
}