


import random as r

# https://docente.ifsc.edu.br/louis.augusto/std/ProbEst/Topico03/Topico03_Lista_ProbabilidadeCondicional.pdf

def q17():
    numeroInteracoes = int(1e6)
    numSucessos = 0
    buracos = [2,4,1,5]
    refugio = [1,2,1,5]
    for i in range(numeroInteracoes):
        porta = r.randint(0,3)
        buraco = r.randint(1, buracos[porta])
        if buraco == refugio[porta]:
            numSucessos = numSucessos + 1
        
    print("Q17: Probabilidade de achar refugio: ", numSucessos/numeroInteracoes)

def q18():
    numeroInteracoes = int(1e9)
    numSucessos = 0
    ocorrenciasMaquinas = [0, 0, 0]
    for _ in range(numeroInteracoes):
        maquina = r.random()
        defeito = r.random()
        if maquina < 0.10: # Máquina 1 10%
            if defeito < 0.05:
                numSucessos += 1
                ocorrenciasMaquinas[0] += 1
        elif maquina < 0.45: # Máquina 2 35%
            if defeito < 0.03:
                ocorrenciasMaquinas[1] += 1
                numSucessos += 1
        else: # Máquina 3 55%
            if defeito < 0.01:
                ocorrenciasMaquinas[2] += 1
                numSucessos += 1


    print("Probabilidade Maquina 1: ", ocorrenciasMaquinas[0]/numSucessos)
    print("Probabilidade Maquina 2: ", ocorrenciasMaquinas[1]/numSucessos)
    print("Probabilidade Maquina 3: ", ocorrenciasMaquinas[2]/numSucessos)
    solucao = numSucessos / numeroInteracoes
    print("Probabilidade total de defeitos: ", solucao)
            

if __name__ == "__main__":
    q17()
    q18()

