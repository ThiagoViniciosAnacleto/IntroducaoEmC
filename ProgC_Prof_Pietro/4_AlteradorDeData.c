#include <windows.h>
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){

  SetConsoleOutputCP(CP_UTF8);

  setlocale (LC_ALL, "Portuguese_Brasil");

  int dia = 13;
  int mes = 7;
  int ano = 2023;
  int novodia;
  int novomes;
  int novoano;

  printf("Dia %d/%d/%d\n", dia, mes, ano);

  printf("Por favor informe qual o novo dia:\n");
  scanf("%d", &novodia);

  printf("Por favor informe qual o novo mes:\n");
  scanf("%d", &novomes);

  printf("Por favor informe qual o novo ano:\n");
  scanf("%d", &novoano);

  printf("A nova data é: %d/%d/%d\n", novodia, novomes, novoano);

  return 0;
}