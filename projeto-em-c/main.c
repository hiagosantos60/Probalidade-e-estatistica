#include "include/questoes.h"
#include <stdio.h>
#include <string.h>

int main() {
  // ========= questao 37 =========
  char palavra[] = "ESTATISTICA";
  int tamanho = strlen(palavra);
  long long total_anagramas = 0;

  printf("Questao 37: ");
  printf(" Se uma pessoa gasta exatamente um minuto para\n");
  printf("escrever cada anagrama da palavra ESTATISTICA\n");
  printf("(desconsidere o acento), quanto tempo levara para\n");
  printf("escrever todos, se nao deve parar nenhum instante\n");
  printf("para descansar?\n");
  gerar_anagramas(palavra, 0, tamanho - 1, &total_anagramas);
  printf("Total de anagramas unicos encontrados: %lld\n", total_anagramas);
  printf("Total de anagramas duplicados encontrados: %lld\n",
         total_anagramas * 2);
  printf("\n\n");

  // ========= questao 38 =========
  printf("Questao 38:\n");

  return 0;
}
