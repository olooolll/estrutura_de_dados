typedef struct fila Lista;
typedef struct no No;

Lista *criarFila();
No *inserir(Lista *fila, float coeficiente, float iteral);
No *remover(Lista *fila, float coeficiente, float iteral);
double avaliarPolinomio(Lista *lista, double x);
void mostrar(Lista *lista);