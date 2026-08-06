cmake_minimum_required(VERSION 3.10)
project(ProjetoEstatistica C)

# Define o padrão C (C99 ou C11)
set(CMAKE_C_STANDARD 99)

# Adiciona todos os arquivos .c da pasta questoes automaticamente
file(GLOB QUESTOES_SRC "questoes/*.c")

# Cria o executável juntando o main.c e todos os arquivos da pasta questoes
add_executable(projeto main.c ${QUESTOES_SRC})