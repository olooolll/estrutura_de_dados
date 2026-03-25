#include <stdio.h>
#include <stdlib.h>
#include "Lista.h"

int main() {
    Lista *lista = criarFila();

    int contador =3;
    float coeficiente;
    float iteral;

    while (contador>0) {

        printf("\nInforme o valor do Coeficiente: "); scanf("%f", &coeficiente);
        printf("\nInforme o valor do Iteral: "); scanf("%f", &iteral);

        inserir(lista, coeficiente, iteral);

        contador--;
    }

    mostrar(lista);

    double x;
    printf("\nInforme o valor de X: "); scanf("%lf", &x);

    printf("\nResultado: %.2f", avaliarPolinomio(lista, x));



    return 0;
}