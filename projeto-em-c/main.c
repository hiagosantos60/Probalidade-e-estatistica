#include <stdio.h>
#include <string.h>
#include "include/questoes.h"

int main() {
    // ========= questao 37 =========
    char palavra[] = "ESTATISTICA";
    int tamanho = strlen(palavra);
    long long total_anagramas = 0;
    
    printf("Questao 37:\n");
    printf("");
    printf("Calculando os anagramas unicos para a palavra %s...\n", palavra);
    gerar_anagramas(palavra, 0, tamanho - 1, &total_anagramas);
    printf("Total de anagramas unicos encontrados: %lld\n", total_anagramas);
    printf("Total de anagramas duplicados encontrados: %lld\n", total_anagramas*2);
    printf("\n\n");

    // ========= questao 38 =========
    printf("Questao 38:\n");


    return 0;
}