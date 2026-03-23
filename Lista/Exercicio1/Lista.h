typedef struct lista Lista;

Lista *criarLista();
void remover(Lista *lista, char item);
void inserir(Lista *lista, char item);
int buscar(Lista *lista, char item);
void mostrar(Lista *lista);
