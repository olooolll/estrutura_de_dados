#include <stdio.h>
#include <stdlib.h>
#include "Lista.h"

typedef struct lista {
    int quantidade;
    char *itens;
}Lista;

Lista *criarLista() {
    Lista *lista = malloc(sizeof(lista));
    lista->quantidade = 0;
    lista->itens = malloc(sizeof(char));

    return lista;
};

void criarEspaco(Lista *lista) {
    lista->quantidade++;
    lista->itens = realloc(lista->itens, lista->quantidade * sizeof(char));

};

void inserir(Lista *lista, char item) {
    criarEspaco(lista);
    lista->itens[lista->quantidade - 1] = item;
};

void ordernarEspaco(Lista *lista) {
    for (int i = 0; i < lista->quantidade; i++) {
        if (lista->itens[i] == '\0') {
            lista->itens[i] = lista->itens[i+1];
            lista->itens[i+1] = '\0';
        }
    }
}

void removerEspaco(Lista *lista) {
    ordernarEspaco(lista);
    lista->itens = realloc(lista->itens, lista->quantidade * sizeof(char));
};

void remover(Lista *lista, char item) {
    if (lista->quantidade == 0) return;

    int index = buscar(lista, item);
    if (index == -1) return;

    if (lista->quantidade == 1) {
        lista->itens[0] = '\0';
        lista->quantidade--;
        return;
    }

    removerEspaco(lista);

    lista->quantidade--;
};

int buscar(Lista *lista, char item) {
    for (int i=0; i < lista->quantidade; i++) {
        if (lista->itens[i] == item) {
            lista->itens[i] = '\0';
            return i;
        };
    }
    return -1;
};

void mostrar(Lista *lista) {
    printf("\n\n---------------------------");
    printf("\n Itens: ");
    for (int i=0; i < lista->quantidade; i++) {
        printf("%c - ", lista->itens[i]);
    }

    printf("\n\n Index: ");
    for (int i=0; i < lista->quantidade; i++) {
        printf("%d - ", i);
    }
};