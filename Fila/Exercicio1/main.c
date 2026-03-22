#include <stdio.h>
#include <stdlib.h>
#include "Fila.h"
#include "pilha.h"

int main() {
    int opcao;
    Fila *par = criarFila();
    Fila *impar = criarFila();
    int flag = 0;
    do {
        printf("\n Informe um número: "); scanf("%d", &opcao);
        int resultado = (opcao % 2);

        if (resultado) {
            enfilerar(impar, opcao);
            flag = 1;
        } else {
            enfilerar(par, opcao);
            flag = 0;
        }

        (flag)? desenfilerar(par):desenfilerar(impar);

        printf("\n---------------------");
        mostraFila(impar);
        mostraFila(par);
        printf("\n---------------------");


    }while (opcao != 0);

    return 0;
}
