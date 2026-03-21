typedef struct pilha Pilha;

Pilha *criar_pilha(int n);
void empilhar(Pilha *p, int n);
void desempilhar(Pilha *p);
int topo(Pilha *p);
int mostra(Pilha *p);