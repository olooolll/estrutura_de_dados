#include <stdio.h>
#include <stdlib.h>
#include "Lista.h"

typedef struct lista {
    No *inicio;
    No *fim;
}Lista;

typedef struct no {
    char item;
    struct no *proximo;
}No;

Lista *criarLista() {
    Lista *lista = malloc(sizeof(Lista));
    lista->inicio = 0;
    lista->fim = 0;

    return lista;
};

int verificarListaVazia(Lista *lista) {
    return (lista->inicio == 0) ? 1 : 0;
}

No *criarNo(char item) {
    No *no = malloc(sizeof(No));
    no->item = item;
    no->proximo = 0;

    return no;
};

No *inserir(Lista *lista, char item) {
    No *no = criarNo(item);

    if (verificarListaVazia(lista)) {
        lista->inicio = no;
        lista->fim = no;
        return no;
    }

    No *antigoFinal = lista->fim;

    antigoFinal->proximo = no;
    lista->fim = no;

    return no;
}


int *remover(Lista *lista, char item) {
    No *auxiliarAtual = lista->inicio;
    No *auxiliarAnterior = 0;

    do {
        auxiliarAnterior = auxiliarAtual;
        auxiliarAtual = auxiliarAtual->proximo;
    }while(auxiliarAtual->item != item || auxiliarAtual->proximo == 0);

    auxiliarAnterior->proximo = auxiliarAtual->proximo;

    free(auxiliarAtual);

};

int buscar(Lista *lista, char item) {
    No *auxiliar = lista->inicio;

    while(auxiliar != 0) {
        if (auxiliar->item == item) return 1;
        auxiliar = auxiliar->proximo;
    }

    return 0;
}


void mostrar(Lista *lista) {
    No *auxiliar = lista->inicio;
    do {
        printf("\n-------------------");
        printf("\nendereço: %p", auxiliar);
        printf("\nConteudo: %c", auxiliar->item);
        printf("\n-------------------");

        auxiliar = auxiliar->proximo;

    }while(auxiliar != 0);
};


