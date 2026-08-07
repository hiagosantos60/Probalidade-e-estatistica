#include "../include/questoes.h"

// 60% dos pacientes são alergicos a alguma erva
// a) Probabilidade de 3 dos 4 prox serem alergicos
// b) nunhum dos 4 ser alergico
// a estratégia e gerar 0 ou 1 e aplicar a probabilidade de 60%

void alergicos(double *probA, double *probB)
{
    int interacoes = 1000000;

    int sucesso_A = 0;
    int sucesso_B = 0;

    for (int i = 0; i < interacoes; i++)
    {
        int alergicos_no_grupo = 0;

        for (int j = 0; j < 4; j++)
        { // gera o valor de 0 a 99, se menor que 60 eh alergico, se maior nao eh
            int eh_alergico = (rand() % 100 < 60) ? 1 : 0;

            if (eh_alergico == 1)
            {
                alergicos_no_grupo++;
            }
        }

        if (alergicos_no_grupo == 3)
        {
            sucesso_A++;
        }

        if (alergicos_no_grupo == 0)
        {
            sucesso_B++;
        }
    }

    *probA = ((double)sucesso_A / interacoes);
    *probB = ((double)sucesso_B / interacoes);
}