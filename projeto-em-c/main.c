#include "include/questoes.h"

int main()
{
       // questao 37
       char palavra[] = "ESTATISTICA";
       int tamanho = strlen(palavra);
       long long total_anagramas = 0;
       printf("Questao 37: ");
       printf(" Se uma pessoa gasta exatamente um minuto para\n");
       printf("escrever cada anagrama da palavra ESTATISTICA\n");
       printf("(desconsidere o acento), quanto tempo levara para\n");
       printf("escrever todos, se nao deve parar nenhum instante para descansar?\n");
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
       printf("Questao 147: Antes de serem colocadas para distribuicao num\n"
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
       printf("A probabilidade de acontecer: %.2f%%\n\n", probabilidade_caixas);

       double alergicos_a = 0;
       double alergicos_b = 0;
       alergicos(&alergicos_a, &alergicos_b);
       printf("Questao 224: Uma medica que trata alergias afirma que 60%%\n"
              "dos pacientes testados por ela sao alergicos a algum tipo\n"
              "de erva. Qual e a probabilidade de que:\n");
       printf("    a.) exatamente tres de seus quatro proximos pacientes sejam alergicos a ervas?\n");
       printf("    R: A probabilidade de tres dos quatro proximos: %.2f%%\n", alergicos_a * 100);
       printf("    b.) nenhum de seus quatro proximos pacientes seja alergico a ervas?\n");
       printf("    R: A probabilidade de nenhum dos quatro proximos: %.2f%%\n\n", alergicos_b * 100);

       // questao 236
       printf("Uma construtora emprega dois engenheiros de vendas. Um engenheiro\n");
       printf("realiza o trabalho de estimar os custos para 70%% das ofertas de\n");
       printf("trabalho da empresa. O segundo engenheiro faz o trabalho para 30%%\n");
       printf("das ofertas. Sabe-se que o indice de erros no trabalho do engenheiro 1\n");
       printf("e de 0,02 e do engenheiro 2 e de 0,04. Suponha que uma oferta de\n");
       printf("trabalho chegue a empresa e serios erros acontecam quando da\n");
       printf("estimativa do custo dessa oferta. Qual a probabilidade de cada um\n");
       printf("dos dois engenheiros terem realizado o trabalho?\n");
       double prob_engenheiroA = 0.0;
       double prob_engenheiroB = 0.0;
       engenheiros(&prob_engenheiroA, &prob_engenheiroB);
       printf("R: A probabilidade do engenheiro A eh: %.2f%%\n", prob_engenheiroA*100);
       printf("R: A probabilidade do engenheiro B eh: %.2f%%\n", prob_engenheiroB*100);

       return 0;
}
