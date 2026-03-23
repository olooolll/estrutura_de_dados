#include "Veiculo.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct veiculo {
    char *placa;
    char *marca;
    int ano;

}Veiculo;

Veiculo *cria_veiculo(char *placa, char *marca, int ano) {
    Veiculo *veiculo = malloc(sizeof(Veiculo));
    veiculo->placa = placa;
    veiculo->marca = marca;
    veiculo->ano = ano;

    return veiculo;
}