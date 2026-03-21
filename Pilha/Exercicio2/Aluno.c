#include <stdio.h>
#include <stdlib.h>
#include "Aluno.h"

typedef struct aluno {
    char *nome;
    char *prontuario;
} Aluno;

Aluno *criarAluno(char *nome, char *prontuario) {
    Aluno *a = malloc(sizeof(Aluno));
    a->nome = nome;
    a->prontuario = prontuario;

    return a;
};


char *obterProntuario(Aluno *aluno) {
    return aluno->prontuario;
};

char *obterNome(Aluno *aluno) {
    return aluno->nome;
};

void liberarAluno(Aluno *aluno) {
    free(aluno);
};
