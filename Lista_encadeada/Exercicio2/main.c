#include <stdio.h>
#include "Lista.h"

int main() {
    Lista *lista = criarLista();
    Veiculo *veiculo1 = CriarVeiculo("ABC1D23", "Toyota", 2015);
    Veiculo *veiculo2 = CriarVeiculo("XYZ9K87", "Honda", 2018);
    Veiculo *veiculo3 = CriarVeiculo("BRA2S45", "Ford", 2010);
    Veiculo *veiculo4 = CriarVeiculo("QWE8J90", "Volkswagen", 2020);
    Veiculo *veiculo5 = CriarVeiculo("RTY5L32", "Hyundai", 2017);
    Veiculo *veiculo6 = CriarVeiculo("MNB4P11", "Fiat", 2013);

    inserir(lista, veiculo1);
    inserir(lista, veiculo2);
    inserir(lista, veiculo3);
    inserir(lista, veiculo4);
    inserir(lista, veiculo5);
    inserir(lista, veiculo6);

    printf("\n\n\n\n");

    mostrar(lista);

    remover(lista, "QWE8J90");
    remover(lista, "ABC1D23");
    remover(lista, "MNB4P11");

    printf("\n\n\n\n");

    mostrar(lista);

    return 0;
}