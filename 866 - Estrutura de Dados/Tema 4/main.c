#include <stdio.h>
#include <stdlib.h>
#include "TADs_lineares_aloc_enc.h"

int main(void)
{
    TipoPilha *P1 = (TipoPilha *)malloc(sizeof(TipoPilha));
    CriaPilhaVazia(P1);

	TipoPilha *P2 = (TipoPilha *)malloc(sizeof(TipoPilha));
    CriaPilhaVazia(P2);

    printf("%i\n", TestaPilhaVazia(P1));
    printf("%i\n", TestaPilhaVazia(P2));
    printf("** INSIRA ELEMENTOS DAS PILHAS **\n\tpara encerrar insecao digite -1\n\n");

    TipoItem item;
    while (item.chave != -1) {
        printf("Insira o elemento da Pilha 1: "); scanf("%d", &item.chave);

        if (item.chave != -1) {
            InserePilha(P1, item);
        }
    }

    printf("\n");

    TipoItem item2;
    while (item2.chave != -1) {
        printf("Insira o elemento da Pilha 2: "); scanf("%d", &item2.chave);

        if (item2.chave != -1) {
            InserePilha(P2, item2);
        }
    }    

    // printf("%i\n", TestaPilhaVazia(pilha));

    printf("\n\n");
    ImprimePilha(P1);
    printf("\n\n");
    ImprimePilha(P2);

    printf("\n\n%i\n", TestaPilhaVazia(P1));
    printf("%i\n", TestaPilhaVazia(P2));

    return 0;
}
