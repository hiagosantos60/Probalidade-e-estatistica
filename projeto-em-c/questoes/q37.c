#include <stdio.h>
#include "../include/questoes.h"

// faz a troca via ponteiro direto na memória
void trocar(char *a, char *b) {
    char temporario = *a;
    *a = *b;
    *b = temporario;
}


int deve_trocar(char *str, int inicio, int atual) {
    for (int i = inicio; i < atual; i++) {
        // essa condicao me garante que não vou trocar letras iguais 
        if (str[i] == str[atual]) {
            return 0;
        }
    }
    return 1;
}

void gerar_anagramas(char *palavra, int posicao_atual, int ultima_posicao, long long *contador) {
    if (posicao_atual == ultima_posicao) {
        (*contador)++;
        return;
    }

    for (int i = posicao_atual; i <= ultima_posicao; i++) {
        // logica invertida
        if (!deve_trocar(palavra, posicao_atual, i)) {
            continue;
        }
        trocar(&palavra[posicao_atual], &palavra[i]);
        gerar_anagramas(palavra, posicao_atual + 1, ultima_posicao, contador);
        trocar(&palavra[posicao_atual], &palavra[i]);
    }
}
