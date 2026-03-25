#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Lista.h"


typedef struct fila {
    No *inicio;
    No *fim;
}Lista;

typedef struct no {
    float coeficiente;
    float iteral;
    struct no *proximo;
}No;

Lista *criarFila() {
    Lista *fila = malloc(sizeof(Lista));
    fila->inicio = 0;
    fila->fim = 0;

    return fila;
};

No *criarNo(float coeficiente, float iteral) {
    No *no = malloc(sizeof(No));
    no->coeficiente = coeficiente;
    no->iteral = iteral;
    no->proximo = 0;

    return no;
}

int estaVazia(Lista *fila) {
    return (fila->inicio == 0) ? 1 : 0;
}

No *inserir(Lista *fila, float coeficiente, float iteral) {
    No *no = criarNo(coeficiente, iteral);

    if (estaVazia(fila)) {
        fila->inicio = no;
        fila->fim = no;
        return no;
    }

    fila->fim->proximo = no;
    fila->fim = no;

    return no;
};

No *remover(Lista *fila, float coeficiente, float iteral) {
    if (estaVazia(fila)) return 0;
    No *auxiliar = fila->inicio;

    int bandeira = 0;
    do {
        bandeira = (auxiliar->coeficiente == coeficiente && auxiliar->iteral == iteral) ? 1 : 0;
        if (bandeira) return auxiliar;

        auxiliar = auxiliar->proximo;

    }while (bandeira != 1);

    return 0;

};

double avaliarPolinomio(Lista *lista, double x) {
    No *auxiliar = lista->inicio;
    double resultado = 0;

    do {
        resultado += (auxiliar->coeficiente * pow(x, auxiliar->iteral));
        auxiliar = auxiliar->proximo;

    }while (auxiliar != 0);

    return resultado;
};


void mostrar(Lista *lista) {
    printf("\n--------------");
    No *auxiliar = lista->inicio;

    do {
        printf("\nCoeficiente: %.2f", auxiliar->coeficiente);
        printf("\nIteral: %.2f", auxiliar->iteral);
        printf("\n--------------");


        auxiliar = auxiliar->proximo;
    }while (auxiliar != 0);

};