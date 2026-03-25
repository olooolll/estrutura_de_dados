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
add_executable(Fila1 Fila/Exercicio1/Fila.c Fila/Exercicio1/Fila.h
        Fila/Exercicio1/main.c)

add_executable(Lista Lista/Exercicio1/Lista.c
        Lista/Exercicio1/Lista.c
        Lista/Exercicio1/Lista.h
        Lista/Exercicio1/main.c)

add_executable(Lista2 Lista/Exercicio2/Lista.c
        Lista/Exercicio2/Lista.c
        Lista/Exercicio2/Lista.h
        Lista/Exercicio2/main.c
        Lista/Exercicio2/Lista.h
        Lista/Exercicio2/Lista.c
        Lista/Exercicio2/Veiculo.c
        Lista/Exercicio2/Veiculo.h
        Lista/Exercicio2/main.c)

add_executable(Lista3
        Lista_encadeada/Exercicio1/main.c
        Lista_encadeada/Exercicio1/Lista.c
)

add_executable(Lista4
        Lista_encadeada/Exercicio2/main.c
        Lista_encadeada/Exercicio2/Lista.c
)

add_executable(Lista5
        Atividades_avaliativas/Exercicio1/Lista.c
        Atividades_avaliativas/Exercicio1/Lista.h
        Atividades_avaliativas/Exercicio1/main.c
)

target_link_libraries(Lista5 m)