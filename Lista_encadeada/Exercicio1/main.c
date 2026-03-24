#include <stdio.h>
#include "Lista.h"

int main() {
    Lista *lista = criarLista();
    char palavra[] = "Guilherme Araujo";
    int tamanho = (sizeof(palavra) / sizeof(char)) - 1;
    for(int i=0; i<tamanho; i++) {
        inserir(lista, palavra[i]);
    }

    char letra;
    printf("Pesquise uma letra na palavra: "); scanf("%c", &letra);

    printf("%s", buscar(lista, letra) ? "SUCESS" : "ERROR");


    return 0;
}