typedef struct veiculo Veiculo;
typedef struct lista Lista;
typedef struct no No;

Lista *criarLista();
No *inserir(Lista *lista, Veiculo *modelo);
void remover(Lista *lista, char *placa);
No *buscar(Lista *lista, char *placa);
Veiculo *CriarVeiculo(char *placa, char *marca, int ano);
void mostrar(Lista *lista);