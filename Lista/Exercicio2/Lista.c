#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Lista.h"
#include "Veiculo.h"

typedef struct lista {
    int quantidade;
    Veiculo **veiculos;
} Lista;

Lista *criarLista() {
    Lista *lista = malloc(sizeof(Lista));
    lista->quantidade = 0;
    lista->veiculos = NULL;  // começa vazio
    return lista;
}

void criarEspaco(Lista *lista) {
    lista->quantidade++;
    lista->veiculos = realloc(lista->veiculos, lista->quantidade * sizeof(Veiculo *));
}

void inserir(Lista *lista, Veiculo *veiculo) {
    criarEspaco(lista);
    lista->veiculos[lista->quantidade - 1] = veiculo;
}

void ordernarEspaco(Lista *lista) {
    for (int i = 0; i < lista->quantidade - 1; i++) {
        if (lista->veiculos[i] == NULL) {
            lista->veiculos[i] = lista->veiculos[i + 1];
            lista->veiculos[i + 1] = NULL;
        }
    }
}

void removerEspaco(Lista *lista) {
    ordernarEspaco(lista);
    lista->veiculos = realloc(lista->veiculos, lista->quantidade * sizeof(Veiculo *));
}

void remover(Lista *lista, char *placa) {
    if (lista->quantidade == 0) return;

    int index = buscar(lista, placa);
    if (index == -1) return;

    if (lista->quantidade == 1) {
        lista->veiculos[0] = NULL;
        lista->quantidade--;
        return;
    }

    lista->veiculos[index] = NULL;
    lista->quantidade--;

    removerEspaco(lista);
}

int buscar(Lista *lista, char *placa) {
    for (int i = 0; i < lista->quantidade; i++) {
        if (lista->veiculos[i] != NULL &&
            strcmp(lista->veiculos[i]->placa, placa) == 0) {
            return i;
        }
    }
    return -1;
}

void mostrar(Lista *lista) {
    printf("\n\n---------------------------");
    printf("\nItens:\n");

    for (int i = 0; i < lista->quantidade; i++) {
        if (lista->veiculos[i] != NULL) {
            printf("%s - ", lista->veiculos[i]->placa);
        }
    }

    printf("\n\nIndex:\n");
    for (int i = 0; i < lista->quantidade; i++) {
        printf("%d - ", i);
    }
    printf("\n");
}