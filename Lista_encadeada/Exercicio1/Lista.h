typedef struct lista Lista;
typedef struct no No;

Lista *criarLista();
No *inserir(Lista *lista, char item);
int *remover(Lista *lista, char item);
int buscar(Lista *lista, char item);
void mostrar(Lista *lista);