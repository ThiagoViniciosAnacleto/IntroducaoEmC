#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>

struct produto {

    int codigo;
	char nome[30];
    double quantidade;
    double valor;
};

void cadastrarProduto(struct produto *produtos, int *contador){
    printf("Por favor descreva o codigo do produto:\n");
	scanf("%d", &produtos[*contador].codigo);

	printf("Por favor descreva o nome do produto:\n");
    scanf(" %[^\n]s", produtos[*contador].nome);

	printf("Por favor descreva a quantidade de produto:\n");
	scanf("%lf", &produtos[*contador].quantidade);

    printf("Por favor descreva o valor do produto:\n");
    scanf("%lf", &produtos[*contador].valor);

    printf("\n");

	(*contador)++;

}

void exibirProdutos(struct produto *produtos, int contador) {
    if (contador == 0) {
        printf("Nenhum produto cadastrado.\n");
        return;
    }
    
    printf("\n");
    printf("Produtos cadastrados:\n");
    for (int i = 0; i < contador; i++) { 
        printf("Código: %d\n", produtos[i].codigo);
        printf("Nome: %s\n", produtos[i].nome);
        printf("Quantidade: %lf\n", produtos[i].quantidade);
        printf("Valor: %lf\n", produtos[i].valor);
    }
}

int main() {

    SetConsoleOutputCP(CP_UTF8);
	setlocale(LC_ALL, "Portuguese_Brasil");
	
    struct produto produtos[100];
    int contador = 0;
    int opcao;
    
    do {
        printf("\n");
        printf("Menu:\n");
        printf("1. Cadastrar produto\n");
        printf("2. Exibir produtos cadastrados\n");
        printf("3. Sair\n");
        printf("Escolha uma opção:");
        scanf("%d", &opcao);
        
        switch (opcao) {
            case 1:
                cadastrarProduto(produtos, &contador);
                break;
            case 2:
                exibirProdutos(produtos, contador);
                break;
            case 3:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida.\n");
        }
        
        printf("\n");
    } while (opcao != 3);
    
    return 0;
}