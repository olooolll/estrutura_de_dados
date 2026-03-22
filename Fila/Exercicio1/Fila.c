#include <stdio.h>
#include <stdlib.h>
#include "Fila.h"

typedef struct fila {
  int *itens;
  int fim;
} Fila;

Fila *criarFila() {
  Fila *fila = malloc(sizeof(Fila));
  fila->fim = -1;
  fila->itens = malloc(sizeof(int));
  return fila;
};

void adicionarEspaco(Fila *fila) {
  fila->fim++;
  int qtd = (fila->fim == 0) ? 1 :fila->fim + 1;
  fila->itens = realloc(fila->itens, qtd * sizeof(int));

};

void enfilerar(Fila *fila, int item) {
  adicionarEspaco(fila);
  fila->itens[fila->fim] = item;

};

void realocando(Fila *fila) {
  if (fila->fim == -1) return;

  for (int i=0; i <= fila->fim; i++) {
    fila->itens[i] = fila->itens[i+1];
  }
}

void removerEspaco(Fila *fila) {
  if (fila->fim == -1) return;
  realocando(fila);

  fila->fim--;
  fila->itens = realloc(fila->itens, (fila->fim + 1) * sizeof(int));
}

int desenfilerar(Fila *fila) {
  if (fila->fim == -1) return 0;
  int resultado = fila->itens[0];
  removerEspaco(fila);

  return resultado;
};

int obterPrimeiro(Fila *fila) {
  if (fila->fim == -1) return 0;
  return fila->itens[0];
};

void mostraFila(Fila *fila) {

  printf("\n\n Index: | ");
  for (int i=0; i<=fila->fim; i++) {
    printf("%d | ", i);
  }
  printf("\n Itens: | ");
  for (int i=0; i<=fila->fim; i++) {
    printf("%d | ", fila->itens[i]);
  }
}
