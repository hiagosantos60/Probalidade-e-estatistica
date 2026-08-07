#include "../include/questoes.h"

void engenheiros(double* probA, double* probB) {
    double erro_eng_1 = 0.0;
    double erro_eng_2 = 0.0;
    double erro_total = 0.0;
    long long interacoes = 100000;

    for (long long i = 0; i < interacoes; i++)
    {
        // aleatoriedade de engenheiro
        int eng = rand() % 100;
        if(eng < 70){
            int erro = (rand() % 100 < 2 ? 1 : 0);
            if (erro == 1)
            { 
                erro_eng_1++;
                erro_total++;
            }
        } else {
            int erro = (rand() % 100 < 4 ? 1 : 0);
            if (erro == 1)
            {
                erro_eng_2++;
                erro_total++;
            }
        }
    }
    
    *probA = (double)erro_eng_1/erro_total;
    *probB = (double)erro_eng_2/erro_total; 
}

