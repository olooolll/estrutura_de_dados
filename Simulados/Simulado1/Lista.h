typedef struct lista Lista;
typedef struct monimo Monomio;

Lista *criarLista();
void adicionar(Lista *lista, int coeficiente, int literal);
double avaliarPolinomio(Lista *lista, double x);
