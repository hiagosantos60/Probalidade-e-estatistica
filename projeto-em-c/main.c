#include "include/questoes.h"

int main() {
  // questao 37
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
  printf("\n");

  // questao 38
  printf("Questao 81:");
  printf(" Alguns amigos estao em uma lanchonete. Sobre\n");
  printf("a mesa ha duas travessas. Em uma delas ha 3\n");
  printf("pasteis e 5 coxinhas. Na outra ha 2 coxinhas e 4\n");
  printf("pasteis. Se ao acaso alguem escolher uma destas\n");
  printf("travessas e tambem ao acaso pegar um dos salgados,\n");
  printf("qual a probabilidade de se ter pegado um pastel?\n");
  double probalidade_pastel = 0.0;
  pastelaria(&probalidade_pastel);
  printf("A probabilidade e de: %.2f%%", probalidade_pastel * 100);
  printf("\n\n");

  // questao 147

  printf("Questão 147: Antes de serem colocadas para distribuicao num\n"
         "caminhao, os pacotes devem passar por dois\n"
         "testes, no primeiro o peso nao deve exceder 18kg\n"
         "e no segundo a soma das tres dimensoes deve\n"
         "ser menor do que 2m. Da pratica diaria, sabe-se\n"
         "que 5%% dos pacotes recebidos falham no primeiro\n"
         "teste e que 2%% falham no segundo teste. Qual a\n"
         "probabilidade de um pacote que seja aceito no\n"
         "primeiro teste ser reprovado no segundo? Considere os\n"
         "testes independentes.\n");
  double probabilidade_caixas;
  teste_caixas(&probabilidade_caixas);
  printf("A probabilidade de acontecer é: %.2f%%\n", probabilidade_caixas);

  return 0;
}
