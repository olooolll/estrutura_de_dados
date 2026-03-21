#include <stdlib.h>
#include <stdio.h>
#include "Pilha.h"
#include "Aluno.h"

typedef struct pilha {
    int topo;
    int tamanho;
    Aluno **alunos;
}Pilha;

Pilha *criarPilha() {
    Pilha *pilha = malloc(sizeof(Pilha));
    pilha->tamanho = 1;
    pilha->topo = -1;
    pilha->alunos = malloc(sizeof(Aluno *));

    return pilha;
};

int estaCheia(Pilha *pilha) {
    return (pilha->topo == pilha->tamanho -1) ? 1 : 0;
};

void adicionarEspaco(Pilha *pilha) {
    pilha->tamanho++;
    pilha->alunos = realloc(pilha->alunos, pilha->tamanho * sizeof(Aluno *));
}

void adcionarPilha(Pilha *pilha, Aluno *aluno) {
    if (estaCheia(pilha)) {
        adicionarEspaco(pilha);
    }

    pilha->alunos[pilha->topo += 1] = aluno;
};

int estaVazia(Pilha *pilha) {
    return (pilha->topo - pilha->tamanho == 0) ? 1 : 0;
}

void removerEspaco(Pilha *pilha) {
    pilha->tamanho--;
    liberarAluno(pilha->alunos[pilha->topo]);

    pilha->alunos = realloc(pilha->alunos, pilha->tamanho * sizeof(Aluno *));
}

void removerPilha(Pilha *pilha) {
    if (!estaVazia(pilha)) {
        removerEspaco(pilha);
    }
};

Aluno *topoPilha(Pilha *pilha) {
    return pilha->alunos[pilha->topo];
};

void mostraPilha(Pilha *pilha) {
    for (int i= pilha->topo; i>=0; i--) {
        printf("\n%s | %s",
            obterNome(pilha->alunos[i]),
            obterProntuario(pilha->alunos[i]));
    }
};

void liberarPilha(Pilha *pilha) {
    free(pilha);
};