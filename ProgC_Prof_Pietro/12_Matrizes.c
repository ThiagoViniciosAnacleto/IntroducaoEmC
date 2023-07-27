#include <stdio.h>

int main(){

    //Matrizes = linha e coluna   - sendo = matriz [linhas][colunas]

    int mat[3][3] = { { 1, 2, 3}, { 4, 5, 6}, { 7, 8, 9}};

    int linha, coluna;

    for (linha = 0; linha < 3; linha++ ){
        for (coluna = 0; coluna <3; coluna++ ){
            printf("%d", mat[linha][coluna]);
        }
        printf( "\n" );
    }

}