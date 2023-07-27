#include <stdio.h>
#include <locale.h>

int main(void){

    setlocale (LC_ALL, "Portuguese");

    //calcule a quantidade de segundos do tempo de: 1 hora, 2 minutos e 5 segundos.

    int horas, minutos, segundos;
    int um_segundo = 1;

    minutos = 60 * um_segundo;
    horas = 60 * minutos;

    segundos = ( 8 * um_segundo ) + ( 5 * horas ) + ( 5 * minutos );

    // imprima o resultado:

    printf("tem %d segundos", segundos);

    return 0;
}
