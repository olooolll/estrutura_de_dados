#include "Aluno.h"
typedef struct pilha Pilha;

Pilha *criarPilha();
void adcionarPilha(Pilha *pilha, Aluno *aluno);
void removerPilha(Pilha *pilha);
Aluno *topoPilha(Pilha *pilha);
void mostraPilha(Pilha *pilha);
void liberarPilha(Pilha *p);