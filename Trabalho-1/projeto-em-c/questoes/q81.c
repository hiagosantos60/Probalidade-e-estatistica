#include "../include/questoes.h"

void pastelaria(double *probabilidade)
{
    // Travessa 1: 3 pasteis, 5 coxinhas (Total = 8)
    // Travessa 2: 4 pasteis, 2 coxinhas (Total = 6)

    double total_interacoes = 1000000.0;
    double total_pastel = 0.0;

    for (double i = 0.0; i < total_interacoes; i++)
    {
        int n_travessa = rand() % 2;

        if (n_travessa == 0)
        {
            int item = rand() % 8;
            if (item < 3)
            { // 0, 1, 2 sao pasteis
                total_pastel += 1.0;
            }
        }
        else
        {
            int item = rand() % 6;
            if (item < 4)
            { // 0, 1, 2, 3 sao pasteis
                total_pastel += 1.0;
            }
        }
    }

    *probabilidade = total_pastel / total_interacoes;
}