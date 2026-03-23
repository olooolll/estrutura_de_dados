cmake_minimum_required(VERSION 4.1)
project(dataStruct C)

set(CMAKE_C_STANDARD 11)

include_directories(Pilha/Exercicio1 Pilha/Exercicio2)

# Executável do Exercício 1
add_executable(ex1
        Pilha/Exercicio1/main.c
        Pilha/Exercicio1/pilha.c
)

# Executável do Exercício 2
add_executable(ex2
        Pilha/Exercicio2/main.c
        Pilha/Exercicio2/Pilha.c
        Pilha/Exercicio2/Aluno.c
)
add_executable(Lista Lista/Exercicio1/Lista.c
        Lista/Exercicio1/Lista.c
        Lista/Exercicio1/Lista.h
        Lista/Exercicio1/main.c)
