#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Lista.h"

typedef struct veiculo {
    char *placa;
    char *marca;
    int ano;

} Veiculo;

typedef struct lista {
    No *inicio;
    No *fim;
}Lista;

typedef struct no {
    struct veiculo *modelo;
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

No *criarNo(Veiculo *modelo) {
    No *no = malloc(sizeof(No));
    no->modelo = modelo;
    no->proximo = 0;

    return no;
};

No *inserir(Lista *lista, Veiculo *modelo) {
    No *no = criarNo(modelo);

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


void remover(Lista *lista, char *placa) {
    No *atual = lista->inicio;
    No *anterior = 0;

    while (atual != 0 && strcmp(atual->modelo->placa, placa) != 0) {
        anterior = atual;
        atual = atual->proximo;
    }

    if (atual == 0) {
        return;
    }

    if (anterior == 0) {
        lista->inicio = atual->proximo;
    } else {
        anterior->proximo = atual->proximo;
    }

    free(atual);
}
No *buscar(Lista *lista, char *placa) {
    No *auxiliar = lista->inicio;
    Veiculo *modelo;

    while(auxiliar != 0) {
        modelo = auxiliar->modelo;
        if (strcmp(modelo->placa, placa)) return auxiliar;
        auxiliar = auxiliar->proximo;
    }

    return 0;
}

Veiculo *CriarVeiculo(char *placa, char *marca, int ano) {
    Veiculo *veiculo = malloc(sizeof(Veiculo));
    veiculo->placa = placa;
    veiculo->marca = marca;
    veiculo->ano = ano;

    return veiculo;
};


void mostrar(Lista *lista) {
    No *auxiliar = lista->inicio;
    do {
        printf("\n-------------------");
        printf("\nendereço: %p", auxiliar);
        printf("\nConteudo: %s", auxiliar->modelo->placa);
        printf("\nConteudo: %s", auxiliar->modelo->marca);
        printf("\nConteudo: %d", auxiliar->modelo->ano);

        auxiliar = auxiliar->proximo;

    }while(auxiliar != 0);
    printf("\n-------------------");

};


