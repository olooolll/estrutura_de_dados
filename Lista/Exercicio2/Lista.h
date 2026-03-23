#include "Veiculo.h"
typedef struct lista Lista;

Lista *criarLista();
void remover(Lista *lista, char *placa);
void inserir(Lista *lista, Veiculo *veiculo);
int buscar(Lista *lista, char *placa);
void removerPlaca(Lista *lista, char *placa);
void mostrar(Lista *lista);
