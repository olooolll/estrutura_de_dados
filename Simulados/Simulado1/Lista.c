#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "Lista.h"

typedef struct lista {
    Monomio *inicio;
    Monomio *fim;

}Lista;

typedef struct monimo {
    double coeficiente;
    double literal;
    Monomio *proximo;

}Monomio;

Lista *criarLista() {
    Lista *lista = malloc(sizeof(Lista));
    lista->inicio = NULL;
    lista->fim = NULL;

    return lista;
};

int listaEstaVazia(Lista *lista) {
    return (lista->inicio == NULL) ? 1 : 0;
}


Monomio *criarMonomio(double coeficiente, double literal) {
    Monomio *monomio = malloc(sizeof(Monomio));
    monomio->coeficiente = coeficiente;
    monomio->literal = literal;
    monomio->proximo = NULL;

    return monomio;
};

void adicionar(Lista *lista, int coeficiente, int literal) {
    Monomio *monomio = criarMonomio(coeficiente, literal);

    if (listaEstaVazia(lista)) {
        lista->inicio = monomio;
    } else {
        lista->fim->proximo = monomio;
    }

    lista->fim = monomio;
};

double avaliarPolinomio(Lista *lista, double x) {
    if (listaEstaVazia(lista)) return -1;
    double total = 0;
    Monomio *monomio = lista->inicio;
    while (monomio != NULL) {
        total += monomio->coeficiente * pow(x,monomio->literal);

        monomio = monomio->proximo;
    }

    return total;
};
