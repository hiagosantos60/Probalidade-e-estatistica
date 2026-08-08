#include "include/questoes.h"

int main()
{
       srand(time(NULL));
       
       printf("\n\n==================================================================\n\n");

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
       printf("Total de anagramas duplicados encontrados: %lld", total_anagramas * 2);

       printf("\n\n==================================================================\n\n");

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

       printf("\n\n==================================================================\n\n");

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
       printf("A probabilidade de acontecer: %.2f%%", probabilidade_caixas);

       printf("\n\n==================================================================\n\n");

       double alergicos_a = 0;
       double alergicos_b = 0;
       alergicos(&alergicos_a, &alergicos_b);
       printf("Questao 224: Uma medica que trata alergias afirma que 60%%\n"
              "dos pacientes testados por ela sao alergicos a algum tipo\n"
              "de erva. Qual e a probabilidade de que:\n");
       printf("    a.) exatamente tres de seus quatro proximos pacientes sejam alergicos a ervas?\n");
       printf("    R: A probabilidade de tres dos quatro proximos: %.2f%%\n", alergicos_a * 100);
       printf("    b.) nenhum de seus quatro proximos pacientes seja alergico a ervas?\n");
       printf("    R: A probabilidade de nenhum dos quatro proximos: %.2f%%", alergicos_b * 100);

       printf("\n\n==================================================================\n\n");

       // questao 236
       printf("Questão 236: Uma construtora emprega dois engenheiros de vendas. Um engenheiro\n");
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
       printf("R: A probabilidade do engenheiro B eh: %.2f%%", prob_engenheiroB*100);

       printf("\n\n==================================================================\n\n");

       // questao 232
       printf("Questão 232: Considere o paciente em estudo na questao 231,\n"
              "que foi testado positivamente para sarcoma, decidiu fazer um\n"
              "novo exame de toque, com outro medico especialista e\n"
              "experiente. Considere que o segundo medico nao tenha\n"
              "informacao previa nenhuma do quadro, de forma que os\n"
              "exames podem ser considerados independentes, e com a\n"
              "mesma sensibilidade e especificidade.\n\n"
              "Suponha que o resultado do segundo exame revele\n"
              "novamente a presenca de sarcoma nas celulas\n"
              "da prostata do paciente. Determine a probabilidade do\n"
              "paciente ter desenvolvido sarcoma, dada a\n"
              "evidencia obtida.\n\n"
              "Estrategia do exercicio:\n"
              "prevalencia = 1%% chance de ter a doenca em si\n"
              "chance de ser saudavel = 99%%\n"
              "sensibilidade = 95%% teste dar positivo em quem tem a doenca\n"
              "especificidade = 98%% o teste da negativo em quem nao tem a doenca\n"
              "falso positivo = 100%%-98%% = 2%% o teste da positivo, mas a pessoa nao esta doente\n\n"
              "Para responder a 231:\n"
              "numerador sera os casos de verdadeiros positivos: 0.01*0.95 = 0.0095\n"
              "denominador sera o total de positivos, incluindo os falsos: 0.01*0.95 + 0.99*0.02 = 0.0293\n"
              "resultado = 0.0095/0.0293 = 32.42%% de estar com a doenca\n\n"
              "Para responder a 232:\n"
              "Como o paciente ja realizou testes e obteve 32.42%% de chance de ter desenvolvido sarcoma,\n"
              "portanto, agora tambem tem 67.58%% de chance de nao ter a doenca\n"
              "probabilidade de verdadeiro positivo: 0.3242*0.95 = 0.30799\n"
              "todos os casos positivos possiveis: 0.3242*0.95 + 0.02*0.6758 = 0.321506\n"
              "Logo, a probabilidade de ter sarcoma e: 0.30799/0.321506 = 0.957960349 = 95.79%%\n\n");

       printf("Simulação via código: \n");
       exames_medicos();

       printf("\n\n==================================================================\n\n");

       return 0;
}
