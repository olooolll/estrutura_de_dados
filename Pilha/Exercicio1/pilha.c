#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

typedef struct pilha {
    int *dados;
    int topo;
    int max;
}Pilha;

Pilha *criar_pilha(int n) {
    Pilha *p = malloc(sizeof(Pilha));

    if (n<=0) n=1;

    p->dados = malloc(n * sizeof(int));
    p->topo = 0;
    p->max = n;

    return p;
};

int estaCheio(Pilha *p) {
    return (p->topo == p->max) ? 1:0;
}

void adicionarEspaco(Pilha *p) {
    p->max++;
    p->dados = realloc(p->dados, p->max * sizeof(int));
}

void empilhar(Pilha *p, int n) {
    if (estaCheio(p)) {
        adicionarEspaco(p);
    }
    p->dados[p->topo++] = n;
};

int estaVazio(Pilha *p) {
    return (p->topo == 0) ? 1:0;
}

void removerEspaco(Pilha *p) {
    p->max--;
    p->topo--;
    p->dados = realloc(p->dados, p->max * sizeof(int));
}

void desempilhar(Pilha *p) {
    if (!estaVazio(p)) {
        removerEspaco(p);
    }
};

int topo(Pilha *p) {
    return p->dados[p->topo -1];
};


int mostra(Pilha *p) {
    printf("\n\n-------------------------------------\n");
    for (int i=p->topo -1; i>=0; i--) {
        printf("%d | %d \n", i+1, p->dados[i]);
    }
};