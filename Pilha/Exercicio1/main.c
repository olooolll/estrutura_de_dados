#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main() {
    Pilha *p;
    p = criar_pilha(0);

    FILE *fp;
    int c;
    fp = fopen("/home/gac/CLionProjects/dataStruct/Pilha/Exercicio1/pilha_de_chaves.txt","r"); /* Arquivo ASCII, para leitura */
    if(!fp)
    {
        printf( "Erro na abertura do arquivo");
        exit(0);
    }
    while((c = getc(fp) ) != EOF) {
        mostra(p);

        if (c == '{') empilhar(p, 1);

        if (c == '}') {
            if (topo(p) == 1) {
                desempilhar(p);
            }else empilhar(p, -1);
        };
    }


    return 0;
}