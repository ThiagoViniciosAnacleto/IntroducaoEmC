#include <stdio.h>

struct novo_tipo {  // aqui eu crio um grupo

    int dado; // aqui eu crio um sub-grupo
    float valor; // aqui eu crio um sub-grupo

};


int main(){

    struct novo_tipo variavel; // aqui eu dou um nome ao meu grpo

    variavel.dado = 10; // aqui eu chamo um sub-grupo pelo nome que dei ao meu grupo
    variavel.valor = 22.22; // aqui eu chamo um sub-grupo pelo nome que dei ao meu grupo

    printf( " %d %f ", variavel.dado, variavel.valor);
    
}