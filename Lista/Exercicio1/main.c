#include <stdio.h>
#include <stdlib.h>
#include "Lista.h"

int main() {
    Lista *lista = criarLista();
    char palavra[] = "Guilherme";
    int tamanho = (sizeof(palavra) / sizeof(char)) - 1;

    for (int i=0; i<tamanho; i++) {
        inserir(lista, palavra[i]);
    }

    int index;
    do {

        char letra;
        printf("\nInforme uma letra: ");
        scanf("%c", &letra);

        index = buscar(lista, letra);
        if (index != -1) {
            printf("\nO indice %d foi encontrado na palavra '%s'", index, palavra);
        } else {
            printf("\nNão foi encontrado essa letra na palavra '%s'", palavra);
        }

    }while (index != -1);

    return 0;
}