#include "../include/questoes.h"

/*
  o peso nao deve passar de 18kg e nao se maior que 2m na soma das dimensoes
  sabe-se que 5% dos pacotes falham no primerio
  e que 2% falham no segundo.
  Qual a probabilidade de um pacote ser aceito no primeiro teste e rodar no
  segundo?

  São eventos independentes independentes

  qual a estratégia?

  os outros 95% vao para o segundo, mas 2% de 95% falham,
  ou seja, 95/100*2/100 = 190/10000 = 0,0019 = 1,9%
 */

void teste_caixas(double *probabilidade)
{
  srand(time(NULL) ^ clock());

  int total_de_interacoes = 1000000;
  int casos_favoraveis = 0;

  for (int i = 0; i < total_de_interacoes; i++)
  {
    // rand() % 100 vai gerar numeros de 0 a 99
    int falhou_teste_1 = (rand() % 100) < 5;
    int falhou_teste_2 = (rand() % 100) < 2;

    if (!falhou_teste_1 && falhou_teste_2)
    {
      casos_favoraveis++;
    }
  }

  *probabilidade = ((double)casos_favoraveis / total_de_interacoes) * 100.0;
}
