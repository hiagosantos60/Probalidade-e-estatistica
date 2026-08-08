# include "../include/questoes.h"

/*
231)
Um paciente foi indicado por um urologista para realizar um exame de toque retal, com o intuito de verificar uma 
inflamação em sua próstata, que pode ser resultado de um sarcoma. Sarcoma é uma forma de câncer que acomete 1% 
dos pacientes que apresentam este tipo de inflamação, e requer uma investigação mais profunda sobre o quadro clínico do paciente.
O laudo do exame de toque, feito por especialista experiente, indicou positivamente o desenvolvimento de sarcoma.

Considere os eventos:
    D: o paciente é acometido da doença.
    C: o paciente é diagnosticado corretamente para a doença a partir do exame de toque.
Um médico experiente faz o diagnóstico correto em 95% dos casos quando o sarcoma está realmente presente 
(valor chamado sensibilidade do teste) e em 98% dos casos quando a doença não se desenvolveu 
(valor chamado especificidade do teste). Determine a probabilidade de o paciente ter desenvolvido sarcoma, 
dado que houve um resultado positivo do exame.

232.) Considere o paciente em estudo na questao 231,
que foi testado positivamente para sarcoma, decidiu fazer um
novo exame de toque, com outro medico especialista e
experiente. Considere que o segundo medico nao tenha
informacao previa nenhuma do quadro, de forma que os
exames podem ser considerados independentes, e com a
mesma sensibilidade e especificidade.

Suponha que o resultado do segundo exame revele
novamente a presenca de sarcoma nas celulas
da prostata do paciente. Determine a probabilidade do
paciente ter desenvolvido sarcoma, dada a
evidencia obtida.

Estratégia do exercício:
prevalencia = 1% chance de ter a doença em si
chance de ser saudável = 99%
sensibilidade = 95% teste dar positivo em quem tem a doença
especificidade = 98% o teste dá negativo em quem não tem a doença
falso positivo = 100%-98% = 2% o teste dá positivo, mas a pessoa não está doente

Para responder a 231:
numerador será os casos de verdadeiros positivos: 0.01*0.95 = 0.0095
denominador será o total de positivos, incluindo os falsos: 0.01*0.95 + 0.99*0.02 = 0.0293
resultado = 0.0095/0.0293 = 32.42% de estar com a doença %[1]%

Para responder a 232:
Como o paciente já realizou testes e obteve 32.42% de chance de ter desenvolvido sarcoma,
portanto, agora tambem tem 67.58% de chance de não ter a doença
probabilidade de verdadeiro positivo: 0.3242*0.95 = 0.30799
todos os casos positivos possiveis: 0.3242*0.95 + 0.02*0.6758 = 0.321506
Logo, a probabilidade de ter sarcoma é: 0.30799/0.321506 = 0,957960349 = 95,79%

*/

// função que gera um nmero decimal entre 0.0 a 1.0
static double aleatorio(void) {
    return (double)rand() / RAND_MAX;
}

// REVISAR
void exames_medicos() {
    long n = 100000000;
    double p_doenca = 0.01;
    double sensibilidade = 0.95; // probabilidade sarcoma presente
    double especificidade = 0.98; // quando nao se desenvolveu
    double falso_pos = 0.02;

    // contagem
    long positivos = 0;
    long positivos_doente = 0;

    for (long i = 0; i < n; i++) {
        // o paciente esta doente?
        int doente = 0;
        if (aleatorio() < p_doenca) {
            doente = 1;
        }

        // qual a chance do exame dele dar positivo?
        double chance_positivo;
        if (doente == 1) {
            chance_positivo = sensibilidade; // verdadeiro positivo
        } else {
            chance_positivo = falso_pos; // falso positivo
        }

        // realiza os dois exames
        int exame1 = 0;
        if (aleatorio() < chance_positivo) {
            exame1 = 1;
        }

        int exame2 = 0;
        if (aleatorio() < chance_positivo) {
            exame2 = 1;
        }

        // verifica se ambos os exames deram positivo
        if (exame1 == 1 && exame2 == 1) {
            positivos++;
            
            // desses que deram positivo duas vezes, ele realmente estava doente?
            if (doente == 1) {
                positivos_doente++;
            }
        }
    }

    double simulado = (double)positivos_doente/positivos;

    printf("A probabilidade é de: %.4f%%\n", simulado * 100.0);
}