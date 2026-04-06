#include <stdio.h>
#include <stdlib.h>
#include "Lista.h"


int main() {
    Lista *lista = criarLista();
    adicionar(lista, 3, 5);
    adicionar(lista, 6, 2);
    adicionar(lista, 1, 0);

    printf("\n%.2f", avaliarPolinomio(lista, 2));

}