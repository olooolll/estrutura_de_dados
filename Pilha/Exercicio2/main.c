#include <stdio.h>
#include <stdlib.h>
#include "Pilha.h"
#include "Aluno.h"

int main() {
    Aluno *a = criarAluno("Guilherme Araujo", "SC3051862");
    Aluno *b = criarAluno("Ana Beatriz Silva", "SC301245X");
    Aluno *c = criarAluno("Marcos Oliveira Santos", "SC3025891");
    Aluno *d = criarAluno("Juliana Ferreira Costa", "SC3004772");
    Aluno *e = criarAluno("Ricardo Almeida Prado", "SC3011554");
    printf("%s\n", obterProntuario(a));
    printf("%s\n", obterNome(a));

    Pilha *p = criarPilha();
    adcionarPilha(p,a);
    adcionarPilha(p,b);
    adcionarPilha(p,c);
    adcionarPilha(p,d);
    adcionarPilha(p,e);

    mostraPilha(p);
    liberarPilha(p);
    return 0;
}