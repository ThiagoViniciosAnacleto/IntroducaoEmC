#include <stdio.h>

int main(){

    int vet[5] = {0, 0, 0, 0, 0}; // aqui eu seto valores de cada variavel do vetor 

    //vetor = {10, 20, 30, 40, 50} está ERRADO!!

    int i;

    for (i=0 ; i < 5 ; i++ ){ //contando do 0 ao 5 roda os comandos abaixo, setando no total os 5 vetores 

        printf(" Insira o elemento da posicao %d:", i);

        scanf("%d", &vet[i]);
        
        }

    for (i=0 ; i < 5 ; i++ ){ //apos rodar 5 vezes os comandos, e ja setados os vetores, isso apenas le os vet

        printf(" %d ", vet[i]);

    }


}