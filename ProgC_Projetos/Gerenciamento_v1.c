//Versão 1.0 Cadastro de Clientes e Produtos - 26.07.2023

//Código 100% elaborado por Thiago Anacleto - Atual Treinee e estudante.

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>

#define Max_Clientes 1000 // estou definindo o valor máximo de clientes para 1000
#define Max_Produtos 1000 // estou definindo o valor máximo de produtos para 1000

struct cliente{ // estou criando uma estrutura chamada cliente

    char nome[30]; // dentro da estrutura digo quais são os TIPOS e quais são os NOMES e VALORES das variáveis.
    double celular;
};

struct produto{ // estou criando uma estrutura chamada produto

    char nome[30]; 
    int codigo; // dentro da estrutura digo quais são os TIPOS e quais são os NOMES e VALORES das variáveis.
    float valor;
};

void limparBuffer(){ // Estou criando uma FUNÇÃO que limpa o Buffer.

    //Buffer = Área de armazenamento temporário de dados como entradas do usuário ou informações a serem processadas.
    //Buffer é como um prato de espera, onde dados são servidos para processamento um por um, garantindo organização.  

    int c;
    while ((c = getchar()) != '\n' &&  c != EOF);//essa função limpa a entrada de dados para o scanf ser mais confiável
}

void cadastrarCliente(struct cliente *clientes, int *contadorclientes){

    //Aqui estou criando a função de cadastro de cliente.

    if(*contadorclientes >= Max_Clientes) {
        //Aqui estou declarando a condição de que SE o valor de clientes cadastrados for >= 1000 (Max_Clientes) então:
        printf("Limite máximo de clientes cadastrados, favor contatar a administração!\n");
        return;
    }

    //abaixo solicito as informações de cadastro de cliente, definidas.

    printf("Olá, me diga como posso chamá-lo(a)?\n");
    limparBuffer();
    scanf("%s", clientes[*contadorclientes].nome);

    printf("Ok qual seu número de celular?(somente números)\n");
    limparBuffer();
    scanf("%lf", &clientes[*contadorclientes].celular);

    printf("Parabéns, cadastro realizado com sucesso!\n");
    limparBuffer();

    (*contadorclientes)++; // aqui estou somando um em um para cada cadastro realizado.

}

void cadastrarProduto(struct produto *produtos, int *contadorprodutos){

    if(*contadorprodutos >= Max_Produtos){
        //aqui estou declarando a condição de que SE o valor de produtos cadastrados for >= 1000 (Max_Produtos) então:
        printf("O máximo de produtos já foi cadastrado, favor contatar a administração!\n");
        return;
    }

    //Abaixo estou solicitando os dados de cadastro de produto.

    printf("Qual o nome do produto?\n");
    limparBuffer();
    scanf("%s", produtos[*contadorprodutos].nome);

    printf("Ok, qual o código do produto?(apenas números inteiros positivos)\n");
    limparBuffer();
    scanf("%d", &produtos[*contadorprodutos].codigo);

    printf("Qual o valor?\n");
    limparBuffer();
    scanf("%f", &produtos[*contadorprodutos].valor);

    printf("Parabéns, produto cadastrado com sucesso!\n");

    (*contadorprodutos)++; //A cada produto cadastrado estou somando 1, de UM em UM.

}

void exibirClientes(struct cliente *clientes, int contadorclientes){
    if(contadorclientes == 0){
        //aqui estou definindo a condição de que se o valor de meu contador de clientes for = 0 então:
        printf("Nenhum cliente cadastrado!\n");
        return;//aqui estou definindo que após a mensagem de nenhum cliente cadastrado, retorne ao inicio do menu.
    }

    printf("Clientes cadastrados:\n");//Esta saída está fora do for, para não ser repetida pela quantidade de clientes

    for (int i = 0; i < contadorclientes; i++ ){
        printf("\n");
        printf("--------------------\n");
        printf("Nome: %s\n", clientes[i].nome);
        printf("Celular: %.0f\n", clientes[i].celular);
        printf("--------------------\n");
    }
}

void exibirProdutos(struct produto *produtos, int contadorprodutos){
    if(contadorprodutos == 0){
        //aqui estou definindo a condição de que se o valor de meu contador de produtos for = 0 então:
        printf("Não existem produtos cadastrados!\n");
        return;
    }

    printf("Produtos cadastrados:\n");//Esta saída está fora do for, para não ser repetida pela quantidade de produtos

    for(int i = 0; i < contadorprodutos; i++ ){
        printf("\n");
        printf("--------------------\n");
        printf("Nome do produto: %s\n", produtos[i].nome);
        printf("Codigo do produto: %d\n", produtos[i].codigo);
        printf("Valor do produto: %.0f\n", produtos[i].valor);
        printf("--------------------\n");
    }
}

int main(){

    SetConsoleOutputCP(CP_UTF8);
    setlocale(LC_ALL, "Portuguese_Brasil");

    struct produto produtos[Max_Produtos]; //define 'produtos' como a struct produto, e define o valor maximo p produtos
    struct cliente clientes[Max_Clientes]; //define 'clientes' como a struct cliente, e define o valor maximo p clientes
    int contador = 0;
    int opcoes;

    do {
        printf("Menu\n");
        printf("1. Cadastrar Cliente\n");
        printf("2. Cadastrar Produto\n");
        printf("3. Exibir Cadastro Clientes\n");
        printf("4. Exibir Cadastro Produtos\n");
        printf("5. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcoes);

        switch (opcoes){

            case 1:
                cadastrarCliente(clientes, &contador); // Caso 1: Chama a função para cadastrar cliente.
                break;
            case 2:
                cadastrarProduto(produtos, &contador); // Caso 2: Chama a função para cadastrar produto.
                break;
            case 3:
                exibirClientes(clientes, contador); // Caso 3: Chama a função para exibir clientes cadastrados.
                break;
            case 4:
                exibirProdutos(produtos, contador); // Caso 4: Chama a função para exibir produtos cadastrados.
                break;
            case 5:
                printf("Encerrando Programa..."); // Caso 5: Encerra o programa.
                break;
            default:
                printf("Opção inválida..."); // Caso não inserir nenhuma das opções determinadas: 'Opção inválida'
        }

        printf("\n");
    } while (opcoes != 5);

    return 0;
}